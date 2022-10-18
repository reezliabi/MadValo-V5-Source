#pragma once
#include "struct.h"
#include "memory.h"
#include "offsets.h"
#include "defs.h"
#include <thread>
#include "skCrypt.h"
#include "settings.h"
#include "imgui/imgui.h"
#include "menu.h"
int g_width = GetSystemMetrics(SM_CXSCREEN);
int g_height = GetSystemMetrics(SM_CYSCREEN);
HWND menu;
HWND game;
//cache
UINT_PTR
gcameramanager,
glocalpawn,
glocaldamagehandler,
glocalplayercontroller;
int glocalteamid;
typedef struct {
	uintptr_t actor_ptr;
	uintptr_t damage_handler_ptr;
	uintptr_t player_state_ptr;
	uintptr_t root_component_ptr;
	uintptr_t mesh_ptr;
	uintptr_t bone_array_ptr;
	int bone_count;
	bool is_visible;
} EnemyPtr;
std::vector<EnemyPtr> enemy_array{};
struct FMinimalViewInfo {
	struct Vector3 Location; // 0x00(0x0c)
	struct Vector3 Rotation; // 0x0c(0x0c)
	float FOV; // 0x18(0x04)
};
struct FMinimalViewInfo2 {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Rotation; // 0x0c(0x0c)
	float FOV; // 0x18(0x04)
};
namespace SDK
{
	
	std::wstring s2ws(const std::string& str)
	{
		int size_needed = MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), NULL, 0);
		std::wstring wstrTo(size_needed, 0);
		MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), &wstrTo[0], size_needed);
		return wstrTo;
	}

	static uintptr_t GetVALORANTPID()
	{
		BYTE target_name[] = { 'V','A','L','O','R','A','N','T','-','W','i','n','6','4','-','S','h','i','p','p','i','n','g','.','e','x','e', 0 };
		std::wstring process_name = s2ws(std::string((char*)target_name));
		HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
		PROCESSENTRY32 entry;
		entry.dwSize = sizeof(entry);
		if (!Process32First(snapshot, &entry)) {
			return 0;
		}
		while (Process32Next(snapshot, &entry)) {
			if (s2ws(entry.szExeFile) == process_name) {
				return entry.th32ProcessID;
			}
		}
		return 0;
	}
	uintptr_t GetUWorld(uintptr_t base_address = g_base) {
		const auto key = read<uintptr_t>(base_address + UWORLD_KEY);
		const auto state = read<State>(base_address + UWORLD_STATE);
		const auto uworld_ptr = decrypt_uworld(key, (uintptr_t*)&state);
		return read<uintptr_t>(uworld_ptr);
	}
	std::vector<EnemyPtr> GetEnemyArray(uintptr_t actor_array, int actor_count) {
		std::vector<EnemyPtr> temp_enemy_collection{};
		size_t size = sizeof(uintptr_t);
		for (int i = 0; i < actor_count; i++) {
			uintptr_t actor = read_guarded<uintptr_t>(actor_array + (i * size));
			if (actor == 0x00) {
				continue;
			}
			uintptr_t unique_id = read<uintptr_t>(actor + UNIQUE_ID);
			if (unique_id != 18743553) {
				continue;
			}
			uintptr_t mesh = read_guarded<uintptr_t>(actor + MESH);
			if (!mesh) {
				continue;
			}

			uintptr_t player_state = read_guarded<uintptr_t>(actor + PLAYER_STATE);
			uintptr_t team_component = read_guarded<uintptr_t>(player_state + TEAM_COMP);
			int team_id = read_guarded<int>(team_component + TEAM_ID);
			int bone_count = read_guarded<int>(mesh + BONE_COUNT);
			bool is_bot = bone_count == 103;
			if (!settings::teamcheck)
			{
				if (team_id == glocalteamid && !is_bot) {
					continue;
				}
			}
			else
			{
				if (team_id == !glocalteamid && !is_bot) {
					continue;
				}
			}

			uintptr_t damage_handler = read_guarded<uintptr_t>(actor + DAMAGE_HANDLER);
			uintptr_t root_component = read_guarded<uintptr_t>(actor + ROOT_COMPONENT);
			uintptr_t bone_array = read_guarded<uintptr_t>(mesh + BONE_ARRAY);

			EnemyPtr enemy{
				actor,
				damage_handler,
				player_state,
				root_component,
				mesh,
				bone_array,
				bone_count,
				true
			};

			temp_enemy_collection.push_back(enemy);
		}
		return temp_enemy_collection;
	}
	Vector3 GetBone(DWORD_PTR mesh, int id)
	{
		DWORD_PTR array = read<uintptr_t>(mesh + BONE_ARRAY);
		if (array == NULL)
			array = read<uintptr_t>(mesh + BONE_ARRAY_CACHED);

		FTransform bone = read<FTransform>(array + (id * 0x30));

		FTransform ComponentToWorld = read<FTransform>(mesh + COMPONENT);
		D3DMATRIX Matrix;

		Matrix = MatrixMultiplication(bone.ToMatrixWithScale(), ComponentToWorld.ToMatrixWithScale());

		return Vector3(Matrix._41, Matrix._42, Matrix._43);
	}
	FVector GetBone2(DWORD_PTR mesh, int id)
	{
		DWORD_PTR array = read<uintptr_t>(mesh + BONE_ARRAY);
		if (array == NULL)
			array = read<uintptr_t>(mesh + BONE_ARRAY_CACHED);

		FTransform bone = read<FTransform>(array + (id * 0x30));

		FTransform ComponentToWorld = read<FTransform>(mesh + COMPONENT);
		D3DMATRIX Matrix;

		Matrix = MatrixMultiplication(bone.ToMatrixWithScale(), ComponentToWorld.ToMatrixWithScale());

		return FVector(Matrix._41, Matrix._42, Matrix._43);
	}
	auto ProjectWorldToScreen(Vector3 WorldLocation) -> Vector3
	{
		Vector3 Screenlocation = Vector3(0, 0, 0);

		FMinimalViewInfo camera = read<FMinimalViewInfo>(gcameramanager + 0x1FE0 + 0x10);

		D3DMATRIX tempMatrix = Matrix(camera.Rotation, Vector3(0, 0, 0));

		Vector3 vAxisX = Vector3(tempMatrix.m[0][0], tempMatrix.m[0][1], tempMatrix.m[0][2]),
			vAxisY = Vector3(tempMatrix.m[1][0], tempMatrix.m[1][1], tempMatrix.m[1][2]),
			vAxisZ = Vector3(tempMatrix.m[2][0], tempMatrix.m[2][1], tempMatrix.m[2][2]);

		Vector3 vDelta = WorldLocation - camera.Location;
		Vector3 vTransformed = Vector3(vDelta.Dot(vAxisY), vDelta.Dot(vAxisZ), vDelta.Dot(vAxisX));

		if (vTransformed.z < 1.f) vTransformed.z = 1.f;

		float FovAngle = camera.FOV;

		float ScreenCenterX = g_width / 2.0f;
		float ScreenCenterY = g_height / 2.0f;

		Screenlocation.x = ScreenCenterX + vTransformed.x * (ScreenCenterX / tanf(FovAngle * (float)M_PI / 360.f)) / vTransformed.z;
		Screenlocation.y = ScreenCenterY - vTransformed.y * (ScreenCenterX / tanf(FovAngle * (float)M_PI / 360.f)) / vTransformed.z;

		return Screenlocation;
	}
	auto ProjectWorldToScreen2(FVector WorldLocation) -> FVector
	{
		FVector Screenlocation = FVector(0, 0, 0);
		FMinimalViewInfo2 camera = read<FMinimalViewInfo2>(gcameramanager + 0x1FE0 + 0x10);

		D3DMATRIX tempMatrix = Matrix2(camera.Rotation, FVector(0, 0, 0));

		FVector vAxisX = FVector(tempMatrix.m[0][0], tempMatrix.m[0][1], tempMatrix.m[0][2]),
			vAxisY = FVector(tempMatrix.m[1][0], tempMatrix.m[1][1], tempMatrix.m[1][2]),
			vAxisZ = FVector(tempMatrix.m[2][0], tempMatrix.m[2][1], tempMatrix.m[2][2]);

		FVector vDelta = WorldLocation - camera.Location;
		FVector vTransformed = FVector(vDelta.Dot(vAxisY), vDelta.Dot(vAxisZ), vDelta.Dot(vAxisX));

		if (vTransformed.z < 1.f) vTransformed.z = 1.f;

		float FovAngle = camera.FOV;

		float ScreenCenterX = g_width / 2.0f;
		float ScreenCenterY = g_height / 2.0f;

		Screenlocation.x = ScreenCenterX + vTransformed.x * (ScreenCenterX / tanf(FovAngle * (float)M_PI / 360.f)) / vTransformed.z;
		Screenlocation.y = ScreenCenterY - vTransformed.y * (ScreenCenterX / tanf(FovAngle * (float)M_PI / 360.f)) / vTransformed.z;

		return Screenlocation;
	}
	auto IsVisible(DWORD_PTR mesh) -> bool
	{
		float fLastSubmitTime = read<float>(mesh + LAST_SUMBIT_TIME);
		float fLastRenderTimeOnScreen = read<float>(mesh + LAST_RENDER_TIME);
		const float fVisionTick = 0.06f;
		bool bVisible = fLastRenderTimeOnScreen + fVisionTick >= fLastSubmitTime;
		return bVisible;
	}

	void renderBoneLine(Vector3 first_bone_position, Vector3 second_bone_position, ImColor a) {
		Vector3 first_bone_screen_position = ProjectWorldToScreen(first_bone_position);
		ImVec2 fist_screen_position = ImVec2(first_bone_screen_position.x, first_bone_screen_position.y);
		Vector3 second_bone_screen_position = ProjectWorldToScreen(second_bone_position);
		ImVec2 second_screen_position = ImVec2(second_bone_screen_position.x, second_bone_screen_position.y);
		ImGui::GetOverlayDrawList()->AddLine(fist_screen_position, second_screen_position, a,2);
	}

	void DrawBones(EnemyPtr enemy, ImColor a) {
		Vector3 head_position = GetBone(enemy.mesh_ptr, 8);
		Vector3 neck_position;
		Vector3 chest_position = GetBone(enemy.mesh_ptr, 6);
		Vector3 l_upper_arm_position;
		Vector3 l_fore_arm_position;
		Vector3 l_hand_position;
		Vector3 r_upper_arm_position;
		Vector3 r_fore_arm_position;
		Vector3 r_hand_position;
		Vector3 stomach_position = GetBone(enemy.mesh_ptr, 4);
		Vector3 pelvis_position = GetBone(enemy.mesh_ptr, 3);
		Vector3 l_thigh_position;
		Vector3 l_knee_position;
		Vector3 l_foot_position;
		Vector3 r_thigh_position;
		Vector3 r_knee_position;
		Vector3 r_foot_position;
		if (enemy.bone_count == 102) { // MALE
			neck_position = GetBone(enemy.mesh_ptr, 19);

			l_upper_arm_position = GetBone(enemy.mesh_ptr, 21);
			l_fore_arm_position = GetBone(enemy.mesh_ptr, 22);
			l_hand_position = GetBone(enemy.mesh_ptr, 23);

			r_upper_arm_position = GetBone(enemy.mesh_ptr, 47);
			r_fore_arm_position = GetBone(enemy.mesh_ptr, 48);
			r_hand_position = GetBone(enemy.mesh_ptr, 49);

			l_thigh_position = GetBone(enemy.mesh_ptr, 75);
			l_knee_position = GetBone(enemy.mesh_ptr, 76);
			l_foot_position = GetBone(enemy.mesh_ptr, 78);

			r_thigh_position = GetBone(enemy.mesh_ptr, 82);
			r_knee_position = GetBone(enemy.mesh_ptr, 83);
			r_foot_position = GetBone(enemy.mesh_ptr, 85);
		}
		else if (enemy.bone_count == 99) { // FEMALE
			neck_position = GetBone(enemy.mesh_ptr, 19);

			l_upper_arm_position = GetBone(enemy.mesh_ptr, 21);
			l_fore_arm_position = GetBone(enemy.mesh_ptr, 40);
			l_hand_position = GetBone(enemy.mesh_ptr, 42);

			r_upper_arm_position = GetBone(enemy.mesh_ptr, 46);
			r_fore_arm_position = GetBone(enemy.mesh_ptr, 65);
			r_hand_position = GetBone(enemy.mesh_ptr, 67);

			l_thigh_position = GetBone(enemy.mesh_ptr, 78);
			l_knee_position = GetBone(enemy.mesh_ptr, 75);
			l_foot_position = GetBone(enemy.mesh_ptr, 77);

			r_thigh_position = GetBone(enemy.mesh_ptr, 80);
			r_knee_position = GetBone(enemy.mesh_ptr, 82);
			r_foot_position = GetBone(enemy.mesh_ptr, 84);
		}
		else if (enemy.bone_count == 103) { // BOT
			neck_position = GetBone(enemy.mesh_ptr, 9);

			l_upper_arm_position = GetBone(enemy.mesh_ptr, 33);
			l_fore_arm_position = GetBone(enemy.mesh_ptr, 30);
			l_hand_position = GetBone(enemy.mesh_ptr, 32);

			r_upper_arm_position = GetBone(enemy.mesh_ptr, 58);
			r_fore_arm_position = GetBone(enemy.mesh_ptr, 55);
			r_hand_position = GetBone(enemy.mesh_ptr, 57);

			l_thigh_position = GetBone(enemy.mesh_ptr, 63);
			l_knee_position = GetBone(enemy.mesh_ptr, 65);
			l_foot_position = GetBone(enemy.mesh_ptr, 69);

			r_thigh_position = GetBone(enemy.mesh_ptr, 77);
			r_knee_position = GetBone(enemy.mesh_ptr, 79);
			r_foot_position = GetBone(enemy.mesh_ptr, 83);
		}
		else {
			return;
		}

		renderBoneLine(head_position, neck_position,a);
		renderBoneLine(neck_position, chest_position, a);
		renderBoneLine(neck_position, l_upper_arm_position, a);
		renderBoneLine(l_upper_arm_position, l_fore_arm_position, a);
		renderBoneLine(l_fore_arm_position, l_hand_position, a);
		renderBoneLine(neck_position, r_upper_arm_position, a);
		renderBoneLine(r_upper_arm_position, r_fore_arm_position, a);
		renderBoneLine(r_fore_arm_position, r_hand_position, a);
		renderBoneLine(chest_position, stomach_position, a);
		renderBoneLine(stomach_position, pelvis_position, a);
		renderBoneLine(pelvis_position, l_thigh_position, a);
		renderBoneLine(l_thigh_position, l_knee_position, a);
		renderBoneLine(l_knee_position, l_foot_position, a);
		renderBoneLine(pelvis_position, r_thigh_position, a);
		renderBoneLine(r_thigh_position, r_knee_position, a);
		renderBoneLine(r_knee_position, r_foot_position, a);
	}
	float RadianToDegree(float radian)
	{
		return radian * (180 / M_PI);
	}

	float DegreeToRadian(float degree)
	{
		return degree * (M_PI / 180);

	}

	FVector RadianToDegree(FVector radians)
	{
		FVector degrees;
		degrees.x = radians.x * (180 / M_PI);
		degrees.y = radians.y * (180 / M_PI);
		degrees.z = radians.z * (180 / M_PI);
		return degrees;
	}

	FVector DegreeToRadian(FVector degrees)
	{
		FVector radians;
		radians.x = degrees.x * (M_PI / 180);
		radians.y = degrees.y * (M_PI / 180);
		radians.z = degrees.z * (M_PI / 180);
		return radians;
	}

	void ClampAngle(FVector& angle) {
		if (angle.x > 89.0f) angle.x = 89.f;
		if (angle.x < -89.0f) angle.x = -89.f;

		if (angle.y > 180.f) angle.y = 180.f;
		if (angle.y < -180.f) angle.y = -180.f;

		angle.z = 0.0f;
	}

	void Normalise(FVector& angle) {
		if (angle.x > 89.0f) angle.x -= 180.0f;
		if (angle.x < -89.0f) angle.x += 180.0f;

		while (angle.y > 180) angle.y -= 360.f;
		while (angle.y < -180) angle.y += 360.f;
	}
	FVector fhgfsdhkfshdghfsd205(FVector src, FVector dst)
	{
		FVector angle;
		angle.x = -atan2f(dst.x - src.x, dst.y - src.y) / M_PI * 180.0f + 180.0f;
		angle.y = asinf((dst.z - src.z) / src.Distance(dst)) * 180.0f / M_PI;
		angle.z = 0.0f;

		return angle;
	}
	FVector CaadadalcAngle(FVector src, FVector dst)
	{
		FVector angle;
		FVector delta = FVector((src.x - dst.x), (src.y - dst.y), (src.z - dst.z));

		double hyp = sqrtf(delta.x * delta.x + delta.y * delta.y);

		angle.x = atanf(delta.z / hyp) * (180.0f / hyp);
		angle.y = atanf(delta.y / delta.x) * (180.0f / M_PI);
		angle.z = 0;
		if (delta.x >= 0.0) angle.y += 180.0f;

		return angle;
	}
	void NormalizeAngles(FVector& angle)
	{
		while (angle.x > 89.0f)
			angle.x -= 180.f;

		while (angle.x < -89.0f)
			angle.x += 180.f;

		while (angle.y > 180.f)
			angle.y -= 360.f;

		while (angle.y < -180.f)
			angle.y += 360.f;
	}
	float GetFov(const FVector viewAngle, const FVector aimAngle)
	{
		FVector Delta = FVector(aimAngle.x - viewAngle.x, aimAngle.y - viewAngle.y, aimAngle.z - viewAngle.z);
		NormalizeAngles(Delta);
		return sqrt(pow(Delta.x, 2.0f) + pow(Delta.y, 2.0f));
	}
	void normalize(FVector& in)
	{
		if (in.x > 89.f) in.x -= 360.f;
		else if (in.x < -89.f) in.x += 360.f;

		// in.y = fmodf(in.y, 360.0f);
		while (in.y > 180)in.y -= 360;
		while (in.y < -180)in.y += 360;
		in.z = 0;
	}

	FVector SmoothAim(FVector Camera_rotation, FVector Target, float SmoothFactor)
	{
		FVector diff = Target - Camera_rotation;
		normalize(diff);
		return Camera_rotation + diff / SmoothFactor;
	}
	__forceinline void Clamp(FVector& Ang) {
		if (Ang.x < 0.f)
			Ang.x += 360.f;

		if (Ang.x > 360.f)
			Ang.x -= 360.f;

		if (Ang.y < 0.f) Ang.y += 360.f;
		if (Ang.y > 360.f) Ang.y -= 360.f;
		Ang.z = 0.f;
	}
	FVector aimbot(float x, float y)
	{
		float ScreenCenterX = g_width / 2;
		float ScreenCenterY = g_height / 2;
		int AimSpeed = settings::smooth;
		float TargetX = 0;
		float TargetY = 0;

		if (x != 0)
		{
			if (x > ScreenCenterX)
			{
				TargetX = -(ScreenCenterX - x);
				if (TargetX + ScreenCenterX > ScreenCenterX * 2) TargetX = 0;
			}

			if (x < ScreenCenterX)
			{
				TargetX = x - ScreenCenterX;
				if (TargetX + ScreenCenterX < 0) TargetX = 0;
			}
		}

		if (y != 0)
		{
			if (y > ScreenCenterY)
			{
				TargetY = -(ScreenCenterY - y);
				if (TargetY + ScreenCenterY > ScreenCenterY * 2) TargetY = 0;
			}

			if (y < ScreenCenterY)
			{
				TargetY = y - ScreenCenterY;
				if (TargetY + ScreenCenterY < 0) TargetY = 0;
			}
		}

		return FVector(TargetX, TargetY, 0);
	}
	void RCS(FVector Target, FVector Camera_rotation, float SmoothFactor) {

		// Camera 2 Control space
		FVector ConvertRotation = Camera_rotation;
		normalize(ConvertRotation);

		// Calculate recoil/aimpunch
		auto ControlRotation = read<FVector>(glocalplayercontroller + CONTROL_ROT);
		FVector DeltaRotation = ConvertRotation - ControlRotation;
		normalize(DeltaRotation);

		// Remove aimpunch from CameraRotation
		ConvertRotation = Target - (DeltaRotation * SmoothFactor);
		normalize(ConvertRotation);

		//Smooth the whole thing
		FVector Smoothed = SmoothAim(Camera_rotation, ConvertRotation, SmoothFactor);
		Smoothed -= (DeltaRotation / SmoothFactor);
		Clamp(Smoothed);
		normalize(Smoothed);
		// *(float*)(PlayerController + Offsets::ControlRotation) = Smoothed.X;
		//*(float*)(PlayerController + 0x3F4) = Smoothed.Y;
		//*(D3DXVECTOR3*)(PlayerController + Offsets::ControlRotation) = D3DXVECTOR3(Smoothed.x, Smoothed.y, 0);
		write<FVector2D>(glocalplayercontroller + CONTROL_ROT, FVector2D(Smoothed.x, Smoothed.y));
		return;
	}
	void RCS2(FVector TargetRotation, float SmoothFactor) {
		FVector DeltaRotation = FVector(0, 0, 0);
		FVector ConvertRotation = FVector(0, 0, 0);
		Sleep(5);
		FVector ControlRotation = read<FVector>(glocalplayercontroller + CONTROL_ROT);
		FMinimalViewInfo2 camera = read<FMinimalViewInfo2>(gcameramanager + 0x1FE0 + 0x10);
		// Camera 2 Control space
		if (camera.Rotation.x < 0.f) {
			ConvertRotation.x = 360.f + camera.Rotation.x;
		}
		else {
			ConvertRotation.x = camera.Rotation.x;
		}
		if (camera.Rotation.y < 0.f) {
			ConvertRotation.y = 360.f + camera.Rotation.y;
		}
		else {
			ConvertRotation.y = camera.Rotation.y;
		}

		// Calculate recoil/aimpunch
		DeltaRotation.x = ConvertRotation.x - ControlRotation.x;
		DeltaRotation.y = ConvertRotation.y - ControlRotation.y;
		// (-360, 360)
		Sleep(5);
		DeltaRotation.x = fmodf(DeltaRotation.x, 360.f);
		DeltaRotation.y = fmodf(DeltaRotation.y, 360.f);

		Sleep(5);
		// Remove 2x aimpunch from CameraRotation
		ConvertRotation.x = TargetRotation.x - DeltaRotation.x - DeltaRotation.x;
		ConvertRotation.y = TargetRotation.y - DeltaRotation.y - DeltaRotation.y;
		// (-360, 360)
		Sleep(5);
		ConvertRotation.x = fmodf(ConvertRotation.x, 360.f);
		ConvertRotation.y = fmodf(ConvertRotation.y, 360.f);
		// [0, 360)
		if (ConvertRotation.x < 0.f) {
			ConvertRotation.x = 360.f + ConvertRotation.x;
		}
		if (ConvertRotation.y < 0.f) {
			ConvertRotation.y = 360.f + ConvertRotation.y;
		}
		if (glocalpawn != 0) {
			write<FVector>(glocalplayercontroller + CONTROL_ROT, ConvertRotation);
		}
		Sleep(5);
	}
	#define Const_RadToUnrRot                          10430.3783504704527
	FVector AimLock(FVector Target) {
		FMinimalViewInfo2 camera = read<FMinimalViewInfo2>(gcameramanager + 0x1FE0 + 0x10);
		FVector ControlRotation = read<FVector>(glocalplayercontroller + CONTROL_ROT);
		FVector Delta = FVector((camera.Rotation.x - Target.x), (camera.Rotation.y - Target.y), (camera.Rotation.z - Target.z));
		float hyp = sqrtf(Delta.x * Delta.x + Delta.y * Delta.y + Delta.z * Delta.z);

		FVector Rotation{};
		Rotation.x = acosf(Delta.z / hyp) * (float)(Const_RadToUnrRot);
		Rotation.y = atanf(Delta.y / Delta.x) * (float)(Const_RadToUnrRot);
		Rotation.z = 0;

		Rotation.x += 270.f;
		if (Rotation.x > 360.f) {
			Rotation.x -= 360.f;
		}
		if (Delta.x >= 0.0f) {
			Rotation.y += 180.0f;
		}
		if (Rotation.y < 0.f) {
			Rotation.y += 360.f;
		}

		return Rotation;

	}
	float CalculateDistance(int p1x, int p1y, int p2x, int p2y)
	{
		float diffY = p1y - p2y;
		float diffX = p1x - p2x;
		return sqrt((diffY * diffY) + (diffX * diffX));
	}
	int ActorLoop()
	{
		float distance = 999999;
		int hedef = -1;
		FMinimalViewInfo2 camera = read<FMinimalViewInfo2>(gcameramanager + 0x1FE0 + 0x10);

		std::vector<EnemyPtr> local_enemy_collection = enemy_array;

		if (local_enemy_collection.empty())
		{
			return -1;
		}

		int dwIndex = -1;

		auto playerControllerViewAngles = read<FVector>(glocalplayercontroller + 0x440);

		for (int i = 0; i < local_enemy_collection.size(); i++)
		{

			EnemyPtr enemy = local_enemy_collection[i];
			if (enemy.bone_count < 100) continue;

			bool IsDormant = read<bool>(enemy.actor_ptr + DORMANT);
			if (!IsDormant)
				continue;

			//float health = read<float>(enemy.damage_handler_ptr + HEALTH);
			Vector3 vHeadBone = GetBone(enemy.mesh_ptr, 8); // 8 = head bone
			//FVector root_position = read<FVector>(enemy.root_component_ptr + ROOT_POS);

			if (Visible_Lock) {
				if (!IsVisible(enemy.mesh_ptr))
				{
					continue;
				}
			}

			Vector3 vHeadBoneOut = SDK::ProjectWorldToScreen(vHeadBone);
			//std::cout << vHeadBoneOut.x << " : " << vHeadBoneOut.y << std::endl;
			float dist = CalculateDistance(g_width / 2, g_height / 2, vHeadBoneOut.x, vHeadBoneOut.y);
			/*if (dist < distance && (g_width/2)- (Aim_Bot_FOV_X_Int /2) < vHeadBoneOut.x < (g_width / 2) + (Aim_Bot_FOV_X_Int /2) && (g_height / 2) - (Aim_Bot_FOV_Y_Int / 2) < vHeadBoneOut.x  < (g_height / 2) + (Aim_Bot_FOV_Y_Int / 2) )
			{
				distance = dist;
				hedef = i;
			}*/
			
			if (dist < distance && dist < Aim_Bot_FOV_X_Int)
			{
				distance = dist;
				hedef = i; 
			}

			/// FVector pLocalCameraRot = read<FVector>(glocalplayercontroller + CONTROL_ROT);
			//FVector vecCaclculatedAngles = fhgfsdhkfshdghfsd205(camera.Location, neck_position);
			//FVector angleEx = CaadadalcAngle(camera.Location, neck_position);
			//FVector fin = FVector(vecCaclculatedAngles.y, angleEx.y, 0);
			//float temp = GetFov(pLocalCameraRot, fin);
			//if (6 temp < *flFoV)
			//{
			//	dwIndex = i;
			//	flFoV = temp;
			//} /
				//Sleep(3);
		}

		return hedef;
	}
	static Vector3 pRadar;
	void DrawCircleRadar(int x, int y, int radius, ImVec4 color)
	{
		ImGui::GetOverlayDrawList()->AddCircleFilled(ImVec2(x, y), radius, ImGui::ColorConvertFloat4ToU32(color));
	}
	Vector2 WorldRadar(Vector3 srcPos, Vector3 distPos, float yaw, float radarX, float radarY, float size)
	{
		auto cosYaw = cos(DegreeToRadian(yaw));
		auto sinYaw = sin(DegreeToRadian(yaw));

		auto deltaX = srcPos.x - distPos.x;
		auto deltaY = srcPos.y - distPos.y;

		auto locationX = (float)(deltaY * cosYaw - deltaX * sinYaw) / 45.f;
		auto locationY = (float)(deltaX * cosYaw + deltaY * sinYaw) / 45.f;

		if (locationX > (size - 2.f))
			locationX = (size - 2.f);
		else if (locationX < -(size - 2.f))
			locationX = -(size - 2.f);

		if (locationY > (size - 6.f))
			locationY = (size - 6.f);
		else if (locationY < -(size - 6.f))
			locationY = -(size - 6.f);

		return Vector2((int)(-locationX + radarX), (int)(locationY + radarY));
	}
	void DrawRadar(Vector3 EntityPos)
	{
		auto radar_posX = pRadar.x + 135;
		auto radar_posY = pRadar.y + 135;
		if (glocalpawn == 0) return;
		uint64_t LocalRootComp = read<uint64_t>(glocalpawn + ROOT_COMPONENT);
		FMinimalViewInfo camera = read<FMinimalViewInfo>(gcameramanager + 0x1FE0 + 0x10);
		Vector3 LocalPos = read<Vector3>(LocalRootComp + ROOT_POS);
		auto Radar2D = WorldRadar(LocalPos, EntityPos, camera.Rotation.y, radar_posX, radar_posY, 135.f);
		DrawCircleRadar(Radar2D.x, Radar2D.y, 4, R1);
	}
}