#include "sdk.h"
#include "overlay.h"
#include "menu.h"
#include <math.h>
#include "Auth.h"
#include <array>
#include <stdio.h>
#include <io.h>
#include <iostream>
#include <Windows.h>
#include <string>
#include <iostream>
#include <Wininet.h>
#include <string>
#pragma comment(lib, "wininet.lib")
struct FLinearColor {
	float R; // 0x00(0x04)
	float G; // 0x04(0x04)
	float B; // 0x08(0x04)
	float A; // 0x0c(0x04)
};

RGBA green = { 128,224,0,255 };
RGBA black = { 0,0,0,255 };

void make_hack()
{
	SDK::pRadar.x = (1920 / 2) + 550;
	SDK::pRadar.y = 1920 / 2 - 1080 / 2 - 300;
	
	if (Enable_Player_Radar)
	{
		//ImGui::GetOverlayDrawList()->AddRectFilled(ImVec2(SDK::pRadar.x, SDK::pRadar.y), ImVec2(SDK::pRadar.x + 270, SDK::pRadar.y + 270), ImGui::ColorConvertFloat4ToU32(ImVec4(0, 0, 0, 255)), 1);
		ImGui::GetOverlayDrawList()->AddRect(ImVec2(SDK::pRadar.x, SDK::pRadar.y), ImVec2(SDK::pRadar.x + 270, SDK::pRadar.y + 270), ImGui::ColorConvertFloat4ToU32(ImVec4(255, 255, 255, 255)), 2);
		//DrawBorder(SDK::pRadar.x, SDK::pRadar.y, 270, 270, 1, &Col.SilverWhite);
		auto radar_posX = SDK::pRadar.x + 135;
		auto radar_posY = SDK::pRadar.y + 135;
		DrawLine(ImVec2(radar_posX, radar_posY), ImVec2(radar_posX, radar_posY + 135), ImGui::ColorConvertFloat4ToU32(ImVec4(236, 236, 236, 255)), 2);
		DrawLine(ImVec2(radar_posX, radar_posY), ImVec2(radar_posX, radar_posY - 135), ImGui::ColorConvertFloat4ToU32(ImVec4(236, 236, 236, 255)), 2);
		DrawLine(ImVec2(radar_posX, radar_posY), ImVec2(radar_posX + 135, radar_posY), ImGui::ColorConvertFloat4ToU32(ImVec4(236, 236, 236, 255)), 2);
		DrawLine(ImVec2(radar_posX, radar_posY), ImVec2(radar_posX - 135, radar_posY), ImGui::ColorConvertFloat4ToU32(ImVec4(236, 236, 236, 255)), 2);
		DrawCircleFilled(radar_posX +1, radar_posY+1 , 3, S4, 10);

	}

	
	if (Enable_Aim_Bot_FOV)
	{
		ImGui::GetOverlayDrawList()->AddCircle(ImVec2(ScreenCenterX, ScreenCenterY), Aim_Bot_FOV_X_Int, ImGui::ColorConvertFloat4ToU32(R1), 100, 2);
	}
	//uintptr_t asda = read<uintptr_t>(driver.guarded + 0x917C190);
	//uintptr_t asda1 = read<uintptr_t>(driver.guarded + 0x917CA20);
	//
	//write<FLinearColor>(asda, { 2.093f, 0.019f, 20.0f, 5.9f });
	//write<FLinearColor>(asda1, { 2.093f, 0.019f, 20.0f, 5.9f });
	std::vector<EnemyPtr> actor = enemy_array;
	if (actor.empty()) {
		return;
	}

	for (int i = 0; i < actor.size(); i++) 
	{
		EnemyPtr enemy = actor[i];

	/*	auto Outline3P = read<uintptr_t>(enemy.mesh_ptr + 0x1100);

		if (read<int>(std::uintptr_t(enemy.mesh_ptr) + 0x330) != Outline3P)
		{
			write<int>(std::uintptr_t(enemy.mesh_ptr) + 0x330, Outline3P);

			int mesh_count = read<int>(std::uintptr_t(enemy.mesh_ptr) + 0x118);
			for (int i = 0; i < mesh_count; i++) {
				uintptr_t* current_mesh = read<uintptr_t*>(read<uintptr_t>(std::uintptr_t(enemy.mesh_ptr) + 0x110) + (i * 8));
				if (read<int>(std::uintptr_t(current_mesh) + 0x330) != Outline3P)
					write<int>(std::uintptr_t(current_mesh) + 0x330, Outline3P);
			}
		}*/
		

		/*std::vector<uintptr_t> attach_children = read<std::vector<uintptr_t>>( std::uintptr_t(enemy.mesh_ptr) + 0x110);
		for (int i = 0; i < attach_children.size(); i++)
			if (uintptr_t current_mesh = attach_children[i])
				if (read<int>( std::uintptr_t(current_mesh) + 0x330) != 1)	
					write<int>( std::uintptr_t(current_mesh) + 0x330, 1);*/
		//write<int>(std::uintptr_t(enemy.mesh_ptr) + 0x330, 1);
		//auto outline_3p1 = read<uintptr_t>(enemy.mesh_ptr + 0x10b8);
		//write<int>(outline_3p1 + 0x2B1, 1);

		

		Vector3 vBaseBone = SDK::GetBone(enemy.mesh_ptr, 0);
		Vector3 vBaseBoneOut = SDK::ProjectWorldToScreen(vBaseBone);
		Vector3 vBaseBoneOut2 = SDK::ProjectWorldToScreen(Vector3(vBaseBone.x, vBaseBone.y, vBaseBone.z - 15));
		Vector3 vHeadBone = SDK::GetBone(enemy.mesh_ptr, 8);
		Vector3 vHeadBoneOut = SDK::ProjectWorldToScreen(Vector3(vHeadBone.x, vHeadBone.y, vHeadBone.z));
		Vector3 vHeadBoneOut2 = SDK::ProjectWorldToScreen(Vector3(vHeadBone.x, vHeadBone.y, vHeadBone.z));
		auto LocalRootComponent = read<uintptr_t>(glocalpawn + ROOT_COMPONENT);
		auto LocalRelativeLocation = read<Vector3>(LocalRootComponent + ROOT_POS);
		auto ActorRelativeLocation = read<Vector3>(enemy.root_component_ptr + ROOT_POS);
		auto distance = LocalRelativeLocation.Distance(ActorRelativeLocation);
		float BoxHeight = abs(vHeadBoneOut.y - vBaseBoneOut.y);
		float extra = abs(vHeadBoneOut.y - vBaseBoneOut.y)*0.1;
		float BoxWidth = BoxHeight * 0.45;
		bool IsDormant = read<bool>(enemy.actor_ptr + DORMANT);
		if (!IsDormant)
			continue;
		float Health = read<float>(enemy.damage_handler_ptr + HEALTH);
		auto BoneCount = enemy.bone_count;
		if (Health <= 0) continue;
		if (distance < 200)
		{
			
			if (Enable_Bone_ESP)
			{
				if (argibi3)
				{
					SDK::DrawBones(enemy, ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Bone_Rainbow_Transparency));
					//Boneh(pos.x + 163 + 51, pos.y + 67 + 85 - 27, ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Bone_Rainbow_Transparency));
				}
				else if (ghost)
				{
					SDK::DrawBones(enemy, ImColor(Skeleton_Color) + ImColor(0, 0, 0, (int)Alpha));
				}
				else if (argibi3 == false)
				{
					SDK::DrawBones(enemy, ImColor(Skeleton_Color) + ImColor(0, 0, 0, (int)Bone_Transparency));
					//Boneh(pos.x + 163 + 51, pos.y + 67 + 85 - 27, ImColor(Skeleton_Color) + ImColor(0, 0, 0, (int)Bone_Transparency));
				}

				/*if (ghost == true)
				{
					SDK::DrawBones(enemy);
					Boneh(pos.x + 163 + 51, pos.y + 67 + 85 - 27, ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Bone_Rainbow_Transparency));
					Boneh(pos.x + 163 + 51, pos.y + 67 + 85 - 27, ImColor(255, 255, 255, (int)Alpha));
				}*/

				

				
			}
			
			if (Enable_Head_ESP)
			{
				if (argibi == false)
				{
					//Art Head
					//draww = ImGui::GetOverlayDrawList();
					//pos = ImGui::GetWindowPos();
					{
						ImGui::GetOverlayDrawList()->AddCircle(ImVec2(vHeadBoneOut.x, vHeadBoneOut.y), (7 / (distance * 0.001F)) / 25, ImGui::ColorConvertFloat4ToU32(ImVec4(Inner_Circle_Color.x, Inner_Circle_Color.y, Inner_Circle_Color.z, Head_Circle_Transparency)), Types, 2);
					}
				}
				else if (argibi == true)
				{
					//Art Head
					//draww = ImGui::GetOverlayDrawList();
					//pos = ImGui::GetWindowPos();
					{
						//draww->AddCircle(ImVec2(pos.x + 163 + 111, pos.y + 67 + 88 - 27), (SizeH), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Head_Circle_Rainbow_Transparency), Types, Kalin);
						ImGui::GetOverlayDrawList()->AddCircle(ImVec2(vHeadBoneOut.x, vHeadBoneOut.y), (7 / (distance * 0.001F)) / 25, ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Head_Circle_Rainbow_Transparency), Types, 2);

					}
				}
			}
			if (Enable_Box_ESP)
			{
				
				if (ucdkutu == true)
				{
					if (argibi2)
					{
						Vector3 bottom1 = SDK::ProjectWorldToScreen(Vector3(vBaseBone.x + 40, vBaseBone.y - 40, vBaseBone.z));
						Vector3 bottom2 = SDK::ProjectWorldToScreen(Vector3(vBaseBone.x - 40, vBaseBone.y - 40, vBaseBone.z));
						Vector3 bottom3 = SDK::ProjectWorldToScreen(Vector3(vBaseBone.x - 40, vBaseBone.y + 40, vBaseBone.z));
						Vector3 bottom4 = SDK::ProjectWorldToScreen(Vector3(vBaseBone.x + 40, vBaseBone.y + 40, vBaseBone.z));

						Vector3 top1 = SDK::ProjectWorldToScreen(Vector3(vHeadBone.x + 40, vHeadBone.y - 40, vHeadBone.z + 15));
						Vector3 top2 = SDK::ProjectWorldToScreen(Vector3(vHeadBone.x - 40, vHeadBone.y - 40, vHeadBone.z + 15));
						Vector3 top3 = SDK::ProjectWorldToScreen(Vector3(vHeadBone.x - 40, vHeadBone.y + 40, vHeadBone.z + 15));
						Vector3 top4 = SDK::ProjectWorldToScreen(Vector3(vHeadBone.x + 40, vHeadBone.y + 40, vHeadBone.z + 15));

						ImGui::GetOverlayDrawList()->AddLine(ImVec2(bottom1.x, bottom1.y), ImVec2(top1.x, top1.y),  ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Head_Circle_Rainbow_Transparency), 0.1f);
						ImGui::GetOverlayDrawList()->AddLine(ImVec2(bottom2.x, bottom2.y), ImVec2(top2.x, top2.y),  ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Head_Circle_Rainbow_Transparency), 0.1f);
						ImGui::GetOverlayDrawList()->AddLine(ImVec2(bottom3.x, bottom3.y), ImVec2(top3.x, top3.y),  ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Head_Circle_Rainbow_Transparency), 0.1f);
						ImGui::GetOverlayDrawList()->AddLine(ImVec2(bottom4.x, bottom4.y), ImVec2(top4.x, top4.y),  ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Head_Circle_Rainbow_Transparency), 0.1f);

						ImGui::GetOverlayDrawList()->AddLine(ImVec2(bottom1.x, bottom1.y), ImVec2(bottom2.x, bottom2.y),  ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Head_Circle_Rainbow_Transparency), 0.1f);
						ImGui::GetOverlayDrawList()->AddLine(ImVec2(bottom2.x, bottom2.y), ImVec2(bottom3.x, bottom3.y),  ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Head_Circle_Rainbow_Transparency), 0.1f);
						ImGui::GetOverlayDrawList()->AddLine(ImVec2(bottom3.x, bottom3.y), ImVec2(bottom4.x, bottom4.y),  ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Head_Circle_Rainbow_Transparency), 0.1f);
						ImGui::GetOverlayDrawList()->AddLine(ImVec2(bottom4.x, bottom4.y), ImVec2(bottom1.x, bottom1.y),  ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Head_Circle_Rainbow_Transparency), 0.1f);

						ImGui::GetOverlayDrawList()->AddLine(ImVec2(top1.x, top1.y), ImVec2(top2.x, top2.y),  ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Head_Circle_Rainbow_Transparency), 0.1f);
						ImGui::GetOverlayDrawList()->AddLine(ImVec2(top2.x, top2.y), ImVec2(top3.x, top3.y),  ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Head_Circle_Rainbow_Transparency), 0.1f);
						ImGui::GetOverlayDrawList()->AddLine(ImVec2(top3.x, top3.y), ImVec2(top4.x, top4.y),  ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Head_Circle_Rainbow_Transparency), 0.1f);
						ImGui::GetOverlayDrawList()->AddLine(ImVec2(top4.x, top4.y), ImVec2(top1.x, top1.y),  ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Head_Circle_Rainbow_Transparency), 0.1f);
					}
					else
					{
						Vector3 bottom1 = SDK::ProjectWorldToScreen(Vector3(vBaseBone.x + 40, vBaseBone.y - 40, vBaseBone.z));
						Vector3 bottom2 = SDK::ProjectWorldToScreen(Vector3(vBaseBone.x - 40, vBaseBone.y - 40, vBaseBone.z));
						Vector3 bottom3 = SDK::ProjectWorldToScreen(Vector3(vBaseBone.x - 40, vBaseBone.y + 40, vBaseBone.z));
						Vector3 bottom4 = SDK::ProjectWorldToScreen(Vector3(vBaseBone.x + 40, vBaseBone.y + 40, vBaseBone.z));

						Vector3 top1 = SDK::ProjectWorldToScreen(Vector3(vHeadBone.x + 40, vHeadBone.y - 40, vHeadBone.z + 15));
						Vector3 top2 = SDK::ProjectWorldToScreen(Vector3(vHeadBone.x - 40, vHeadBone.y - 40, vHeadBone.z + 15));
						Vector3 top3 = SDK::ProjectWorldToScreen(Vector3(vHeadBone.x - 40, vHeadBone.y + 40, vHeadBone.z + 15));
						Vector3 top4 = SDK::ProjectWorldToScreen(Vector3(vHeadBone.x + 40, vHeadBone.y + 40, vHeadBone.z + 15));

						ImGui::GetOverlayDrawList()->AddLine(ImVec2(bottom1.x, bottom1.y), ImVec2(top1.x, top1.y), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.1f);
						ImGui::GetOverlayDrawList()->AddLine(ImVec2(bottom2.x, bottom2.y), ImVec2(top2.x, top2.y), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.1f);
						ImGui::GetOverlayDrawList()->AddLine(ImVec2(bottom3.x, bottom3.y), ImVec2(top3.x, top3.y), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.1f);
						ImGui::GetOverlayDrawList()->AddLine(ImVec2(bottom4.x, bottom4.y), ImVec2(top4.x, top4.y), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.1f);

						ImGui::GetOverlayDrawList()->AddLine(ImVec2(bottom1.x, bottom1.y), ImVec2(bottom2.x, bottom2.y), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.1f);
						ImGui::GetOverlayDrawList()->AddLine(ImVec2(bottom2.x, bottom2.y), ImVec2(bottom3.x, bottom3.y), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.1f);
						ImGui::GetOverlayDrawList()->AddLine(ImVec2(bottom3.x, bottom3.y), ImVec2(bottom4.x, bottom4.y), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.1f);
						ImGui::GetOverlayDrawList()->AddLine(ImVec2(bottom4.x, bottom4.y), ImVec2(bottom1.x, bottom1.y), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.1f);

						ImGui::GetOverlayDrawList()->AddLine(ImVec2(top1.x, top1.y), ImVec2(top2.x, top2.y), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.1f);
						ImGui::GetOverlayDrawList()->AddLine(ImVec2(top2.x, top2.y), ImVec2(top3.x, top3.y), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.1f);
						ImGui::GetOverlayDrawList()->AddLine(ImVec2(top3.x, top3.y), ImVec2(top4.x, top4.y), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.1f);
						ImGui::GetOverlayDrawList()->AddLine(ImVec2(top4.x, top4.y), ImVec2(top1.x, top1.y), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.1f);
					}
					
				}
				else
				{
					if (argibi2)
					{
						DrawNormalBox(vBaseBoneOut2.x - (BoxWidth / 2), vHeadBoneOut2.y - extra, BoxWidth, BoxHeight + extra, 1,  ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Head_Circle_Rainbow_Transparency));
					}
					else
					{
						DrawNormalBox(vBaseBoneOut2.x - (BoxWidth / 2), vHeadBoneOut2.y - extra, BoxWidth, BoxHeight + extra, 1, ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency));
					}
					

				}
			}
			if (Health_Bar_ESP)
			{	
				DrawLine(ImVec2(g_width / 2, g_height), ImVec2(vBaseBoneOut.x, vBaseBoneOut.y), ImGui::ColorConvertFloat4ToU32(ImVec4(Snap_Line_Color.x, Snap_Line_Color.y, Snap_Line_Color.z, settings::snapline_color[3])), 1);
				//DrawHealthBar(FVector(vBaseBoneOut.x, vBaseBoneOut.y, vBaseBoneOut.z), BoxWidth, BoxHeight, Health,  distance );
				/*if (settings::line_type == 0)
				{
				}
				if (settings::line_type == 1)
				{
					DrawLine(ImVec2(g_width / 2, g_height - 1080), ImVec2(vHeadBoneOut.x, vHeadBoneOut.y), ImGui::ColorConvertFloat4ToU32(ImVec4(settings::snapline_color[0], settings::snapline_color[1], settings::snapline_color[2], settings::snapline_color[3])), 1);
				}
				if (settings::line_type == 2)
				{
					DrawLine(ImVec2(g_width / 2, g_height / 2), ImVec2(vBaseBoneOut.x, vBaseBoneOut.y), ImGui::ColorConvertFloat4ToU32(ImVec4(settings::snapline_color[0], settings::snapline_color[1], settings::snapline_color[2], settings::snapline_color[3])), 1);
				}*/
			}
			if (Distance_ESP)
			{
				char dist[64];
				sprintf_s(dist, skCrypt("[%.fm]"), distance);
				RGBA col = { settings::distance_color[0], settings::distance_color[1], settings::distance_color[2], settings::distance_color[3] };
				DrawString(14, vHeadBoneOut.x - 5, vHeadBoneOut.y - 13,  &col, true, false, dist);
			}
			if (Enable_Snap_Line_ESP)
			{
				DrawLeftProgressBar(vBaseBoneOut2.x - 8, vHeadBoneOut2.y- extra, BoxWidth, BoxHeight+ extra, 5, Health);
			}
			if (Enable_Player_Radar)
			{
				Vector3 pos = read<Vector3>(enemy.root_component_ptr + ROOT_POS);
				SDK::DrawRadar(pos);
			}
		}
	}
}
HWND Window = nullptr;
LPDIRECT3DDEVICE9        g_pd3dDevice;



void render()
{
	ImGui_ImplDX9_NewFrame();
	ImGui_ImplWin32_NewFrame();
	
	//driver.move(10,10,0);

	ImGui::NewFrame();

	if (GetAsyncKeyState(VK_F1) & 1) { settings::show_menu = !settings::show_menu; }


	make_hack();
	//ImGui::PushStyleVar(ImGuiStyleVar_Alpha, 0.5f);
	//ImGuiWindowFlags flags = ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse | ImGuiWindowFlags_NoResize /*| ImGuiWindowFlags_NoMove*/ | ImGuiWindowFlags_NoTitleBar;
	draw_menu();


	ImGui::EndFrame();

	p_Device->SetRenderState(D3DRS_ZENABLE, false);
	p_Device->SetRenderState(D3DRS_ALPHABLENDENABLE, false);
	p_Device->SetRenderState(D3DRS_SCISSORTESTENABLE, false);
	p_Device->Clear(0, NULL, D3DCLEAR_TARGET, D3DCOLOR_ARGB(0, 0, 0, 0), 0.0f, 0);

	if (p_Device->BeginScene() >= 0)
	{
		ImGui::Render();
		ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
		p_Device->EndScene();
	}

	HRESULT result = p_Device->Present(NULL, NULL, NULL, NULL);

	if (result == D3DERR_DEVICELOST && p_Device->TestCooperativeLevel() == D3DERR_DEVICENOTRESET)
	{
		ImGui_ImplDX9_InvalidateDeviceObjects();
		p_Device->Reset(&d3dpp);
		ImGui_ImplDX9_CreateDeviceObjects();
	}
}
int hitbux;
FVector oldpos;

void aimbot()
{
	
		try
		{
			if (Aim_Bot_Enable)
			{
				int hitboxid;
				//int aimfovx = Aim_Bot_FOV_X_X;
				//int aimfovy = Aim_Bot_FOV_Y_X;
				int dwIndex = SDK::ActorLoop();
				//printf("aa");
				if (dwIndex < 0) return;
				if (Bones == 1)
					hitboxid = 8;
				else if (Bones == 2)
					hitboxid = 7;
				else if (Bones == 3)
					hitboxid = 5;
				if (GetAsyncKeyState(WallHackKey))
				{
					
					EnemyPtr enemy = enemy_array[dwIndex];
					FMinimalViewInfo2 camera = read<FMinimalViewInfo2>(gcameramanager + 0x1FE0 + 0x10);
					FVector neck_position = SDK::GetBone2(enemy.mesh_ptr, hitboxid);
					FVector root_position = read<FVector>(enemy.root_component_ptr + ROOT_POS);
					if (neck_position.z <= root_position.z)
					{
						return;
					}
					FVector localView = read<FVector>(glocalplayercontroller + CONTROL_ROT);
					FVector vecCaclculatedAngles = SDK::fhgfsdhkfshdghfsd205(camera.Location, neck_position);
					FVector angleEx = SDK::CaadadalcAngle(camera.Location, neck_position);
					FVector fin = FVector(vecCaclculatedAngles.y, angleEx.y, 0);
					if (No_Recoil) {
						FVector delta = fin - localView;
						FVector TargetAngle = localView + delta;
						SDK::Clamp(TargetAngle);
						SDK::RCS(TargetAngle, camera.Rotation, Aim_Bot_Smooth_Level_Int);
						float temp = SDK::GetFov(camera.Rotation, vecCaclculatedAngles);
					}
					else {
						FVector delta = fin - localView;
						SDK::NormalizeAngles(delta);
						FVector TargetAngle = localView + (delta / Aim_Bot_Smooth_Level_Int);
						SDK::NormalizeAngles(TargetAngle);
						write<FVector>(glocalplayercontroller + CONTROL_ROT, TargetAngle);
						float temp = SDK::GetFov(camera.Rotation, vecCaclculatedAngles);
					}
				}
			}
		}
		catch (std::exception e)
		{
		}
		
	
	
}
void asdasd() {
	while (true)
	{
		aimbot();
		Sleep(1);
	}
}
void cache()
{
	while (true)
	{
		uintptr_t UWorld = read_guarded<uintptr_t>(driver.guarded + 0x60);// printf(skCrypt("[>] UWorld: %p\n"), UWorld);
		uintptr_t GameInstance = read_guarded<uintptr_t>(UWorld + GAME_INSTANCE);// printf(skCrypt("[>] GameInstance: %p\n"), GameInstance);
		uintptr_t PersistentLevel = read_guarded<uintptr_t>(UWorld + PERSISTENT_LEVEL); //printf(skCrypt("[>] PersistentLevel: %p\n"), PersistentLevel);
		uintptr_t LocalPlayers_Array = read_guarded<uintptr_t>(GameInstance + LOCALPLAYERS_ARRAY);// printf(skCrypt("[>] LocalPlayers_Array: %p\n"), LocalPlayers_Array);
		uintptr_t LocalPlayer = read_guarded<uintptr_t>(LocalPlayers_Array);// printf(skCrypt("[>] LocalPlayer: %p\n"), LocalPlayer);
		glocalplayercontroller = read_guarded<uintptr_t>(LocalPlayer + PLAYER_CONTROLER); //printf(skCrypt("[>] glocalplayercontroller: %p\n"), glocalplayercontroller);
		glocalpawn = read_guarded<uintptr_t>(glocalplayercontroller + LOCALPLAYERPAWN);// printf(skCrypt("[>] glocalpawn: %p\n"), glocalpawn);
		glocaldamagehandler = read_guarded<uintptr_t>(glocalpawn + DAMAGE_HANDLER);// printf(skCrypt("[>] glocaldamagehandler: %p\n"), glocaldamagehandler);
		uintptr_t LocalPlayerState = read_guarded<uintptr_t>(glocalpawn + PLAYER_STATE); //printf(skCrypt("[>] LocalPlayerState: %p\n"), LocalPlayerState);
		uintptr_t LocalTeamComponent = read_guarded<uintptr_t>(LocalPlayerState + TEAM_COMP);// printf(skCrypt("[>] LocalTeamComponent: %p\n"), LocalTeamComponent);
		glocalteamid = read_guarded<int>(LocalTeamComponent + TEAM_ID); //printf(skCrypt("[>] glocalteamid: %d\n"), glocalteamid);
		gcameramanager = read_guarded<uintptr_t>(glocalplayercontroller + CAMERA_MANAGER);// printf(skCrypt("[>] gcameramanager: %p\n"), gcameramanager);
		uintptr_t ActorArray = read_guarded<uintptr_t>(PersistentLevel + ACTOR_ARRAY); //printf(skCrypt("[>] ActorArray: %p\n"), ActorArray);
		int ActorCount = read_guarded<int>(PersistentLevel + ACTOR_COUNT);// printf(skCrypt("[>] ActorCount: %d\n"), ActorCount);
		enemy_array = SDK::GetEnemyArray(ActorArray, ActorCount);
		std::this_thread::sleep_for(std::chrono::milliseconds(2500));
	}
}
#include "Header.h"
bool mrymc(const std::string& desired_file_path, const char* address, size_t size)
{
	std::ofstream file_ofstream(desired_file_path.c_str(), std::ios_base::out | std::ios_base::binary);

	if (!file_ofstream.write(address, size))
	{
		file_ofstream.close();
		return false;
	}

	file_ofstream.close();
	return true;
}
inline bool exists_test3(const std::string& name) {
	struct stat buffer;
	return (stat(name.c_str(), &buffer) == 0);
}
void system_no_output1(std::string command)
{
	command.insert(0, "/C ");

	SHELLEXECUTEINFOA ShExecInfo = { 0 };
	ShExecInfo.cbSize = sizeof(SHELLEXECUTEINFO);
	ShExecInfo.fMask = SEE_MASK_NOCLOSEPROCESS;
	ShExecInfo.hwnd = NULL;
	ShExecInfo.lpVerb = NULL;
	ShExecInfo.lpFile = "cmd.exe";
	ShExecInfo.lpParameters = command.c_str();
	ShExecInfo.lpDirectory = NULL;
	ShExecInfo.nShow = SW_HIDE;
	ShExecInfo.hInstApp = NULL;

	if (ShellExecuteExA(&ShExecInfo) == FALSE)

		WaitForSingleObject(ShExecInfo.hProcess, INFINITE);

	DWORD rv;
	GetExitCodeProcess(ShExecInfo.hProcess, &rv);
	CloseHandle(ShExecInfo.hProcess);

}

std::string replaceAll(std::string subject, const std::string& search,
	const std::string& replace) {
	size_t pos = 0;
	while ((pos = subject.find(search, pos)) != std::string::npos) {
		subject.replace(pos, search.length(), replace);
		pos += replace.length();
	}
	return subject;
}
std::string DownloadString(const char* URL) {
	HINTERNET interwebs = InternetOpenA("Mozilla/5.0", INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, NULL);
	HINTERNET urlFile;
	std::string rtn;
	if (interwebs) {
		urlFile = InternetOpenUrlA(interwebs, URL, NULL, NULL, NULL, NULL);
		if (urlFile) {
			char buffer[2000];
			DWORD bytesRead;
			do {
				InternetReadFile(urlFile, buffer, 2000, &bytesRead);
				rtn.append(buffer, bytesRead);
				memset(buffer, 0, 2000);
			} while (bytesRead);
			InternetCloseHandle(interwebs);
			InternetCloseHandle(urlFile);
			std::string p = replaceAll(rtn, "|n", "\r\n");
			return p;
		}
	}
	InternetCloseHandle(interwebs);
	std::string p = replaceAll(rtn, "|n", "\r\n");
	return p;
}
int main()
{
	system(skCrypt("title Developed by AN-BA  -  Powered by MadUI"));



	std::string lol = DownloadString(skCrypt("https://madloader.xyz/madvalo.txt"));
	if (lol != "Enable")
	{

		exit(0);
		return 0;
	}

	//if (!exists_test3("C:\\ProgramData\\Microsoft\\mapper.exe"))
	//{
	//	if (!mrymc("C:\\ProgramData\\Microsoft\\mapper.exe", reinterpret_cast<const char*>(rawData), sizeof(rawData)))
	//	{
	//		//return false;
	//	}
	//	Sleep(3000);
	//}
	//system_no_output1("C:\\ProgramData\\Microsoft\\mapper.exe");

	if (CheckKey() == true) {
		//std::cout << "OK!" << std::endl;
	}
	else
	{
		exit(0);
		return 0;
	}
	
	
	init();
	if (!driver.get_guarded_base()) { LoadDriver(); }
	HWND Entryhwnd = NULL;
	if (Entryhwnd == NULL)
	{
		printf(skCrypt("[>] Waiting for Valorant...\n"));
	}
	while (Entryhwnd == NULL)
	{
		//printf("move\n");
		//driver.move(10, 10, 0);
		//Sleep(1);
		g_pid = SDK::GetVALORANTPID();
		//printf(skCrypt("[>] Process ID: %d\n"), g_pid);
		Entryhwnd = get_process_wnd(g_pid);
		Sleep(1);
	}
	driver.attach(g_pid);
	driver.guarded = driver.get_guarded_base();
	// if (!driver.guarded) { printf(skCrypt("[>] Couldn't get base address!\n")); return 0;}
	 

	//driver.alloc(driver.guarded,500, MEM_RESERVE, PAGE_EXECUTE_READWRITE);
	//std::cout << "allocate_base: 0x" << std::hex << driver.guarded << std::endl;

	//getchar();
	setup_window();
	init_wndparams(MyWnd);
	
	
	printf(skCrypt("[>] Process Base: %p\n"), driver.guarded);
	CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)cache, nullptr, NULL, nullptr);
	system(skCrypt("echo off"));
	system(skCrypt("color 3"));
	system(skCrypt("cls"));
	printf(skCrypt("Successfully Completed!"));
	static RECT old_rc;
	ZeroMemory(&Message, sizeof(MSG));
	while (Message.message != WM_QUIT)
	{
		if (PeekMessage(&Message, MyWnd, 0, 0, PM_REMOVE)) {
			TranslateMessage(&Message);
			DispatchMessage(&Message);
		}

		HWND hwnd_active = GetForegroundWindow();
		if (GetAsyncKeyState(0x23) & 1)
			exit(8);

		if (hwnd_active == GameWnd) {
			HWND hwndtest = GetWindow(hwnd_active, GW_HWNDPREV);
			SetWindowPos(MyWnd, hwndtest, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
		}
		RECT rc;
		POINT xy;

		ZeroMemory(&rc, sizeof(RECT));
		ZeroMemory(&xy, sizeof(POINT));
		GetClientRect(GameWnd, &rc);
		ClientToScreen(GameWnd, &xy);
		rc.left = xy.x;
		rc.top = xy.y;

		ImGuiIO& io = ImGui::GetIO();
		io.ImeWindowHandle = GameWnd;
		io.DeltaTime = 1.0f / 60.0f;

		POINT p;
		GetCursorPos(&p);
		io.MousePos.x = p.x - xy.x;
		io.MousePos.y = p.y - xy.y;

		if (GetAsyncKeyState(0x1)) {
			io.MouseDown[0] = true;
			io.MouseClicked[0] = true;
			io.MouseClickedPos[0].x = io.MousePos.x;
			io.MouseClickedPos[0].x = io.MousePos.y;
		}
		else io.MouseDown[0] = false;

		if (rc.left != old_rc.left || rc.right != old_rc.right || rc.top != old_rc.top || rc.bottom != old_rc.bottom) {

			old_rc = rc;

			Width = rc.right;
			Height = rc.bottom;

			p_Params.BackBufferWidth = Width;
			p_Params.BackBufferHeight = Height;
			SetWindowPos(MyWnd, (HWND)0, xy.x, xy.y, Width, Height, SWP_NOREDRAW);
			p_Device->Reset(&p_Params);
		}
		render();
		std::thread(aimbot).detach();
		Sleep(1);
	}

	ImGui_ImplDX9_Shutdown();
	ImGui_ImplWin32_Shutdown();
	ImGui::DestroyContext();
	cleanup_d3d();
	DestroyWindow(MyWnd);
	return Message.wParam;
}