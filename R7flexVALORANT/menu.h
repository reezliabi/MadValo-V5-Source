#pragma once
#include "overlay.h"
#include <string>
#include <Windows.h>
#include "settings.h"
#include "icons.h"
#include "Images.h"
HWND hwnd = GetDesktopWindow();
int WallHackKey = 6;
int WallHackKeyStatus;
ImVec4 to_vec4(float r, float g, float b, float a)
{
	return ImVec4(r / 255.0, g / 255.0, b / 255.0, a / 255.0);
}

namespace Pastt
{

	static float Alpha = 255;
	static bool Tick = false;
	static float Speed = 1.0f;

	static float Kalin = 1.0f;
	static int Types = 15;
	static bool AutoFire = false;
	static bool Smooth = true;
	static bool Visible_Lock = true;
	static bool Enable_Bone_ESP = true;
	static bool Enable_Aim_Bot_FOV = true;
	static bool Change_Glow_Color = true;
	static bool Enable_Patern = true;
	static bool Enable_Triggerbot = true;
	static bool Only_Selected_Bone = true;
	static bool Ignore_Seleted_Bone = true;
	static bool Enable_Instant_Trigger = true;
	static bool Aim_Bot_Enable = true;
	static bool Enable_Legit_Config = true;
	static bool Enable_Standart_Config = false;
	static bool Enable_Professional_Config = false;
	static bool Circle_Head = true;
	static bool Rhombus_Head = false;
	static bool Hexagon_Head = false;
	static bool Triangle_Head = false;
	static bool Enable_Rage_Config = false;
	static bool Enable_ESP = true;
	static bool Enable_Visible_Glow = true;
	static bool Enable_Overlay = true;
	static bool HeadB = true;
	static bool NeckB = false;
	static bool BodyB = false;

	static bool THeadB = true;
	static bool TNeckB = false;
	static bool TBodyB = false;

	static bool FHeadB = true;
	static bool FNeckB = false;
	static bool FBodyB = false;

	static bool SHeadB = true;
	static bool SNeckB = false;
	static bool SBodyB = false;

	static bool Enable_Manuel_Recoil = true;
	static bool Enable_Immediate_Bone = true;
	static bool Enable_Only_Head = true;
	static bool Enable_Only_Neck = true;
	static bool Aim_Bot_Only_On_X = true;
	static bool Enable_Head_ESP = true;
	static bool Enable_Flick_Bot_FOV = true;
	static bool Enable_Team_Check = false;
	static bool Enable_Oto_Recoil = true;
	static bool No_Recoil = true;
	static bool Enable_Box_ESP = true;
	static bool Enable_Silent_Bot_FOV = true;
	static bool Ignore_An_Ba_Skills = true;
	static bool Enable_Snap_Line_ESP = true;
	static bool Enable_Player_Radar = true;
	static bool Distance_ESP = true;
	static bool Show_Aim_Bot_Bones_Used = true;
	static bool Health_Bar_ESP = true;
	static bool Enable_Critical_Health_Bar = true;
	static bool Enable_Smooth = true;
	static bool Enable_Randomizer = true;
	static bool Enable_Silentbot = true;
	static bool Silentbot_Only_On_X = true;
	static bool Smart_Bone_Silent = true;
	static bool Enable_Flick_Bot = true;
	static bool Enable_Smart_Bone = true;
	static bool Enable_Trigger_Assist = true;
	static bool Enable_Recoil = true;
	static bool Auto_Fire_Enable = true;
	static bool Enable_Enemy_detection = true;

	static bool argibi = false;
	static bool argibi2 = false;
	static bool argibi3 = false;
	static bool ghost = false;
	static bool ucdkutu = true;

	bool Head1 = false;
	bool Neck1 = false;
	bool Body1 = false;
	bool Head2 = false;
	bool Neck2 = false;
	bool Body2 = false;
	bool Head3 = false;
	bool Neck3 = false;
	bool Body3 = false;
	bool Head4 = false;
	bool Neck4 = false;
	bool Body4 = false;

	static int Aim_Bot_Smooth_Level_Int = 4;
	static int Head_Circle_Config_Size = 0;
	static int Aim_Bot_Critical_Smooth_Level_Int = 2;
	static int Aim_Bot_First_Bullet_FOV_X_Int = 0;
	static int Aim_Bot_First_Bullet_FOV_Y_Int = 0;
	static int Aim_Bot_Quality_Aim_Bot_Int = 0;
	static int Aim_Bot_First_Bullet_Smooth_Int = 0;
	static int Aim_Bot_Quality_Smooth_Int = 0;
	static int Enable_Immediate_Bone_Int = 0;
	static int Enable_Immediate_Bone_Smooth_Int = 0;
	static int Burst_Fire_Duration_Int = 0;
	static int Aim_Bot_Bone_Select_Body_Int = 0;
	static int Aim_Bot_Bone_Select_Neck_Int = 0;
	static int Aim_Bot_Bone_Select_Head_Int = 0;

	static int Flick_Bot_Bone_Select_Body_Int = 0;
	static int Flick_Bot_Bone_Select_Neck_Int = 0;
	static int Flick_Bot_Bone_Select_Head_Int = 0;

	static int Flick_Bot_FOV_X_Int = 0;
	static int Aim_Bot_Bone_Select_FOV_Y_Int = 0;
	static int Aim_Bot_Bone_Select_FOV_X_Int = 0;
	static int Aim_Bot_Critical_FOV_X_Int = 0;
	static int Aim_Bot_Critical_FOV_Y_Int = 0;
	static int Aim_Bot_FOV_X_Int = 100;
	static int Aim_Bot_FOV_Y_Int = 0;
	static int Flick_Bot_Body_Int = 0;
	static int Flick_Bot_Smooth_Panel_Int = 0;
	static int Trigger_Bone_Select_Head_Int = 0;
	static int Triggerbot_Fire_Delay_Int = 0;
	static int Triggerbot_Active_Delay_Int = 0;

	static int Trigger_Assist_Length_Int = 0;
	static int Trigger_Assist_Smooth_Int = 0;
	static int Trigger_Assist_Size_Int = 0;
	static int Flick_Bot_Bone_FOV_Y_Int = 0;
	static int Flick_Bot_Bone_FOV_X_Int = 0;
	static int Flick_Bot_FOV_Y_Int = 0;
	static int Silent_Bot_FOV_X_Int = 0;
	static int Silent_Bot_FOV_Y_Int = 0;
	static int Silent_Bone_Select_Panel_Body_Int = 0;
	static int Silent_Bone_Select_Panel_Body_FOV_X_Int = 0;
	static int Silent_Bone_Select_Panel_Body_FOV_Y_Int = 0;
	static int Silent_Bot_Smooth_Int = 0;
	static int Bones = 1;
	static int TBones = 0;
	static int FBones = 0;
	static int SBones = 0;

	static int SizeH = 20;

	int Aim_Bot_First_Bullet_FOV_Y_X = 188; int Aim_Bot_First_Bullet_FOV_Y_Y = 72;
	int Aim_Bot_First_Bullet_Smooth_X = 188; int Aim_Bot_First_Bullet_Smooth_Y = 104;
	int Aim_Bot_Bone_Select_FOV_X_X = 188; int Aim_Bot_Bone_Select_FOV_X_Y = 167;
	int Aim_Bot_Bone_Select_Body_Y_X = 188 + 163; int Aim_Bot_Bone_Select_Body_Y_Y = 135 + 242;
	int Aim_Bot_Bone_Select_FOV_Y_X = 188; int Aim_Bot_Bone_Select_FOV_Y_Y = 199;
	int Aim_Bot_First_Bullet_FOV_X_X = 188; int Aim_Bot_First_Bullet_FOV_X_Y = 40;
	int Trigger_Bone_Select_Head_X = 188; int Trigger_Bone_Select_Head_Y = 135;
	int Triggerbot_Active_Delay_X = 188 + 395; int Triggerbot_Active_Delay_Y = 140 - 6 + 67;
	int Triggerbot_Active_Delay_X2 = 188 + 163; int Triggerbot_Active_Delay_Y2 = 140 - 6 + 242;
	int Triggerbot_Active_Delay_X3 = 188 + 395; int Triggerbot_Active_Delay_Y3 = 140 - 6 + 242;
	int Triggerbot_Fire_Delay_X = 188; int Triggerbot_Fire_Delay_Y = 70;
	int Trigger_Assist_Length_X = 188; int Trigger_Assist_Length_Y = 72;
	int Trigger_Assist_Smooth_X = 188; int Trigger_Assist_Smooth_Y = 104;
	int Trigger_Assist_Size_X = 188; int Trigger_Assist_Size_Y = 136;
	int Aim_Bot_Smooth_Level_X = 188 + 395; int Aim_Bot_Smooth_Level_Y = 40 + 32 + 67;
	int Aim_Bot_Quality_Aim_Bot_X = 188; int Aim_Bot_Quality_Aim_Bot_Y = 40;
	int Aim_Bot_Quality_Smooth_X = 188; int Aim_Bot_Quality_Smooth_Y = 72;
	int Aim_Bot_FOV_X_X = 188 + 395; int Aim_Bot_FOV_X_Y = 40 + 32 + 32 + 67;
	int Aim_Bot_FOV_Y_X = 188 + 395; int Aim_Bot_FOV_Y_Y = 72 + 32 + 32 + 67;
	int Enable_Immediate_Bone_X = 188; int Enable_Immediate_Bone_Y = 72;
	int Enable_Immediate_Bone_Smooth_X = 188; int Enable_Immediate_Bone_Smooth_Y = 104;
	int Silent_Bot_Smooth_X = 188; int Silent_Bot_Smooth_Y = 70;
	int Silent_Bone_Select_Panel_Body_FOV_Y_X = 188; int Silent_Bone_Select_Panel_Body_FOV_Y_Y = 199;
	int Silent_Bone_Select_Panel_Body_FOV_X_X = 188; int Silent_Bone_Select_Panel_Body_FOV_X_Y = 167;
	int Silent_Bone_Select_Panel_Body_X = 188; int Silent_Bone_Select_Panel_Body_Y = 135;
	int Silent_Bot_FOV_Y_X = 188; int Silent_Bot_FOV_Y_Y = 72;
	int Silent_Bot_FOV_X_X = 188; int Silent_Bot_FOV_X_Y = 40;
	int Flick_Bot_Smooth_Panel_X = 188; int Flick_Bot_Smooth_Panel_Y = 70;
	int Flick_Bot_Bone_FOV_Y_X = 188; int Flick_Bot_Bone_FOV_Y_Y = 199;
	int Flick_Bot_Bone_FOV_X_X = 188; int Flick_Bot_Bone_FOV_X_Y = 167;
	int Flick_Bot_FOV_Y_X = 188; int Flick_Bot_FOV_Y_Y = 72;
	int Flick_Bot_FOV_X_X = 188; int Flick_Bot_FOV_X_Y = 40;
	int Burst_Fire_Duration_X = 188; int Burst_Fire_Duration_Y = 72 + 31 + 34;
	int Flick_Bot_Body_X = 188; int Flick_Bot_Body_Y = 135;

	std::string Aim_Bot_Smooth_Level_IntA = "2";
	std::string Head_Circle_Config_SizeA;
	std::string Aim_Bot_Critical_Smooth_Level_IntA;
	std::string Aim_Bot_First_Bullet_FOV_Y_IntA;
	std::string Aim_Bot_First_Bullet_FOV_X_IntA;
	std::string Aim_Bot_Quality_Aim_Bot_IntA;
	std::string Aim_Bot_First_Bullet_Smooth_IntA;
	std::string Aim_Bot_Quality_Smooth_IntA;
	std::string Enable_Immediate_Bone_IntT;
	std::string Enable_Immediate_Bone_Smooth_IntT;
	std::string Burst_Fire_Duration_IntT;
	std::string Aim_Bot_Bone_Select_Body_IntA;
	std::string Aim_Bot_Bone_Select_Neck_IntA;
	std::string Aim_Bot_Bone_Select_Head_IntA;
	std::string Flick_Bot_Bone_Select_Body_IntA;
	std::string Flick_Bot_Bone_Select_Neck_IntA;
	std::string Flick_Bot_Bone_Select_Head_IntA;
	std::string Flick_Bot_FOV_X_IntT;
	std::string Aim_Bot_Bone_Select_FOV_X_IntA;
	std::string Aim_Bot_FOV_X_IntA;
	std::string Aim_Bot_Critical_FOV_X_IntA;
	std::string Aim_Bot_FOV_Y_IntA;
	std::string Aim_Bot_Critical_FOV_Y_IntA;
	std::string Aim_Bot_Bone_Select_FOV_Y_IntA;
	std::string Trigger_Bone_Select_Head_IntT;
	std::string Triggerbot_Fire_Delay_IntT;
	std::string Triggerbot_Active_Delay_IntT;
	std::string Head_Circle_TransparencyA;
	std::string Bone_TransparencyA;
	std::string Box_TransparencyA;
	std::string Triggerbot_Active_Delay_IntA;
	std::string Bone_Rainbow_TransparencyA;
	std::string TransparencyA;
	std::string Trigger_Assist_Length_IntT;
	std::string Trigger_Assist_Smooth_IntT;
	std::string Trigger_Assist_Size_IntT;
	std::string Flick_Bot_Body_IntT;
	std::string Flick_Bot_Smooth_Panel_IntT;
	std::string Flick_Bot_Bone_FOV_Y_IntT;
	std::string Flick_Bot_Bone_FOV_X_IntT;
	std::string Flick_Bot_FOV_Y_IntT;
	std::string Silent_Bot_FOV_X_IntT;
	std::string Silent_Bot_FOV_Y_IntT;
	std::string Silent_Bone_Select_Panel_Body_IntT;
	std::string Silent_Bone_Select_Panel_Body_FOV_X_IntT;
	std::string Silent_Bone_Select_Panel_Body_FOV_Y_IntT;
	std::string Silent_Bot_Smooth_IntT;
	std::string Box_Rainbow_TransparencyA;

	
	 
	int Z = 11;
	int T = 8;
	int Y = 13;
	int N = 538;

	const char* items[] = { "    Rage Config", "Standart Config ", "    Legit Config", "      Pro Config" };
	static const char* current_item = NULL;
	static const char* current_item2 = nullptr;
	char buf[15] = { 0 };
	const char* cizgi = "................................................";
	const char* cizgi2 = "....................................................................................................";
	/*Renkler*/



	int P = 22;
	int P2 = 39;


	ImFont* tolstiy = nullptr;




	static int Head_Circle_Transparency = 255;
	static int Box_Transparency = 255;
	static int Bone_Transparency = 255;
	static float Bone_Rainbow_Transparency = 255;
	static float Box_Rainbow_Transparency = 255;
	static float Head_Circle_Rainbow_Transparency = 255;

	


	ImVec4 Skeleton_Color = ImColor(3, 168, 245, 0);
	ImVec4 Box_Color = ImColor(3, 168, 245, 0);
	ImVec4 Inner_Circle_Color = ImColor(3, 168, 245, 0);
	ImVec4 Case_Color = ImColor(3, 168, 245, 0);
	ImVec4 Snap_Line_Color = ImColor(3, 168, 245, 0);

	ImVec4 TitleCol = to_vec4(3, 168, 245, 255);
	ImVec4 LineCol = to_vec4(49, 69, 82, 255);
	ImVec4 Renk5 = to_vec4(153, 176, 189, 255);
	ImVec4 Renk10 = to_vec4(2, 19, 39, 255);
	ImVec4 Renk9 = to_vec4(3, 5, 13, 255);
	ImVec4 Renk2 = to_vec4(3, 168, 245, 255);
	ImVec4 Trans = to_vec4(0, 0, 0, 0);
	ImVec4 BAKA = to_vec4(3, 5, 13, 255);

	static float isRed = 0.0f, isGreen = 0.01f, isBlue = 0.0f;

	ImVec4 isRGB = ImVec4(isRed, isGreen, isBlue, 1.0f);

	ImVec4 R1 = to_vec4(3, 168, 245, (int)Alpha);
	ImVec4 R3 = to_vec4(3, 113, 163, (int)Alpha);
	ImVec4 R5 = to_vec4(2, 56, 82, (int)Alpha);
	ImVec4 R6 = to_vec4(1, 28, 41, (int)Alpha);

	ImVec4 R1t = to_vec4(2, 79, 115, (int)Alpha);
	ImVec4 R3t = to_vec4(2, 53, 77, (int)Alpha);
	ImVec4 R5t = to_vec4(2, 27, 39, (int)Alpha);
	ImVec4 R6t = to_vec4(1, 14, 20, (int)Alpha);

	ImVec4 E1 = to_vec4(3, 108, 245, (int)Alpha);
	ImVec4 E2 = to_vec4(43, 108, 245, (int)Alpha);
	ImVec4 E3 = to_vec4(83, 108, 245, (int)Alpha);
	ImVec4 E4 = to_vec4(123, 108, 245, (int)Alpha);

	ImVec4 E1t = to_vec4(2, 42, 92, (int)Alpha);
	ImVec4 E2t = to_vec4(17, 42, 92, (int)Alpha);
	ImVec4 E3t = to_vec4(31, 41, 92, (int)Alpha);
	ImVec4 E4t = to_vec4(46, 41, 92, (int)Alpha);

	ImVec4 S1 = to_vec4(4, 158, 182, (int)Alpha);
	ImVec4 S2 = to_vec4(2, 120, 115, (int)Alpha);
	ImVec4 S3 = to_vec4(2, 140, 115, (int)Alpha);
	ImVec4 S4 = to_vec4(2, 160, 115, (int)Alpha);

	ImVec4 S1t = to_vec4(2, 100, 115, (int)Alpha);
	ImVec4 S2t = to_vec4(3, 151, 145, (int)Alpha);
	ImVec4 S3t = to_vec4(3, 177, 146, (int)Alpha);
	ImVec4 S4t = to_vec4(2, 203, 146, (int)Alpha);

	ImVec4 Silver = to_vec4(153, 176, 189, 255);
	ImVec4 White = to_vec4(255, 255, 255, 255);
}
using namespace Pastt;

static bool Items_ArrayGetter(void* data, int idx, const char** out_text)
{
	const char* const* items = (const char* const*)data;
	if (out_text)
		*out_text = items[idx];
	return true;
}
static const char* keyNames[] ={
	"",
	"Left Mouse",
	"Right Mouse",
	"Cancel",
	"Middle Mouse",
	"Mouse 5",
	"Mouse 4",
	"",
	"Backspace",
	"Tab",
	"",
	"",
	"Clear",
	"Enter",
	"",
	"",
	"Shift",
	"Control",
	"Alt",
	"Pause",
	"Caps",
	"",
	"",
	"",
	"",
	"",
	"",
	"Escape",
	"",
	"",
	"",
	"",
	"Space",
	"Page Up",
	"Page Down",
	"End",
	"Home",
	"Left",
	"Up",
	"Right",
	"Down",
	"",
	"",
	"",
	"Print",
	"Insert",
	"Delete",
	"",
	"0",
	"1",
	"2",
	"3",
	"4",
	"5",
	"6",
	"7",
	"8",
	"9",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"A",
	"B",
	"C",
	"D",
	"E",
	"F",
	"G",
	"H",
	"I",
	"J",
	"K",
	"L",
	"M",
	"N",
	"O",
	"P",
	"Q",
	"R",
	"S",
	"T",
	"U",
	"V",
	"W",
	"X",
	"Y",
	"Z",
	"",
	"",
	"",
	"",
	"",
	"Numpad 0",
	"Numpad 1",
	"Numpad 2",
	"Numpad 3",
	"Numpad 4",
	"Numpad 5",
	"Numpad 6",
	"Numpad 7",
	"Numpad 8",
	"Numpad 9",
	"Multiply",
	"Add",
	"",
	"Subtract",
	"Decimal",
	"Divide",
	"F1",
	"F2",
	"F3",
	"F4",
	"F5",
	"F6",
	"F7",
	"F8",
	"F9",
	"F10",
	"F11",
	"F12",
};
void WallHackChangeKey(void* blank)
{
	WallHackKeyStatus = 1;
	while (true)
	{
		for (int i = 0; i < 0x87; i++)
		{
			if (GetKeyState(i) & 0x8000)
			{
				WallHackKey = i;
				WallHackKeyStatus = 0;
				return;
			}
		}
	}
}
void WallHackKeyButton(int WallKey, void* changekey, int status, ImVec2 a)
{
	const char* preview_value = NULL;
	if (WallHackKey >= 0 && WallHackKey < IM_ARRAYSIZE(keyNames))
		Items_ArrayGetter(keyNames, WallHackKey, &preview_value);

	std::string aimkeys;
	if (preview_value == NULL)
		aimkeys = skCrypt("Select Key");
	else
		aimkeys = preview_value;
	if (status == 1)
	{
		aimkeys = skCrypt("Press key");
	}
	if (ImGui::ButtonKU(aimkeys.c_str(), a))
	{
		if (status == 0)
		{

			CreateThread(0, 0, (LPTHREAD_START_ROUTINE)changekey, nullptr, 0, nullptr);
		}
	}
}

void draw_menu()
{
	ImGuiStyle* style = &ImGui::GetStyle();
	style->Colors[ImGuiCol_WindowBg] = ImColor(8, 16, 27, 255);
	ImGui::PushStyleVar(ImGuiStyleVar_WindowMinSize, ImVec2(649 - 15, 627));

	if (true)
	{
		if (Tick || Alpha >= 255)
		{
			Tick = true;
			if (!(Alpha <= 120))
				Alpha -= Speed + 2;
			else if (Alpha <= 120)
				Tick ^= 1;
		}
		else if (!Tick || Alpha != 255)
		{
			Tick = false;
			if (!(Alpha >= 255))
				Alpha += Speed + 2;
			else if (Alpha >= 255)
				Tick ^= 1;
		}
	}

	if (true)
	{

		if (isGreen == 0.01f && isBlue == 0.0f)
		{
			isRed += 0.01f;

		}

		if (isRed > 0.99f && isBlue == 0.0f)
		{
			isRed = 1.0f;

			isGreen += 0.01f;

		}

		if (isGreen > 0.99f && isBlue == 0.0f)
		{
			isGreen = 1.0f;

			isRed -= 0.01f;

		}

		if (isRed < 0.01f && isGreen == 1.0f)
		{
			isRed = 0.0f;

			isBlue += 0.01f;

		}

		if (isBlue > 0.99f && isRed == 0.0f)
		{
			isBlue = 1.0f;

			isGreen -= 0.01f;

		}

		if (isGreen < 0.01f && isBlue == 1.0f)
		{
			isGreen = 0.0f;

			isRed += 0.01f;

		}

		if (isRed > 0.99f && isGreen == 0.0f)
		{
			isRed = 1.0f;

			isBlue -= 0.01f;

		}

		if (isBlue < 0.01f && isGreen == 0.0f)
		{
			isBlue = 0.0f;

			isRed -= 0.01f;

			if (isRed < 0.01f)
				isGreen = 0.01f;

		}

	}

	if (settings::show_menu)
	{
		SetLayeredWindowAttributes(MyWnd, 0, 255, LWA_COLORKEY);
		

		

		draww = ImGui::GetWindowDrawList();
		pos = ImGui::GetWindowPos();
		//ImGui::Begin("TR", 0, ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse | ImGuiWindowFlags_NoResize /*| ImGuiWindowFlags_NoMove*/ | ImGuiWindowFlags_NoTitleBar);

		/////////////////	/////////////////	/////////////////	/////////////////	/////////////////	/////////////////
		/*Logo         */   /*Logo         */   /*Logo         */   /*Logo         */   /*Logo         */   /*Logo         */
		///////////////// 	///////////////// 	///////////////// 	///////////////// 	///////////////// 	///////////////// 
		ImGui::BeginGroup;
		{
			draww = ImGui::GetWindowDrawList();
			pos = ImGui::GetWindowPos();
			Lohgo3(pos.x + 21, pos.y + 10);
			draww->AddLine(ImVec2(pos.x + 22, pos.y + 34), ImVec2(pos.x + 129.5, pos.y + 34), ImColor(65, 186, 217, 255));
			draww->AddLine(ImVec2(pos.x + 22, pos.y + 35), ImVec2(pos.x + 129.5, pos.y + 35), ImColor(255, 255, 255, 255));
		}
		ImGui::EndGroup;

		/////////////////	/////////////////	/////////////////	/////////////////	/////////////////	/////////////////
		/*Group AimBots*/	/*Group AimBots*/	/*Group AimBots*/	/*Group AimBots*/	/*Group AimBots*/	/*Group AimBots*/
		///////////////// 	///////////////// 	///////////////// 	///////////////// 	///////////////// 	///////////////// 
		ImGui::BeginGroup;
		{
			draww = ImGui::GetWindowDrawList();
			pos = ImGui::GetWindowPos();
			draww->AddText(tolstiy, 17.0f, ImVec2(pos.x + 19, pos.y + 73), ImColor(1.0f, 1.0f, 1.0f, 1.0f), skCrypt("Bots"));

			//Button "Aimbot"
			ImGui::Spacing();
			ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 1 ? to_vec4(8, 16, 27, 254) : to_vec4(8, 16, 27, 255));
			ImGui::PushStyleColor(ImGuiCol_ButtonHovered, to_vec4(8, 16, 27, 254));
			ImGui::PushStyleColor(ImGuiCol_ButtonActive, to_vec4(8, 16, 27, 254));
			ImGui::PushStyleColor(ImGuiStyleVar_FrameRounding, 3.0f);
			ImGui::PushStyleColor(ImGuiCol_Text, Settings::Tab == 1 ? ImVec4(1.0f, 1.0f, 1.0f, 1.0f) : to_vec4(153, 176, 189, 255));
			ImGui::SetCursorPos(ImVec2(8, 95));
			if (ImGui::Button(skCrypt("Aim Bot      "), ImVec2(136, 30))) Settings::Tab = 1;
		}
		ImGui::EndGroup;

		/////////////////	/////////////////	/////////////////	/////////////////	/////////////////	/////////////////
		/*Group Visuals*/   /*Group Visuals*/   /*Group Visuals*/   /*Group Visuals*/   /*Group Visuals*/   /*Group Visuals*/
		/////////////////	/////////////////	/////////////////	/////////////////	/////////////////	/////////////////
		ImGui::BeginGroup;
		{
			draww = ImGui::GetWindowDrawList();
			pos = ImGui::GetWindowPos();
			draww->AddText(tolstiy, 17.0f, ImVec2(pos.x + 18, pos.y + 203 + 35 - 108), ImColor(1.0f, 1.0f, 1.0f, 1.0f), skCrypt("Visuals"));

			//Button "Main"
			ImGui::Spacing();
			ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 2 ? to_vec4(8, 16, 27, 254) : to_vec4(8, 16, 27, 255));
			ImGui::PushStyleColor(ImGuiCol_ButtonHovered, to_vec4(8, 16, 27, 254));
			ImGui::PushStyleColor(ImGuiCol_ButtonActive, to_vec4(8, 16, 27, 254));
			ImGui::PushStyleColor(ImGuiStyleVar_FrameRounding, 3.0f);
			ImGui::PushStyleColor(ImGuiCol_Text, Settings::Tab == 2 ? ImVec4(1.0f, 1.0f, 1.0f, 1.0f) : to_vec4(153, 176, 189, 255));
			ImGui::SetCursorPos(ImVec2(8, 225 + 35 - 108));
			if (ImGui::Button(skCrypt(" Main             "), ImVec2(136, 30))) Settings::Tab = 2;

			//Button "Settings"
			ImGui::Spacing();
			ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 3 ? to_vec4(8, 16, 27, 254) : to_vec4(8, 16, 27, 255));
			ImGui::PushStyleColor(ImGuiCol_ButtonHovered, to_vec4(8, 16, 27, 254));
			ImGui::PushStyleColor(ImGuiCol_ButtonActive, to_vec4(8, 16, 27, 254));
			ImGui::PushStyleColor(ImGuiStyleVar_FrameRounding, 3.0f);
			ImGui::PushStyleColor(ImGuiCol_Text, Settings::Tab == 3 ? ImVec4(1.0f, 1.0f, 1.0f, 1.0f) : to_vec4(153, 176, 189, 255));
			ImGui::SetCursorPos(ImVec2(8, 260 + 35 - 108));
			if (ImGui::Button(skCrypt("Settings     "), ImVec2(136, 30))) Settings::Tab = 3;

			//Button "View"
			ImGui::Spacing();
			ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 4 ? to_vec4(8, 16, 27, 254) : to_vec4(8, 16, 27, 255));
			ImGui::PushStyleColor(ImGuiCol_ButtonHovered, to_vec4(8, 16, 27, 254));
			ImGui::PushStyleColor(ImGuiCol_ButtonActive, to_vec4(8, 16, 27, 254));
			ImGui::PushStyleColor(ImGuiStyleVar_FrameRounding, 3.0f);
			ImGui::PushStyleColor(ImGuiCol_Text, Settings::Tab == 4 ? ImVec4(1.0f, 1.0f, 1.0f, 1.0f) : to_vec4(153, 176, 189, 255));
			ImGui::SetCursorPos(ImVec2(8, 295 + 35 - 108));
			if (ImGui::Button(skCrypt("View           "), ImVec2(136, 30))) Settings::Tab = 4;

		}
		ImGui::EndGroup;

		/////////////////	/////////////////	/////////////////	/////////////////	/////////////////	/////////////////
		/*Group Misc   */   /*Group Misc   */   /*Group Misc   */   /*Group Misc   */   /*Group Misc   */   /*Group Misc   */
		/////////////////	/////////////////	/////////////////	/////////////////	/////////////////	/////////////////
		ImGui::BeginGroup;
		{
			draww = ImGui::GetWindowDrawList();
			pos = ImGui::GetWindowPos();
			draww->AddText(tolstiy, 17.0f, ImVec2(pos.x + 18, pos.y + 333 + 35 - 108), ImColor(1.0f, 1.0f, 1.0f, 1.0f), skCrypt("Misc"));

			//Button "Config"
			ImGui::Spacing();
			ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 5 ? to_vec4(8, 16, 27, 254) : to_vec4(8, 16, 27, 255));
			ImGui::PushStyleColor(ImGuiCol_ButtonHovered, to_vec4(8, 16, 27, 254));
			ImGui::PushStyleColor(ImGuiCol_ButtonActive, to_vec4(8, 16, 27, 254));
			ImGui::PushStyleColor(ImGuiCol_Text, Settings::Tab == 5 ? ImVec4(1.0f, 1.0f, 1.0f, 1.0f) : to_vec4(153, 176, 189, 255));
			ImGui::SetCursorPos(ImVec2(8, 355 + 35 - 108));
			if (ImGui::Button(skCrypt("Config        "), ImVec2(136, 30))) Settings::Tab = 5;

			//Button "Info"
			ImGui::Spacing();
			ImGui::PushStyleColor(ImGuiCol_Button, Settings::Tab == 6 ? to_vec4(8, 16, 27, 254) : to_vec4(8, 16, 27, 255));
			ImGui::PushStyleColor(ImGuiCol_ButtonHovered, to_vec4(8, 16, 27, 254));
			ImGui::PushStyleColor(ImGuiCol_ButtonActive, to_vec4(8, 16, 27, 254));
			ImGui::PushStyleColor(ImGuiCol_Text, Settings::Tab == 6 ? ImVec4(1.0f, 1.0f, 1.0f, 1.0f) : to_vec4(153, 176, 189, 255));
			ImGui::SetCursorPos(ImVec2(8, 390 + 35 - 108));
			if (ImGui::Button(skCrypt("Info             "), ImVec2(136, 30))) Settings::Tab = 6;
		}
		ImGui::EndGroup;

		/////////////////	/////////////////	/////////////////	/////////////////	/////////////////	/////////////////
		/* Base  Panel */   /* Base  Panel */   /* Base  Panel */   /* Base  Panel */   /* Base  Panel */   /* Base  Panel */
		/////////////////	/////////////////	/////////////////	/////////////////	/////////////////	/////////////////
		ImGui::BeginGroup;
		{
			draww = ImGui::GetWindowDrawList();
			pos = ImGui::GetWindowPos();
			ImGui::SetCursorPos(ImVec2(153, 57));
			ImGui::PushStyleColor(ImGuiCol_Button, to_vec4(8, 8, 13, 255));
			ImGui::Buttonsac("asda", ImVec2(152 + 475 - 153, 55 + 537 + 26 - 57));
			ImGui::SetCursorPos(ImVec2(152, 55));
		}
		ImGui::EndGroup;

		/////////////////	/////////////////	/////////////////	/////////////////	/////////////////	/////////////////
		/*Top Panel    */   /*Top Panel    */   /*Top Panel    */   /*Top Panel    */   /*Top Panel    */   /*Top Panel    */
		/////////////////	/////////////////	/////////////////	/////////////////	/////////////////	/////////////////
		ImGui::BeginGroup;
		{
			draww = ImGui::GetWindowDrawList();
			pos = ImGui::GetWindowPos();
			draww->AddRectFilled(ImVec2(pos.x + 153, pos.y + 8), ImVec2(pos.x + 627, pos.y + 52), ImColor(to_vec4(8, 8, 13, 255)), 3.0f, 15);
			ImGui::SetCursorPos(ImVec2(152, 8));
			ImGui::PushStyleColor(ImGuiCol_ChildBg, to_vec4(8, 8, 13, 0));
			//ImGui::BeginChild(skCrypt("Top Panel"), ImVec2(475, 45), false);

			//Button "Save"
			ImGui::Spacing();
			ImGui::PushStyleColor(ImGuiCol_Button, to_vec4(8, 16, 27, 250));
			ImGui::PushStyleColor(ImGuiCol_Button, to_vec4(8, 8, 13, 255));
			ImGui::PushStyleColor(ImGuiCol_ButtonActive, to_vec4(49, 69, 82, 255));
			ImGui::PushStyleColor(ImGuiCol_ButtonHovered, to_vec4(49, 69, 82, 255));
			ImGui::PushStyleColor(ImGuiCol_Text, to_vec4(153, 176, 189, 255));
			ImGui::SetCursorPos(ImVec2(152 +14, 10+ 8));
			ImGui::Buttonn("Save Config", ImVec2(106, 24));
			ImGui::PopStyleColor();

			//Combo Box "Config"
			ImGui::PushItemWidth(120);
			ImGui::PushStyleColor(ImGuiCol_Text, to_vec4(153, 176, 189, 255));
			ImGui::PushStyleColor(ImGuiCol_Button, to_vec4(8, 8, 13, 255));
			ImGui::PushStyleColor(ImGuiCol_ButtonActive, to_vec4(8, 8, 13, 255));
			ImGui::PushStyleColor(ImGuiCol_ButtonHovered, to_vec4(8, 8, 13, 255));
			ImGui::PushStyleColor(ImGuiCol_PopupBg, to_vec4(8, 8, 13, 255));
			ImGui::PushStyleColor(ImGuiCol_FrameBg, to_vec4(8, 8, 13, 255));
			ImGui::PushStyleColor(ImGuiCol_Border, to_vec4(8, 16, 27, 255));
			ImGui::PushStyleColor(ImGuiCol_FrameBgActive, to_vec4(49, 62, 82, 255));
			ImGui::PushStyleColor(ImGuiCol_FrameBgHovered, to_vec4(49, 62, 82, 255));
			ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 0.0f);
			ImGui::SetCursorPos(ImVec2(152 +142, 10+ 8));
			if (ImGui::BeginCombo("Fast Config", current_item2))
			{
				for (int n = 0; n < IM_ARRAYSIZE(items); n++)
				{
					bool is_selected = (current_item == items[n]);
					if (ImGui::Selectable(items[n], is_selected))
						current_item = items[n];
					if (is_selected)
						ImGui::SetItemDefaultFocus();
				}
				ImGui::EndCombo();
			}

			//Exit Button
			ImGui::Spacing();
			ImGui::PushStyleColor(ImGuiCol_Text, to_vec4(153, 176, 189, 255));
			ImGui::PushStyleColor(ImGuiCol_Button, to_vec4(8, 8, 13, 255));
			ImGui::PushStyleColor(ImGuiCol_ButtonActive, to_vec4(8, 8, 13, (int)Alpha));
			ImGui::PushStyleColor(ImGuiCol_ButtonHovered, to_vec4(8, 8, 13, (int)Alpha));
			ImGui::SetCursorPos(ImVec2(152 +445, 14+ 8));
			if (ImGui::ButtonExitt("X", ImVec2(17, 17))) exit(0);
			//ImGui::EndChild();
			
		}
		ImGui::EndGroup;
		/////////////////	/////////////////	/////////////////	/////////////////	/////////////////	/////////////////
		/*Left Panel   */   /*LeftPanel    */   /*LeftPanel    */   /*LeftPanel    */   /*LeftPanel    */   /*LeftPanel    */
		/////////////////	/////////////////	/////////////////	/////////////////	/////////////////	/////////////////
		ImGui::BeginGroup;
		{
			draww = ImGui::GetWindowDrawList();
			pos = ImGui::GetWindowPos();
			draww->AddRectFilled(ImVec2(pos.x + 9, pos.y + 355), ImVec2(pos.x + 148, pos.y + 618), ImColor(8, 8, 13, 255), 3.0f, 15);

			draww->AddText(tolstiy, 18.0f, ImVec2(pos.x + 18, pos.y + 362), ImColor(153, 176, 189, 255), skCrypt("Update notes V5"));
			draww->AddText(tolstiy, 17.0f, ImVec2(pos.x + 11, pos.y + 387), ImColor(49, 69, 82, 255), skCrypt("* Trigger Bot, Flick "));
			draww->AddText(tolstiy, 17.0f, ImVec2(pos.x + 11, pos.y + 407), ImColor(49, 69, 82, 255), skCrypt("Bot, Silent Bot have"));
			draww->AddText(tolstiy, 17.0f, ImVec2(pos.x + 11, pos.y + 427), ImColor(49, 69, 82, 255), skCrypt("been removed."));

			draww->AddText(tolstiy, 17.0f, ImVec2(pos.x + 11, pos.y + 459), ImColor(49, 69, 82, 255), skCrypt("* Added Player"));
			draww->AddText(tolstiy, 17.0f, ImVec2(pos.x + 11, pos.y + 479), ImColor(49, 69, 82, 255), skCrypt("ESP, Player Radar,"));
			draww->AddText(tolstiy, 17.0f, ImVec2(pos.x + 11, pos.y + 499), ImColor(49, 69, 82, 255), skCrypt("Visual Config."));

			draww->AddText(tolstiy, 17.0f, ImVec2(pos.x + 11, pos.y + 531), ImColor(49, 69, 82, 255), skCrypt("* Aim Bot Made"));
			draww->AddText(tolstiy, 17.0f, ImVec2(pos.x + 11, pos.y + 551), ImColor(49, 69, 82, 255), skCrypt("more stable,"));
			draww->AddText(tolstiy, 17.0f, ImVec2(pos.x + 11, pos.y + 571), ImColor(49, 69, 82, 255), skCrypt("Configured for the"));
			draww->AddText(tolstiy, 17.0f, ImVec2(pos.x + 11, pos.y + 591), ImColor(49, 69, 82, 255), skCrypt("best experience."));
		}
		ImGui::EndGroup;

		draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 163 + 50, pos.y + 298 + 288 + 6), ImColor(3, 168, 245, (int)Alpha), "Developed By AN & BA  -  Powered By Cheater.net");

		if (Settings::Tab == 1)
		{
			draww = ImGui::GetWindowDrawList();
			pos = ImGui::GetWindowPos();
			draww->AddRectFilled(ImVec2(pos.x + 163, pos.y + 67), ImVec2(pos.x + 385, pos.y + 232), ImColor(0, 11, 22, 255), 5.0f, 15);
			{
				//Panel Name
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 20.f, ImVec2(pos.x + 8 + 163, pos.y + 5 + 67), ImColor(TitleCol), "Main");
					ImGui::PushStyleColor(ImGuiCol_Text, LineCol);
					ImGui::SetCursorPos(ImVec2(3 + 163, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(4 + 163, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(5 + 163, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(6 + 163, Y + 67));
					ImGui::Text(cizgi);
					ImGui::PopStyleColor();
				}

				//Label Draws
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 163, pos.y + 40 + 67), ImColor(Renk5), "Enable Aim Bot");
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 163, pos.y + 72 + 67), ImColor(Renk5), "Invisible Lock");
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 163, pos.y + 104 + 67), ImColor(Renk5), "Aim Bot Only On X");
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 163, pos.y + 136 + 67), ImColor(Renk5), "No Recoil");
				}

				//Check Boxes
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					ImGui::PushStyleVar(ImGuiStyleVar_GrabRounding, 500.0f);
					ImGui::PushStyleColor(ImGuiCol_FrameBgActive, ImVec4(0.10f, 0.09f, 0.12f, 1.00f));

					ImGui::SetCursorPos(ImVec2(182 + 163, 40 + 67));
					ImGui::Checkbox("Aim_Bot_Enable", &Aim_Bot_Enable);

					ImGui::SetCursorPos(ImVec2(182 + 163, 72 + 67));
					ImGui::Checkbox("Visible_Lock", &Visible_Lock);

					ImGui::SetCursorPos(ImVec2(182 + 163, 104 + 67));
					ImGui::Checkbox("Aim_Bot_Only_On_X", &Aim_Bot_Only_On_X);

					ImGui::SetCursorPos(ImVec2(182 + 163, 136 + 67));
					ImGui::Checkbox("No_Recoil", &No_Recoil);

					ImGui::PopStyleColor();
					ImGui::PopStyleVar();
				}
			}

			draww = ImGui::GetWindowDrawList();
			pos = ImGui::GetWindowPos();
			draww->AddRectFilled(ImVec2(pos.x + 395, pos.y + 242), ImVec2(pos.x + 617, pos.y + 410), ImColor(0, 11, 22, 255), 5.0f, 15);
			{
				//Panel Name
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 20.f, ImVec2(pos.x + 395 + 8, pos.y + 5 + 242), ImColor(Renk2), "Key Assignment");

					ImGui::PopStyleColor();
					ImGui::PushStyleColor(ImGuiCol_Text, LineCol);
					ImGui::SetCursorPos(ImVec2(3 + 395, Y + 242));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(4 + 395, Y + 242));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(5 + 395, Y + 242));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(6 + 395, Y + 242));
					ImGui::Text(cizgi);
					ImGui::PopStyleColor();
				}

				//Label Draw
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 395 + 8, pos.y + 242 + 40), ImColor(Renk5), skCrypt("Aim Key"));
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 395, pos.y + 242 + 67), ImColor(3,168,245,(int)Alpha), skCrypt("Do not forget to assign a key"));
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 395, pos.y + 242 + 94), ImColor(49, 69, 82, 255), skCrypt("* Aimbot will not work as long"));
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 395, pos.y + 232 + 121), ImColor(49, 69, 82, 255), skCrypt("as you cannot assign a key."));
				}

				//Button "Aim bot Key"
				draww = ImGui::GetOverlayDrawList();
				pos = ImGui::GetWindowPos();
				{
					ImGui::Spacing();
					ImGui::SetCursorPos(ImVec2(91 + 395, 40 + 242));
					ImGui::PushStyleColor(ImGuiCol_Button, BAKA);
					ImGui::PushStyleColor(ImGuiCol_ButtonActive, BAKA);
					ImGui::PushStyleColor(ImGuiCol_ButtonHovered, BAKA);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 500.0f);
					WallHackKeyButton(WallHackKey, WallHackChangeKey, WallHackKeyStatus, ImVec2(127, 24));
					ImGui::PopStyleColor();
				}
			}

			draww = ImGui::GetWindowDrawList();
			pos = ImGui::GetWindowPos();
			draww->AddRectFilled(ImVec2(pos.x + 395, pos.y + 67), ImVec2(pos.x + 617, pos.y + 232), ImColor(0, 11, 22, 255), 5.0f, 15);
			{
				//Panel Name
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 20.f, ImVec2(pos.x + 8 + 395, pos.y + 5 + 67), ImColor(TitleCol), "Settings");

					ImGui::PushStyleColor(ImGuiCol_Text, LineCol);
					ImGui::SetCursorPos(ImVec2(3 + 395, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(4 + 395, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(5 + 395, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(6 + 395, Y + 67));
					ImGui::Text(cizgi);
					ImGui::PopStyleColor();
				}
				
				//Label Draw
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 395, pos.y + 40 + 67), ImColor(Renk5), "Enable Smooth");
				}

				//Check Boxes
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					ImGui::PushStyleVar(ImGuiStyleVar_GrabRounding, 500.0f);
					ImGui::PushStyleColor(ImGuiCol_FrameBgActive, ImVec4(0.10f, 0.09f, 0.12f, 1.00f));

					ImGui::SetCursorPos(ImVec2(182 + 395, 40 + 67));
					if (ImGui::Checkbox("Smooth", &Smooth) && (GetAsyncKeyState(1) & 1))
					{
						Aim_Bot_Smooth_Level_Int = 2;
					}
					else if (!Smooth)
					{
						Aim_Bot_Smooth_Level_Int = 1;

					}

					ImGui::PopStyleColor();
					ImGui::PopStyleVar();
				}

				//Slider
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8+ 395, pos.y + 40 + 32 + 67), ImColor(Renk5), "Smooth");
					draww->AddRectFilled(ImVec2(pos.x + Aim_Bot_Smooth_Level_X - 5, pos.y + Aim_Bot_Smooth_Level_Y + 1.5),
						ImVec2(pos.x + Aim_Bot_Smooth_Level_X + 29, pos.y + Aim_Bot_Smooth_Level_Y + 21.5), ImColor(Renk10), 7.0f, 15);
					draww->AddRectFilled(ImVec2(pos.x + Aim_Bot_Smooth_Level_X - 4, pos.y + Aim_Bot_Smooth_Level_Y + 2.5),
						ImVec2(pos.x + Aim_Bot_Smooth_Level_X + 28, pos.y + Aim_Bot_Smooth_Level_Y + 20.5), ImColor(Renk9), 7.0f, 15);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 7.0f);
					ImGui::PushStyleColor(ImGuiCol_FrameBg, Renk9);
					ImGui::PushStyleColor(ImGuiCol_Text, Renk2);
					ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, Trans);
					ImGui::PushItemWidth(23); ImGui::SetCursorPos(ImVec2(Aim_Bot_Smooth_Level_X - 3, Aim_Bot_Smooth_Level_Y + 1));
					ImGui::Text(Aim_Bot_Smooth_Level_IntA.c_str());
					ImGui::PopStyleColor(); ImGui::PopStyleVar();
					ImGui::PushStyleVar(ImGuiStyleVar_GrabRounding, 500.0f);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 10.0f);
					ImGui::PushStyleColor(ImGuiCol_SliderGrab, Renk2);
					ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, Renk2);
					ImGui::PushStyleColor(ImGuiCol_Text, Renk5);
					ImGui::PushItemWidth(100); ImGui::SetCursorPos(ImVec2(Aim_Bot_Smooth_Level_X - 108, Aim_Bot_Smooth_Level_Y - 3));
					ImGui::SliderInt("", &Aim_Bot_Smooth_Level_Int, 1, 10);
					Aim_Bot_Smooth_Level_IntA = std::to_string(Aim_Bot_Smooth_Level_Int);
					ImGui::PopStyleColor(); ImGui::PopStyleVar();
				}

				//Slider2
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 10 + 395, pos.y + 40 + 32 + 32 + 67), ImColor(Renk5), "FOV ");
					draww->AddRectFilled(ImVec2(pos.x + Aim_Bot_FOV_X_X - 5, pos.y + Aim_Bot_FOV_X_Y + 1.5),
						ImVec2(pos.x + Aim_Bot_FOV_X_X + 29, pos.y + Aim_Bot_FOV_X_Y + 21.5), ImColor(Renk10), 7.0f, 15);
					draww->AddRectFilled(ImVec2(pos.x + Aim_Bot_FOV_X_X - 4, pos.y + Aim_Bot_FOV_X_Y + 2.5),
						ImVec2(pos.x + Aim_Bot_FOV_X_X + 28, pos.y + Aim_Bot_FOV_X_Y + 20.5), ImColor(Renk9), 7.0f, 15);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 7.0f);
					ImGui::PushStyleColor(ImGuiCol_FrameBg, Renk9);
					ImGui::PushStyleColor(ImGuiCol_Text, Renk2);
					ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, Trans);
					ImGui::PushItemWidth(23); ImGui::SetCursorPos(ImVec2(Aim_Bot_FOV_X_X - 3, Aim_Bot_FOV_X_Y + 1));
					ImGui::Text(Aim_Bot_FOV_X_IntA.c_str());
					ImGui::PopStyleColor(); ImGui::PopStyleVar();
					ImGui::PushStyleVar(ImGuiStyleVar_GrabRounding, 500.0f);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 10.0f);
					ImGui::PushStyleColor(ImGuiCol_SliderGrab, Renk2);
					ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, Renk2);
					ImGui::PushStyleColor(ImGuiCol_Text, Renk5);
					ImGui::PushItemWidth(100); ImGui::SetCursorPos(ImVec2(Aim_Bot_FOV_X_X - 108, Aim_Bot_FOV_X_Y - 3));
					ImGui::SliderInt("  ", &Aim_Bot_FOV_X_Int, 10, 500);
					Aim_Bot_FOV_X_IntA = std::to_string(Aim_Bot_FOV_X_Int);
					ImGui::PopStyleColor(); ImGui::PopStyleVar();
				}

				//Slider3
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 10 + 395, pos.y + 72 + 32 + 32 + 67), ImColor(Renk5), "AN & BA");
					draww->AddRectFilled(ImVec2(pos.x + Aim_Bot_FOV_Y_X - 5, pos.y + Aim_Bot_FOV_Y_Y + 1.5),
						ImVec2(pos.x + Aim_Bot_FOV_Y_X + 29, pos.y + Aim_Bot_FOV_Y_Y + 21.5), ImColor(Renk10), 7.0f, 15);
					draww->AddRectFilled(ImVec2(pos.x + Aim_Bot_FOV_Y_X - 4, pos.y + Aim_Bot_FOV_Y_Y + 2.5),
						ImVec2(pos.x + Aim_Bot_FOV_Y_X + 28, pos.y + Aim_Bot_FOV_Y_Y + 20.5), ImColor(Renk9), 7.0f, 15);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 7.0f);
					ImGui::PushStyleColor(ImGuiCol_FrameBg, Renk9);
					ImGui::PushStyleColor(ImGuiCol_Text, Renk2);
					ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, Trans);
					ImGui::PushItemWidth(23); ImGui::SetCursorPos(ImVec2(Aim_Bot_FOV_Y_X - 3, Aim_Bot_FOV_Y_Y + 1));
					ImGui::Text(Aim_Bot_FOV_Y_IntA.c_str());
					ImGui::PopStyleColor(); ImGui::PopStyleVar();
					ImGui::PushStyleVar(ImGuiStyleVar_GrabRounding, 500.0f);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 10.0f);
					ImGui::PushStyleColor(ImGuiCol_SliderGrab, Renk2);
					ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, Renk2);
					ImGui::PushStyleColor(ImGuiCol_Text, Renk5);
					ImGui::PushItemWidth(100); ImGui::SetCursorPos(ImVec2(Aim_Bot_FOV_Y_X - 108, Aim_Bot_FOV_Y_Y - 3));
					ImGui::SliderInt(" ", &Aim_Bot_FOV_Y_Int, 1, 15);
					Aim_Bot_FOV_Y_IntA = std::to_string(Aim_Bot_FOV_Y_Int);
					ImGui::PopStyleColor(); ImGui::PopStyleVar();
				}
			}

			draww = ImGui::GetWindowDrawList();
			pos = ImGui::GetWindowPos();
			draww->AddRectFilled(ImVec2(pos.x + 163, pos.y + 242), ImVec2(pos.x + 385, pos.y + 410), ImColor(0, 11, 22, 255), 5.0f, 15);
			{
				//Panel Name
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 20.f, ImVec2(pos.x + 8 + 163, pos.y + 5 + 242), ImColor(Renk2), "Bone Select");

					ImGui::PopStyleColor();
					ImGui::PushStyleColor(ImGuiCol_Text, LineCol);
					ImGui::SetCursorPos(ImVec2(3 + 163, Y + 242));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(4 + 163, Y + 242));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(5 + 163, Y + 242));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(6 + 163, Y + 242));
					ImGui::Text(cizgi);
					ImGui::PopStyleColor();
				}

				//Check Boxes
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					ImGui::PushStyleVar(ImGuiStyleVar_GrabRounding, 500.0f);
					ImGui::PushStyleColor(ImGuiCol_FrameBgActive, ImVec4(0.10f, 0.09f, 0.12f, 1.00f));

					if (HeadB == false & NeckB == false & BodyB == false)
					{
						if (Bones == 1)
						{
							HeadB = true;
						}

						if (Bones == 2)
						{
							NeckB = true;
						}

						if (Bones == 3)
						{
							BodyB = true;
						}
					}

					ImGui::SetCursorPos(ImVec2(182 + 163, 40 + 242));
					if (ImGui::Checkbox2("Head", &HeadB))
					{
						BodyB = false;
						NeckB = false;
					}

					if (HeadB == true)
					{
						Bones = 1;
					}

					ImGui::SetCursorPos(ImVec2(182 + 163, 72 + 242));
					if (ImGui::Checkbox2("Neck", &NeckB))
					{
						BodyB = false;
						HeadB = false;
					}

					if (NeckB == true)
					{
						Bones = 2;
					}

					ImGui::SetCursorPos(ImVec2(182 + 163, 104 + 242));
					if (ImGui::Checkbox2("Body", &BodyB))
					{
						NeckB = false;
						HeadB = false;
					}

					if (BodyB == true)
					{
						Bones = 3;
					}

					ImGui::PopStyleColor();
					ImGui::PopStyleVar();
				}

				//Labels
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 92 + 163, pos.y + 40 + 242), ImColor(Renk5), "Head");
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 92 + 163, pos.y + 72 + 242), ImColor(Renk5), "Neck");
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 92 + 163, pos.y + 104 + 242), ImColor(Renk5), "Body");
				}

				//Slider
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				if (Bones == 3)
				{
					Body(pos.x + 20 + 163, pos.y + 40 + 242);
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 10 + 163, pos.y + 135 + 242), ImColor(Renk5), "Body  Y");
					draww->AddRectFilled(ImVec2(pos.x + Aim_Bot_Bone_Select_Body_Y_X - 5, pos.y + Aim_Bot_Bone_Select_Body_Y_Y + 1.5),
						ImVec2(pos.x + Aim_Bot_Bone_Select_Body_Y_X + 29, pos.y + Aim_Bot_Bone_Select_Body_Y_Y + 21.5), ImColor(Renk10), 7.0f, 15);
					draww->AddRectFilled(ImVec2(pos.x + Aim_Bot_Bone_Select_Body_Y_X - 4, pos.y + Aim_Bot_Bone_Select_Body_Y_Y + 2.5),
						ImVec2(pos.x + Aim_Bot_Bone_Select_Body_Y_X + 28, pos.y + Aim_Bot_Bone_Select_Body_Y_Y + 20.5), ImColor(Renk9), 7.0f, 15);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 7.0f);
					ImGui::PushStyleColor(ImGuiCol_FrameBg, Renk9);
					ImGui::PushStyleColor(ImGuiCol_Text, Renk2);
					ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, Trans);
					ImGui::PushItemWidth(23); ImGui::SetCursorPos(ImVec2(Aim_Bot_Bone_Select_Body_Y_X - 3, Aim_Bot_Bone_Select_Body_Y_Y + 1));
					ImGui::Text(Aim_Bot_Bone_Select_Body_IntA.c_str());
					ImGui::PopStyleColor(); ImGui::PopStyleVar();
					ImGui::PushStyleVar(ImGuiStyleVar_GrabRounding, 500.0f);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 10.0f);
					ImGui::PushStyleColor(ImGuiCol_SliderGrab, Renk2);
					ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, Renk2);
					ImGui::PushStyleColor(ImGuiCol_Text, Renk5);
					ImGui::PushItemWidth(100); ImGui::SetCursorPos(ImVec2(Aim_Bot_Bone_Select_Body_Y_X - 108, Aim_Bot_Bone_Select_Body_Y_Y - 3));
					ImGui::SliderInt("Aim_Bot_Bone_Select_Body_Y", &Aim_Bot_Bone_Select_Body_Int, 0, 100);
					Aim_Bot_Bone_Select_Body_IntA = std::to_string(Aim_Bot_Bone_Select_Body_Int);
					ImGui::PopStyleColor(); ImGui::PopStyleVar();
				}

				//Slider2
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				if (Bones == 2)
				{
					Neck(pos.x + 20 + 163, pos.y + 40 + 242);
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 10 + 163, pos.y + 135 + 242), ImColor(Renk5), "Neck  Y");
					draww->AddRectFilled(ImVec2(pos.x + Aim_Bot_Bone_Select_Body_Y_X - 5, pos.y + Aim_Bot_Bone_Select_Body_Y_Y + 1.5),
						ImVec2(pos.x + Aim_Bot_Bone_Select_Body_Y_X + 29, pos.y + Aim_Bot_Bone_Select_Body_Y_Y + 21.5), ImColor(Renk10), 7.0f, 15);
					draww->AddRectFilled(ImVec2(pos.x + Aim_Bot_Bone_Select_Body_Y_X - 4, pos.y + Aim_Bot_Bone_Select_Body_Y_Y + 2.5),
						ImVec2(pos.x + Aim_Bot_Bone_Select_Body_Y_X + 28, pos.y + Aim_Bot_Bone_Select_Body_Y_Y + 20.5), ImColor(Renk9), 7.0f, 15);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 7.0f);
					ImGui::PushStyleColor(ImGuiCol_FrameBg, Renk9);
					ImGui::PushStyleColor(ImGuiCol_Text, Renk2);
					ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, Trans);
					ImGui::PushItemWidth(23); ImGui::SetCursorPos(ImVec2(Aim_Bot_Bone_Select_Body_Y_X - 3, Aim_Bot_Bone_Select_Body_Y_Y + 1));
					ImGui::Text(Aim_Bot_Bone_Select_Neck_IntA.c_str());
					ImGui::PopStyleColor(); ImGui::PopStyleVar();
					ImGui::PushStyleVar(ImGuiStyleVar_GrabRounding, 500.0f);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 10.0f);
					ImGui::PushStyleColor(ImGuiCol_SliderGrab, Renk2);
					ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, Renk2);
					ImGui::PushStyleColor(ImGuiCol_Text, Renk5);
					ImGui::PushItemWidth(100); ImGui::SetCursorPos(ImVec2(Aim_Bot_Bone_Select_Body_Y_X - 108, Aim_Bot_Bone_Select_Body_Y_Y - 3));
					ImGui::SliderInt("Aim_Bot_Bone_Select_Neck_Y", &Aim_Bot_Bone_Select_Neck_Int, 0, 100);
					Aim_Bot_Bone_Select_Neck_IntA = std::to_string(Aim_Bot_Bone_Select_Neck_Int);
					ImGui::PopStyleColor(); ImGui::PopStyleVar();
				}

				//Slider3
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				if (Bones == 1)
				{
					Head(pos.x + 20 + 163, pos.y + 40 + 242);
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 10 + 163, pos.y + 135 + 242), ImColor(Renk5), "Head  Y");
					draww->AddRectFilled(ImVec2(pos.x + Aim_Bot_Bone_Select_Body_Y_X - 5, pos.y + Aim_Bot_Bone_Select_Body_Y_Y + 1.5),
						ImVec2(pos.x + Aim_Bot_Bone_Select_Body_Y_X + 29, pos.y + Aim_Bot_Bone_Select_Body_Y_Y + 21.5), ImColor(Renk10), 7.0f, 15);
					draww->AddRectFilled(ImVec2(pos.x + Aim_Bot_Bone_Select_Body_Y_X - 4, pos.y + Aim_Bot_Bone_Select_Body_Y_Y + 2.5),
						ImVec2(pos.x + Aim_Bot_Bone_Select_Body_Y_X + 28, pos.y + Aim_Bot_Bone_Select_Body_Y_Y + 20.5), ImColor(Renk9), 7.0f, 15);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 7.0f);
					ImGui::PushStyleColor(ImGuiCol_FrameBg, Renk9);
					ImGui::PushStyleColor(ImGuiCol_Text, Renk2);
					ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, Trans);
					ImGui::PushItemWidth(23); ImGui::SetCursorPos(ImVec2(Aim_Bot_Bone_Select_Body_Y_X - 3, Aim_Bot_Bone_Select_Body_Y_Y + 1));
					ImGui::Text(Aim_Bot_Bone_Select_Head_IntA.c_str());
					ImGui::PopStyleColor(); ImGui::PopStyleVar();
					ImGui::PushStyleVar(ImGuiStyleVar_GrabRounding, 500.0f);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 10.0f);
					ImGui::PushStyleColor(ImGuiCol_SliderGrab, Renk2);
					ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, Renk2);
					ImGui::PushStyleColor(ImGuiCol_Text, Renk5);
					ImGui::PushItemWidth(100); ImGui::SetCursorPos(ImVec2(Aim_Bot_Bone_Select_Body_Y_X - 108, Aim_Bot_Bone_Select_Body_Y_Y - 3));
					ImGui::SliderInt("Aim_Bot_Bone_Select_Head_Y", &Aim_Bot_Bone_Select_Head_Int, 0, 100);
					Aim_Bot_Bone_Select_Head_IntA = std::to_string(Aim_Bot_Bone_Select_Head_Int);
					ImGui::PopStyleColor(); ImGui::PopStyleVar();
				}
			}
		}

		if (Settings::Tab == 2)
		{
			draww = ImGui::GetWindowDrawList();
			pos = ImGui::GetWindowPos();
			draww->AddRectFilled(ImVec2(pos.x + 163, pos.y + 67), ImVec2(pos.x + 385, pos.y + 232 + 96), ImColor(0, 11, 22, 255), 5.0f, 15);
			{
				//Panel Name
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 20.f, ImVec2(pos.x + 8 + 163, pos.y + 5 + 67), ImColor(TitleCol), "Player Visual");
					ImGui::PushStyleColor(ImGuiCol_Text, LineCol);
					ImGui::SetCursorPos(ImVec2(3 + 163, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(4 + 163, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(5 + 163, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(6 + 163, Y + 67));
					ImGui::Text(cizgi);
					ImGui::PopStyleColor();
				}

				//Label Draws
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
				
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 163, pos.y + 40+67), ImColor(Renk5), "Enable ESP");
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 163, pos.y + 72+67), ImColor(Renk5), "Enable Bone ESP");
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 163, pos.y + 104+67), ImColor(Renk5), "Enable Head ESP");
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 163, pos.y + 136+67), ImColor(Renk5), "Enable Box ESP");
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 163, pos.y + 168+67), ImColor(Renk5), "Enable Snap Line ESP");
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 163, pos.y + 200+67), ImColor(Renk5), "Health Bar ESP");
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 163, pos.y + 232+67), ImColor(Renk5), "Distance ESP");
					
				}

				//Check Boxes
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					ImGui::PushStyleVar(ImGuiStyleVar_GrabRounding, 500.0f);
					ImGui::PushStyleColor(ImGuiCol_FrameBgActive, ImVec4(0.10f, 0.09f, 0.12f, 1.00f));

					ImGui::SetCursorPos(ImVec2(182 + 163, 40 + 67));
					ImGui::Checkbox("Enable_ESP", &Enable_ESP);
					if (Enable_ESP == false)
					{
						Enable_Bone_ESP			= false;
						Enable_Head_ESP			= false;
						Enable_Box_ESP			= false;
						Health_Bar_ESP			= false;
						Enable_Snap_Line_ESP	= false;
						Distance_ESP			= false;
					}

					ImGui::SetCursorPos(ImVec2(182 + 163, 72 + 67));
					ImGui::Checkbox("Enable_Bone_ESP", &Enable_Bone_ESP);

					ImGui::SetCursorPos(ImVec2(182 + 163, 104 + 67));
					ImGui::Checkbox("Enable_Head_ESP", &Enable_Head_ESP);

					ImGui::SetCursorPos(ImVec2(182 + 163, 136 + 67));
					ImGui::Checkbox("Enable_Box_ESP", &Enable_Box_ESP);

					ImGui::SetCursorPos(ImVec2(182 + 163, 168 + 67));
					ImGui::Checkbox("Health_Bar_ESP", &Health_Bar_ESP);

					ImGui::SetCursorPos(ImVec2(182 + 163, 200 + 67));
					ImGui::Checkbox("Enable_Snap_Line_ESP", &Enable_Snap_Line_ESP);

					ImGui::SetCursorPos(ImVec2(182 + 163, 232 + 67));
					ImGui::Checkbox("Distance_ESP", &Distance_ESP);

					ImGui::PopStyleColor();
					ImGui::PopStyleVar();
				}
			}

			draww->AddRectFilled(ImVec2(pos.x + 395, pos.y + 67), ImVec2(pos.x + 617, pos.y + 232 + 96), ImColor(0, 11, 22, 255), 5.0f, 15);
			{
				//Panel Name
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 20.f, ImVec2(pos.x + 8 + 395, pos.y + 5 + 67), ImColor(TitleCol), "Overlay Visual");

					ImGui::PushStyleColor(ImGuiCol_Text, LineCol);
					ImGui::SetCursorPos(ImVec2(3 + 395, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(4 + 395, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(5 + 395, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(6 + 395, Y + 67));
					ImGui::Text(cizgi);
					ImGui::PopStyleColor();
				}

				//Label Draws
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 395, pos.y + 40 + 67), ImColor(Renk5), "Enable Overlay");
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 395, pos.y + 72 + 67), ImColor(Renk5), "Enable Aim Bot FOV");
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 395, pos.y + 104 + 67), ImColor(Renk5), "Ignore An&Ba Skills");
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 395, pos.y + 136 + 67), ImColor(Renk5), "Ignore Sky Skills");
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 395, pos.y + 168 + 67), ImColor(Renk5), "Enable Player Radar");
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 395, pos.y + 200 + 67), ImColor(Renk5), "Show Bot Bones Used");
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 395, pos.y + 232 + 67), ImColor(Renk5), "Enable Team Check");
				}

				//Check Boxes
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					ImGui::PushStyleVar(ImGuiStyleVar_GrabRounding, 500.0f);
					ImGui::PushStyleColor(ImGuiCol_FrameBgActive, ImVec4(0.10f, 0.09f, 0.12f, 1.00f));

					ImGui::SetCursorPos(ImVec2(182 + 395, 40 + 67));
					ImGui::Checkbox("Enable_Overlay", &Enable_Overlay);
					if (Enable_Overlay == false)
					{
						Enable_Aim_Bot_FOV			= false;
						Enable_Silent_Bot_FOV		= false;
						Enable_Flick_Bot_FOV		= false;
						Enable_Player_Radar			= false;
						Show_Aim_Bot_Bones_Used		= false;
						Enable_Team_Check			= false;
					}

					ImGui::SetCursorPos(ImVec2(182 + 395, 72 + 67));
					ImGui::Checkbox("Enable_Aim_Bot_FOV", &Enable_Aim_Bot_FOV);

					ImGui::SetCursorPos(ImVec2(182 + 395, 104 + 67));
					ImGui::Checkbox("Ignore_An_Ba_Skills", &Enable_Silent_Bot_FOV);

					ImGui::SetCursorPos(ImVec2(182 + 395, 136 + 67));
					ImGui::Checkbox("Ignore_Sky_Skills", &Enable_Flick_Bot_FOV);

					ImGui::SetCursorPos(ImVec2(182 + 395, 168 + 67));
					ImGui::Checkbox("Enable_Player_Radar", &Enable_Player_Radar);

					ImGui::SetCursorPos(ImVec2(182 + 395, 200 + 67));
					ImGui::Checkbox("Show_Aim_Bot_Bones_Used", &Show_Aim_Bot_Bones_Used);

					ImGui::SetCursorPos(ImVec2(182 + 395, 232 + 67));
					ImGui::Checkbox("Enable_Team_Check", &Enable_Team_Check);

					ImGui::PopStyleColor();
					ImGui::PopStyleVar();
				}
			}
		}

		if (Settings::Tab == 3)
		{
			draww = ImGui::GetWindowDrawList();
			pos = ImGui::GetWindowPos();
			draww->AddRectFilled(ImVec2(pos.x + 163, pos.y + 67), ImVec2(pos.x + 385, pos.y + 232), ImColor(0, 11, 22, 255), 5.0f, 15);
			{
				//Panel Name
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 20.f, ImVec2(pos.x + 8 + 163, pos.y + 5 + 67), ImColor(TitleCol), "Types Of Head Circles");
					ImGui::PushStyleColor(ImGuiCol_Text, LineCol);
					ImGui::SetCursorPos(ImVec2(3 + 163, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(4 + 163, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(5 + 163, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(6 + 163, Y + 67));
					ImGui::Text(cizgi);
					ImGui::PopStyleColor();
				}

				//Label Draw
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 163, pos.y + 40 + 67), ImColor(Renk5), "Circle Head");
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 163, pos.y + 72 + 67), ImColor(Renk5), "Rhombus Head");
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 163, pos.y + 104 + 67), ImColor(Renk5), "Hexagon Head");
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 163, pos.y + 136 + 67), ImColor(Renk5), "Triangle Head");
				}

				//Check Boxes
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					ImGui::PushStyleVar(ImGuiStyleVar_GrabRounding, 500.0f);
					ImGui::PushStyleColor(ImGuiCol_FrameBgActive, ImVec4(0.10f, 0.09f, 0.12f, 1.00f));

					ImGui::SetCursorPos(ImVec2(182 + 163, 40 + 67));
					ImGui::Checkbox("Circle_Head", &Circle_Head);

					if (Circle_Head == true)
					{
						Rhombus_Head = false;
						Hexagon_Head = false;
						Triangle_Head = false;

						Types = 15;
						Kalin = 4.0f;
					}

					ImGui::SetCursorPos(ImVec2(182 + 163, 72 + 67));
					ImGui::Checkbox("Rhombus_Head", &Rhombus_Head);

					if (Rhombus_Head == true)
					{
						Circle_Head = false;
						Hexagon_Head = false;
						Triangle_Head = false;
						Types = 4;
						Kalin = 4.0f;
					}

					ImGui::SetCursorPos(ImVec2(182 + 163, 104 + 67));
					ImGui::Checkbox("Hexagon_Head", &Hexagon_Head);

					if (Hexagon_Head == true)
					{
						Circle_Head = false;
						Rhombus_Head = false;
						Triangle_Head = false;
						Types = 6;
						Kalin = 4.0f;
					}

					ImGui::SetCursorPos(ImVec2(182 + 163, 136 + 67));
					ImGui::Checkbox("Triangle_Head", &Triangle_Head);

					if (Triangle_Head == true)
					{
						Circle_Head = false;
						Rhombus_Head = false;
						Hexagon_Head = false;
						Types = 2.0f;
						Kalin = 4.0f;
					}

					ImGui::PopStyleColor();
					ImGui::PopStyleVar();
				}
			}

			draww->AddRectFilled(ImVec2(pos.x + 395, pos.y + 67), ImVec2(pos.x + 617, pos.y + 232), ImColor(0, 11, 22, 255), 5.0f, 15);
			{
				//Panel Name
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 20.f, ImVec2(pos.x + 8 + 395, pos.y + 5 + 67), ImColor(TitleCol), "Head Circle Config");
					ImGui::PushStyleColor(ImGuiCol_Text, LineCol);
					ImGui::SetCursorPos(ImVec2(3 + 395, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(4 + 395, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(5 + 395, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(6 + 395, Y + 67));
					ImGui::Text(cizgi);
					ImGui::PopStyleColor();
				}

				//Label Draw
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 395, pos.y + 40 + 67), ImColor(Renk5), "Rainbow Color");
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 395, pos.y + 40 + 32 + 67), ImColor(Renk5), "Size");
					if (argibi == true)draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 10 + 395, pos.y + 110 - 6 + 67), ImColor(Renk5), "Rainbow Transparency");
					if (argibi == false)draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 10 + 395, pos.y + 110 - 6 + 67), ImColor(Renk5), "Transparency");
				}

				//Check Boxes
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					ImGui::PushStyleVar(ImGuiStyleVar_GrabRounding, 500.0f);
					ImGui::PushStyleColor(ImGuiCol_FrameBgActive, ImVec4(0.10f, 0.09f, 0.12f, 1.00f));

					ImGui::SetCursorPos(ImVec2(182 + 395, 40 + 67));
					ImGui::Checkbox("Rainbow_Color", &argibi);

					ImGui::PopStyleColor();
					ImGui::PopStyleVar();
				}

				//Slider
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddRectFilled(ImVec2(pos.x + Aim_Bot_Smooth_Level_X - 5, pos.y + Aim_Bot_Smooth_Level_Y + 1.5),
						ImVec2(pos.x + Aim_Bot_Smooth_Level_X + 29, pos.y + Aim_Bot_Smooth_Level_Y + 21.5), ImColor(Renk10), 7.0f, 15);
					draww->AddRectFilled(ImVec2(pos.x + Aim_Bot_Smooth_Level_X - 4, pos.y + Aim_Bot_Smooth_Level_Y + 2.5),
						ImVec2(pos.x + Aim_Bot_Smooth_Level_X + 28, pos.y + Aim_Bot_Smooth_Level_Y + 20.5), ImColor(Renk9), 7.0f, 15);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 7.0f);
					ImGui::PushStyleColor(ImGuiCol_FrameBg, Renk9);
					ImGui::PushStyleColor(ImGuiCol_Text, Renk2);
					ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, Trans);
					ImGui::PushItemWidth(23); ImGui::SetCursorPos(ImVec2(Aim_Bot_Smooth_Level_X - 3, Aim_Bot_Smooth_Level_Y + 1));
					ImGui::Text(Head_Circle_Config_SizeA.c_str());
					ImGui::PopStyleColor(); ImGui::PopStyleVar();
					ImGui::PushStyleVar(ImGuiStyleVar_GrabRounding, 500.0f);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 10.0f);
					ImGui::PushStyleColor(ImGuiCol_SliderGrab, Renk2);
					ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, Renk2);
					ImGui::PushStyleColor(ImGuiCol_Text, Renk5);
					ImGui::PushItemWidth(100); ImGui::SetCursorPos(ImVec2(Aim_Bot_Smooth_Level_X - 108, Aim_Bot_Smooth_Level_Y - 3));
					ImGui::SliderInt("", &SizeH, 5, 40);
					Head_Circle_Config_SizeA = std::to_string(SizeH);
					ImGui::PopStyleColor(); ImGui::PopStyleVar();
				}

				//Slider2
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				if (argibi == true)
				{
					draww->AddRectFilled(ImVec2(pos.x + Triggerbot_Active_Delay_X - 5, pos.y + Triggerbot_Active_Delay_Y + 1.5),
						ImVec2(pos.x + Triggerbot_Active_Delay_X + 29, pos.y + Triggerbot_Active_Delay_Y + 21.5), ImColor(Renk10), 7.0f, 15);
					draww->AddRectFilled(ImVec2(pos.x + Triggerbot_Active_Delay_X - 4, pos.y + Triggerbot_Active_Delay_Y + 2.5),
						ImVec2(pos.x + Triggerbot_Active_Delay_X + 28, pos.y + Triggerbot_Active_Delay_Y + 20.5), ImColor(Renk9), 7.0f, 15);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 7.0f);
					ImGui::PushStyleColor(ImGuiCol_FrameBg, Renk9);
					ImGui::PushStyleColor(ImGuiCol_Text, Renk2);
					ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, Trans);
					ImGui::PushItemWidth(23); ImGui::SetCursorPos(ImVec2(Triggerbot_Active_Delay_X - 3, Triggerbot_Active_Delay_Y + 1));
					ImGui::Text(Triggerbot_Active_Delay_IntA.c_str());
					ImGui::PopStyleColor(); ImGui::PopStyleVar();
					ImGui::PushStyleVar(ImGuiStyleVar_GrabRounding, 500.0f);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 10.0f);
					ImGui::PushStyleColor(ImGuiCol_SliderGrab, Renk2);
					ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, Renk2);
					ImGui::PushStyleColor(ImGuiCol_Text, Renk5);
					ImGui::PushItemWidth(170); ImGui::SetCursorPos(ImVec2(Triggerbot_Active_Delay_X - 178, Triggerbot_Active_Delay_Y - 3));
					ImGui::SliderFloat(" hwrh", &Head_Circle_Rainbow_Transparency, 50, 255);
					Triggerbot_Active_Delay_IntA = std::to_string((int)Head_Circle_Rainbow_Transparency);
					ImGui::PopStyleColor(); ImGui::PopStyleVar();
				}

				//Slider3
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				if (argibi == false)
				{
					draww->AddRectFilled(ImVec2(pos.x + Triggerbot_Active_Delay_X - 5, pos.y + Triggerbot_Active_Delay_Y + 1.5),
						ImVec2(pos.x + Triggerbot_Active_Delay_X + 29, pos.y + Triggerbot_Active_Delay_Y + 21.5), ImColor(Renk10), 7.0f, 15);
					draww->AddRectFilled(ImVec2(pos.x + Triggerbot_Active_Delay_X - 4, pos.y + Triggerbot_Active_Delay_Y + 2.5),
						ImVec2(pos.x + Triggerbot_Active_Delay_X + 28, pos.y + Triggerbot_Active_Delay_Y + 20.5), ImColor(Renk9), 7.0f, 15);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 7.0f);
					ImGui::PushStyleColor(ImGuiCol_FrameBg, Renk9);
					ImGui::PushStyleColor(ImGuiCol_Text, Renk2);
					ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, Trans);
					ImGui::PushItemWidth(23); ImGui::SetCursorPos(ImVec2(Triggerbot_Active_Delay_X - 3, Triggerbot_Active_Delay_Y + 1));
					ImGui::Text(Head_Circle_TransparencyA.c_str());
					ImGui::PopStyleColor(); ImGui::PopStyleVar();
					ImGui::PushStyleVar(ImGuiStyleVar_GrabRounding, 500.0f);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 10.0f);
					ImGui::PushStyleColor(ImGuiCol_SliderGrab, Renk2);
					ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, Renk2);
					ImGui::PushStyleColor(ImGuiCol_Text, Renk5);
					ImGui::PushItemWidth(170); ImGui::SetCursorPos(ImVec2(Triggerbot_Active_Delay_X - 178, Triggerbot_Active_Delay_Y - 3));
					ImGui::SliderInt("asdasd  ", &Head_Circle_Transparency, 50, 255);
					Head_Circle_TransparencyA = std::to_string(Head_Circle_Transparency);
					ImGui::PopStyleColor(); ImGui::PopStyleVar();
				}
			}

			draww->AddRectFilled(ImVec2(pos.x + 163, pos.y + 242), ImVec2(pos.x + 385, pos.y + 410), ImColor(0, 11, 22, 255), 5.0f, 15);
			{
				//Panel Name
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 20.f, ImVec2(pos.x + 8 + 163, pos.y + 5 + 242), ImColor(TitleCol), "Box Config");
					ImGui::PushStyleColor(ImGuiCol_Text, LineCol);
					ImGui::SetCursorPos(ImVec2(3 + 163, Y + 242));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(4 + 163, Y + 242));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(5 + 163, Y + 242));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(6 + 163, Y + 242));
					ImGui::Text(cizgi);
					ImGui::PopStyleColor();
				}

				//Check Boxes
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					ImGui::PushStyleVar(ImGuiStyleVar_GrabRounding, 500.0f);
					ImGui::PushStyleColor(ImGuiCol_FrameBgActive, ImVec4(0.10f, 0.09f, 0.12f, 1.00f));

					ImGui::SetCursorPos(ImVec2(182 + 163, 40 + 242));
					ImGui::Checkbox("Rainbasdasdow_Color", &argibi2);

					ImGui::SetCursorPos(ImVec2(182 + 163, 72 + 242));
					ImGui::Checkbox("Rhombasdasus_Head", &ucdkutu);

					ImGui::PopStyleColor();
					ImGui::PopStyleVar();
				}

				//Label Draw
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 163, pos.y + 40 + 242), ImColor(Renk5), "Rainbow Color");
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 163, pos.y + 72 + 242), ImColor(Renk5), "3D Box");
					if (argibi2 == true)draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 10 + 163, pos.y + 110 - 6 + 242), ImColor(Renk5), "Rainbow Transparency");
					if (argibi2 == false)draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 10 + 163, pos.y + 110 - 6 + 242), ImColor(Renk5), "Transparency");

				}

				//Slider
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				if (argibi2 == true)
				{
					draww->AddRectFilled(ImVec2(pos.x + Triggerbot_Active_Delay_X2 - 5, pos.y + Triggerbot_Active_Delay_Y2 + 1.5),
						ImVec2(pos.x + Triggerbot_Active_Delay_X2 + 29, pos.y + Triggerbot_Active_Delay_Y2 + 21.5), ImColor(Renk10), 7.0f, 15);
					draww->AddRectFilled(ImVec2(pos.x + Triggerbot_Active_Delay_X2 - 4, pos.y + Triggerbot_Active_Delay_Y2 + 2.5),
						ImVec2(pos.x + Triggerbot_Active_Delay_X2 + 28, pos.y + Triggerbot_Active_Delay_Y2 + 20.5), ImColor(Renk9), 7.0f, 15);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 7.0f);
					ImGui::PushStyleColor(ImGuiCol_FrameBg, Renk9);
					ImGui::PushStyleColor(ImGuiCol_Text, Renk2);
					ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, Trans);
					ImGui::PushItemWidth(23); ImGui::SetCursorPos(ImVec2(Triggerbot_Active_Delay_X2 - 3, Triggerbot_Active_Delay_Y2 + 1));
					ImGui::Text(Box_Rainbow_TransparencyA.c_str());
					ImGui::PopStyleColor(); ImGui::PopStyleVar();
					ImGui::PushStyleVar(ImGuiStyleVar_GrabRounding, 500.0f);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 10.0f);
					ImGui::PushStyleColor(ImGuiCol_SliderGrab, Renk2);
					ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, Renk2);
					ImGui::PushStyleColor(ImGuiCol_Text, Renk5);
					ImGui::PushItemWidth(170); ImGui::SetCursorPos(ImVec2(Triggerbot_Active_Delay_X2 - 178, Triggerbot_Active_Delay_Y2 - 3));
					ImGui::SliderFloat("  asdas  ", &Box_Rainbow_Transparency, 50, 255);
					Box_Rainbow_TransparencyA = std::to_string((int)Box_Rainbow_Transparency);
					ImGui::PopStyleColor(); ImGui::PopStyleVar();
				}

				//Slider2
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				if (argibi2 == false)
				{
					draww->AddRectFilled(ImVec2(pos.x + Triggerbot_Active_Delay_X2 - 5, pos.y + Triggerbot_Active_Delay_Y2 + 1.5),
						ImVec2(pos.x + Triggerbot_Active_Delay_X2 + 29, pos.y + Triggerbot_Active_Delay_Y2 + 21.5), ImColor(Renk10), 7.0f, 15);
					draww->AddRectFilled(ImVec2(pos.x + Triggerbot_Active_Delay_X2 - 4, pos.y + Triggerbot_Active_Delay_Y2 + 2.5),
						ImVec2(pos.x + Triggerbot_Active_Delay_X2 + 28, pos.y + Triggerbot_Active_Delay_Y2 + 20.5), ImColor(Renk9), 7.0f, 15);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 7.0f);
					ImGui::PushStyleColor(ImGuiCol_FrameBg, Renk9);
					ImGui::PushStyleColor(ImGuiCol_Text, Renk2);
					ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, Trans);
					ImGui::PushItemWidth(23); ImGui::SetCursorPos(ImVec2(Triggerbot_Active_Delay_X2 - 3, Triggerbot_Active_Delay_Y2 + 1));
					ImGui::Text(Box_TransparencyA.c_str());
					ImGui::PopStyleColor(); ImGui::PopStyleVar();
					ImGui::PushStyleVar(ImGuiStyleVar_GrabRounding, 500.0f);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 10.0f);
					ImGui::PushStyleColor(ImGuiCol_SliderGrab, Renk2);
					ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, Renk2);
					ImGui::PushStyleColor(ImGuiCol_Text, Renk5);
					ImGui::PushItemWidth(170); ImGui::SetCursorPos(ImVec2(Triggerbot_Active_Delay_X2 - 178, Triggerbot_Active_Delay_Y2 - 3));
					ImGui::SliderInt("      sddd   ", &Box_Transparency, 50, 255);
					Box_TransparencyA = std::to_string(Box_Transparency);
					ImGui::PopStyleColor(); ImGui::PopStyleVar();
				}
			}

			draww->AddRectFilled(ImVec2(pos.x + 395, pos.y + 242), ImVec2(pos.x + 617, pos.y + 410), ImColor(0, 11, 22, 255), 5.0f, 15);
			{
				//Panel Name
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 20.f, ImVec2(pos.x + 8 + 395, pos.y + 5 + 242), ImColor(TitleCol), "Skeleton Config");
					ImGui::PushStyleColor(ImGuiCol_Text, LineCol);
					ImGui::SetCursorPos(ImVec2(3 + 395, Y + 242));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(4 + 395, Y + 242));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(5 + 395, Y + 242));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(6 + 395, Y + 242));
					ImGui::Text(cizgi);
					ImGui::PopStyleColor();
				}

				//Label Draw
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 395, pos.y + 40 + 242), ImColor(Renk5), "Rainbow Color");
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 395, pos.y + 72 + 242), ImColor(Renk5), "Ghost Color");
					if (argibi3 == true)draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 10 + 395, pos.y + 110 - 6 + 242), ImColor(Renk5), "Rainbow Transparency");
					if (argibi3 == false)draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 10 + 395, pos.y + 110 - 6 + 242), ImColor(Renk5), "Transparency");
				}

				//Check Boxes
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					ImGui::PushStyleVar(ImGuiStyleVar_GrabRounding, 500.0f);
					ImGui::PushStyleColor(ImGuiCol_FrameBgActive, ImVec4(0.10f, 0.09f, 0.12f, 1.00f));

					ImGui::SetCursorPos(ImVec2(182 + 395, 40 + 242));
					if (ImGui::Checkbox("Rainbow_Color_Bone", &argibi3))
					{
						ghost = false;
					}

					ImGui::SetCursorPos(ImVec2(182 + 395, 72 + 242));
					if (ImGui::Checkbox("Ghost_Color", &ghost))
					{
						argibi3 = false;
					}

					ImGui::PopStyleColor();
					ImGui::PopStyleVar();
				}

				//Slider
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				if (argibi3 == true)
				{					
					draww->AddRectFilled(ImVec2(pos.x + Triggerbot_Active_Delay_X3 - 5, pos.y + Triggerbot_Active_Delay_Y3 + 1.5),
						ImVec2(pos.x + Triggerbot_Active_Delay_X3 + 29, pos.y + Triggerbot_Active_Delay_Y3 + 21.5), ImColor(Renk10), 7.0f, 15);
					draww->AddRectFilled(ImVec2(pos.x + Triggerbot_Active_Delay_X3 - 4, pos.y + Triggerbot_Active_Delay_Y3 + 2.5),
						ImVec2(pos.x + Triggerbot_Active_Delay_X3 + 28, pos.y + Triggerbot_Active_Delay_Y3 + 20.5), ImColor(Renk9), 7.0f, 15);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 7.0f);
					ImGui::PushStyleColor(ImGuiCol_FrameBg, Renk9);
					ImGui::PushStyleColor(ImGuiCol_Text, Renk2);
					ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, Trans);
					ImGui::PushItemWidth(23); ImGui::SetCursorPos(ImVec2(Triggerbot_Active_Delay_X3 - 3, Triggerbot_Active_Delay_Y3 + 1));
					ImGui::Text(Bone_Rainbow_TransparencyA.c_str());
					ImGui::PopStyleColor(); ImGui::PopStyleVar();
					ImGui::PushStyleVar(ImGuiStyleVar_GrabRounding, 500.0f);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 10.0f);
					ImGui::PushStyleColor(ImGuiCol_SliderGrab, Renk2);
					ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, Renk2);
					ImGui::PushStyleColor(ImGuiCol_Text, Renk5);
					ImGui::PushItemWidth(170); ImGui::SetCursorPos(ImVec2(Triggerbot_Active_Delay_X3 - 178, Triggerbot_Active_Delay_Y3 - 3));
					ImGui::SliderFloat("sds ", &Bone_Rainbow_Transparency, 50, 255);
					Bone_Rainbow_TransparencyA = std::to_string((int)Bone_Rainbow_Transparency);
					ImGui::PopStyleColor(); ImGui::PopStyleVar();
				}

				//Slider2
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				if (argibi3 == false)
				{					
					draww->AddRectFilled(ImVec2(pos.x + Triggerbot_Active_Delay_X3 - 5, pos.y + Triggerbot_Active_Delay_Y3 + 1.5),
						ImVec2(pos.x + Triggerbot_Active_Delay_X3 + 29, pos.y + Triggerbot_Active_Delay_Y3 + 21.5), ImColor(Renk10), 7.0f, 15);
					draww->AddRectFilled(ImVec2(pos.x + Triggerbot_Active_Delay_X3 - 4, pos.y + Triggerbot_Active_Delay_Y3 + 2.5),
						ImVec2(pos.x + Triggerbot_Active_Delay_X3 + 28, pos.y + Triggerbot_Active_Delay_Y3 + 20.5), ImColor(Renk9), 7.0f, 15);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 7.0f);
					ImGui::PushStyleColor(ImGuiCol_FrameBg, Renk9);
					ImGui::PushStyleColor(ImGuiCol_Text, Renk2);
					ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, Trans);
					ImGui::PushItemWidth(23); ImGui::SetCursorPos(ImVec2(Triggerbot_Active_Delay_X3 - 3, Triggerbot_Active_Delay_Y3 + 1));
					ImGui::Text(Bone_TransparencyA.c_str());
					ImGui::PopStyleColor(); ImGui::PopStyleVar();
					ImGui::PushStyleVar(ImGuiStyleVar_GrabRounding, 500.0f);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 10.0f);
					ImGui::PushStyleColor(ImGuiCol_SliderGrab, Renk2);
					ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, Renk2);
					ImGui::PushStyleColor(ImGuiCol_Text, Renk5);
					ImGui::PushItemWidth(170); ImGui::SetCursorPos(ImVec2(Triggerbot_Active_Delay_X3 - 178, Triggerbot_Active_Delay_Y3 - 3));
					ImGui::SliderInt("  sdsd", &Bone_Transparency, 50, 255);
					Bone_TransparencyA = std::to_string(Bone_Transparency);
					ImGui::PopStyleColor(); ImGui::PopStyleVar();
				}
			}
		}

		if (Settings::Tab == 4)
		{
			draww = ImGui::GetWindowDrawList();
			pos = ImGui::GetWindowPos();
			draww->AddRectFilled(ImVec2(pos.x + 395, pos.y + 67), ImVec2(pos.x + 617, pos.y + 232), ImColor(0, 11, 22, 255), 5.0f, 15);
			{
				//Panel Name
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 20.f, ImVec2(pos.x + 8 + 395, pos.y + 5 + 67), ImColor(TitleCol), "Head Circle");
					ImGui::PushStyleColor(ImGuiCol_Text, LineCol);
					ImGui::SetCursorPos(ImVec2(3 + 395, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(4 + 395, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(5 + 395, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(6 + 395, Y + 67));
					ImGui::Text(cizgi);
					ImGui::PopStyleColor();
				}

				//Label
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 10 + 395, pos.y + 40 + 67), ImColor(Renk5), "Circle Color");
				}

				//Blue Color
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					//Color#1
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(18 + 395, 69 + 67));
						ImGui::PushStyleColor(ImGuiCol_Anil, R1);
						ImGui::PushStyleColor(ImGuiCol_Anill, R1);
						ImGui::PushStyleColor(ImGuiCol_Anilll, R1t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#1"), ImVec2(40, 21))) { Settings::malyusuf = 1; Inner_Circle_Color = ImColor(3, 168, 245, 0); }
						ImGui::PopStyleColor();

						if (Settings::malyusuf == 1)
						{

							draww->AddRectFilled(ImVec2(pos.x + 18 + 395, pos.y + 69 + 67), ImVec2(pos.x + 18 + 40 + 395, pos.y + 69 + 21 + 67), ImColor(R1), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (18) + 2, pos.y + 67 + 69 + 1), ImColor(White), "#1");
						}
					}

					//Color#2
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(66 + 395, 69 + 67));
						ImGui::PushStyleColor(ImGuiCol_Anil, R3);
						ImGui::PushStyleColor(ImGuiCol_Anill, R3);
						ImGui::PushStyleColor(ImGuiCol_Anilll, R3t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#2"), ImVec2(40, 21))) { Settings::malyusuf = 2; Inner_Circle_Color = R3; }
						ImGui::PopStyleColor();

						if (Settings::malyusuf == 2)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 66, pos.y + 67 + 69), ImVec2(pos.x + 395 + 66 + 40, pos.y + 67 + 69 + 21), ImColor(R3), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (66) + 2, pos.y + 67 + 69 + 1), ImColor(White), skCrypt("#2"));
						}
					}

					//Color#3
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(114 + 395, 69 + 67));
						ImGui::PushStyleColor(ImGuiCol_Anil, R5);
						ImGui::PushStyleColor(ImGuiCol_Anill, R5);
						ImGui::PushStyleColor(ImGuiCol_Anilll, R5t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#3"), ImVec2(40, 21))) { Settings::malyusuf = 3; Inner_Circle_Color = R5; }
						ImGui::PopStyleColor();

						if (Settings::malyusuf == 3)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 114, pos.y + 67 + 69), ImVec2(pos.x + 395 + 114 + 40, pos.y + 67 + 69 + 21), ImColor(R5), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (114) + 2, pos.y + 67 + 69 + 1), ImColor(White), skCrypt("#3"));
						}
					}

					//Color#4
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(162 + 395, 69 + 67));
						ImGui::PushStyleColor(ImGuiCol_Anil, R6);
						ImGui::PushStyleColor(ImGuiCol_Anill, R6);
						ImGui::PushStyleColor(ImGuiCol_Anilll, R6t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#4"), ImVec2(40, 21))) { Settings::malyusuf = 4; Inner_Circle_Color = R6; }
						ImGui::PopStyleColor();

						if (Settings::malyusuf == 4)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 162, pos.y + 67 + 69), ImVec2(pos.x + 395 + 162 + 40, pos.y + 67 + 69 + 21), ImColor(R6), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (162) + 2, pos.y + 67 + 69 + 1), ImColor(White), skCrypt("#4"));
						}
					}
				}

				//Purple Color
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					//Color#5
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(18 + 395, 69 + 67 + 32));
						ImGui::PushStyleColor(ImGuiCol_Anil, E1);
						ImGui::PushStyleColor(ImGuiCol_Anill, E1);
						ImGui::PushStyleColor(ImGuiCol_Anilll, E1t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#5"), ImVec2(40, 21))) { Settings::malyusuf = 5; Inner_Circle_Color = E1; }
						ImGui::PopStyleColor();

						if (Settings::malyusuf == 5)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 18, pos.y + 67 + 69 + 32), ImVec2(pos.x + 395 + 18 + 40, pos.y + 67 + 69 + 32 + 21), ImColor(E1), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (18) + 2, pos.y + 67 + 69 + 32 + 1), ImColor(White), skCrypt("#5"));
						}
					}

					//Color#6
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(66 + 395, 69 + 67 + 32));
						ImGui::PushStyleColor(ImGuiCol_Anil, E2);
						ImGui::PushStyleColor(ImGuiCol_Anill, E2);
						ImGui::PushStyleColor(ImGuiCol_Anilll, E2t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#6"), ImVec2(40, 21))) { Settings::malyusuf = 6; Inner_Circle_Color = E2; }
						ImGui::PopStyleColor();

						if (Settings::malyusuf == 6)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 395 + 66, pos.y + 67 + 69 + 32), ImVec2(pos.x + 395 + 395 + 66 + 40, pos.y + 67 + 69 + 32 + 21), ImColor(E2), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (66) + 2, pos.y + 67 + 69 + 32 + 1), ImColor(White), skCrypt("#6"));
						}
					}

					//Color#7
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(114 + 395, 69 + 67 + 32));
						ImGui::PushStyleColor(ImGuiCol_Anil, E3);
						ImGui::PushStyleColor(ImGuiCol_Anill, E3);
						ImGui::PushStyleColor(ImGuiCol_Anilll, E3t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#7"), ImVec2(40, 21))) { Settings::malyusuf = 7; Inner_Circle_Color = E3; }
						ImGui::PopStyleColor();

						if (Settings::malyusuf == 7)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 114, pos.y + 67 + 69 + 32), ImVec2(pos.x + 395 + 114 + 40, pos.y + 67 + 69 + 32 + 21), ImColor(E3), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (114) + 2, pos.y + 67 + 69 + 32 + 1), ImColor(White), skCrypt("#7"));
						}
					}

					//Color#8
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(162 + 395, 69 + 67 + 32));
						ImGui::PushStyleColor(ImGuiCol_Anil, E4);
						ImGui::PushStyleColor(ImGuiCol_Anill, E4);
						ImGui::PushStyleColor(ImGuiCol_Anilll, E4t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#8"), ImVec2(40, 21))) { Settings::malyusuf = 8; Inner_Circle_Color = E4; }
						ImGui::PopStyleColor();

						if (Settings::malyusuf == 8)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 162, pos.y + 67 + 69 + 32), ImVec2(pos.x + 395 + 162 + 40, pos.y + 67 + 69 + 32 + 21), ImColor(E4), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (162) + 2, pos.y + 67 + 69 + 32 + 1), ImColor(White), skCrypt("#8"));
						}
					}
				}

				//Green Color
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					//Color#9
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(18 + 395, 69 + 67 + 64));
						ImGui::PushStyleColor(ImGuiCol_Anil, S1);
						ImGui::PushStyleColor(ImGuiCol_Anill, S1);
						ImGui::PushStyleColor(ImGuiCol_Anilll, S1t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#9"), ImVec2(40, 21))) { Settings::malyusuf = 9; Inner_Circle_Color = S1; }
						ImGui::PopStyleColor();

						if (Settings::malyusuf == 9)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 18, pos.x + 67 + 69 + 64), ImVec2(pos.x + 395 + 18 + 40, pos.x + 67 + 69 + 64 + 21), ImColor(S1), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (18) + 2, pos.x + 67 + 69 + 64 + 1), ImColor(White), skCrypt("#9"));
						}
					}

					//Color#10
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(66 + 395, 69 + 67 + 64));
						ImGui::PushStyleColor(ImGuiCol_Anil, S2);
						ImGui::PushStyleColor(ImGuiCol_Anill, S2);
						ImGui::PushStyleColor(ImGuiCol_Anilll, S2t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#10"), ImVec2(40, 21))) { Settings::malyusuf = 10; Inner_Circle_Color = S2; }
						ImGui::PopStyleColor();

						if (Settings::malyusuf == 10)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 66, pos.x + 67 + 69 + 64), ImVec2(pos.x + 395 + 66 + 40, pos.x + 67 + 69 + 64 + 21), ImColor(S2), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (66) + 2, pos.x + 67 + 69 + 64 + 1), ImColor(White), skCrypt("#10"));
						}
					}

					//Color#11
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(114 + 395, 69 + 67 + 64));
						ImGui::PushStyleColor(ImGuiCol_Anil, S3);
						ImGui::PushStyleColor(ImGuiCol_Anill, S3);
						ImGui::PushStyleColor(ImGuiCol_Anilll, S3t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#11"), ImVec2(40, 21))) { Settings::malyusuf = 11; Inner_Circle_Color = S3; }
						ImGui::PopStyleColor();

						if (Settings::malyusuf == 11)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 114, pos.x + 67 + 69 + 64), ImVec2(pos.x + 395 + 114 + 40, pos.x + 67 + 69 + 64 + 21), ImColor(S3), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (114) + 2, pos.x + 67 + 69 + 64 + 1), ImColor(White), skCrypt("#11"));
						}
					}

					//Color#12
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(162 + 395, 69 + 67 + 64));
						ImGui::PushStyleColor(ImGuiCol_Anil, S4);
						ImGui::PushStyleColor(ImGuiCol_Anill, S4);
						ImGui::PushStyleColor(ImGuiCol_Anilll, S4t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#12"), ImVec2(40, 21))) { Settings::malyusuf = 12; Inner_Circle_Color = S4; }
						ImGui::PopStyleColor();

						if (Settings::malyusuf == 12)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 162, pos.x + 67 + 69 + 64), ImVec2(pos.x + 395 + 162 + 40, pos.x + 67 + 69 + 64 + 21), ImColor(S4), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (162) + 2, pos.x + 67 + 69 + 64 + 1), ImColor(White), skCrypt("#12"));
						}
					}
				}
			}

			draww->AddRectFilled(ImVec2(pos.x + 395, pos.y + 242), ImVec2(pos.x + 617, pos.y + 410), ImColor(0, 11, 22, 255), 5.0f, 15);
			{
				//Panel Name
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 20.f, ImVec2(pos.x + 8 + 395, pos.y + 5 + 242), ImColor(TitleCol), "Skeleton");
					ImGui::PushStyleColor(ImGuiCol_Text, LineCol);
					ImGui::SetCursorPos(ImVec2(3 + 395, Y + 242));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(4 + 395, Y + 242));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(5 + 395, Y + 242));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(6 + 395, Y + 242));
					ImGui::Text(cizgi);
					ImGui::PopStyleColor();
				}

				//Label
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 10 + 395, pos.y + 40 + 242), ImColor(Renk5), "Line Color");
				}

				//Blue Color
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					//Color#1
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(18 + 395, 69 + 242));
						ImGui::PushStyleColor(ImGuiCol_Anil, R1);
						ImGui::PushStyleColor(ImGuiCol_Anill, R1);
						ImGui::PushStyleColor(ImGuiCol_Anilll, R1t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#1 "), ImVec2(40, 21))) { Settings::Renk2 = 1; Skeleton_Color = ImColor(3, 168, 245, 0); }
						ImGui::PopStyleColor();

						if (Settings::Renk2 == 1)
						{

							draww->AddRectFilled(ImVec2(pos.x + 18 + 395, pos.y + 69 + 242), ImVec2(pos.x + 18 + 40 + 395, pos.y + 69 + 21 + 242), ImColor(R1), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (18) + 2, pos.y + 242 + 69 + 1), ImColor(White), "#1 ");
						}
					}

					//Color#2
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(66 + 395, 69 + 242));
						ImGui::PushStyleColor(ImGuiCol_Anil, R3);
						ImGui::PushStyleColor(ImGuiCol_Anill, R3);
						ImGui::PushStyleColor(ImGuiCol_Anilll, R3t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#2 "), ImVec2(40, 21))) { Settings::Renk2 = 2; Skeleton_Color = R3; }
						ImGui::PopStyleColor();

						if (Settings::Renk2 == 2)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 66, pos.y + 242 + 69), ImVec2(pos.x + 395 + 66 + 40, pos.y + 242 + 69 + 21), ImColor(R3), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (66) + 2, pos.y + 242 + 69 + 1), ImColor(White), skCrypt("#2 "));
						}
					}

					//Color#3
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(114 + 395, 69 + 242));
						ImGui::PushStyleColor(ImGuiCol_Anil, R5);
						ImGui::PushStyleColor(ImGuiCol_Anill, R5);
						ImGui::PushStyleColor(ImGuiCol_Anilll, R5t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#3 "), ImVec2(40, 21))) { Settings::Renk2 = 3; Skeleton_Color = R5; }
						ImGui::PopStyleColor();

						if (Settings::Renk2 == 3)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 114, pos.y + 242 + 69), ImVec2(pos.x + 395 + 114 + 40, pos.y + 242 + 69 + 21), ImColor(R5), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (114) + 2, pos.y + 242 + 69 + 1), ImColor(White), skCrypt("#3 "));
						}
					}

					//Color#4
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(162 + 395, 69 + 242));
						ImGui::PushStyleColor(ImGuiCol_Anil, R6);
						ImGui::PushStyleColor(ImGuiCol_Anill, R6);
						ImGui::PushStyleColor(ImGuiCol_Anilll, R6t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#4 "), ImVec2(40, 21))) { Settings::Renk2 = 4; Skeleton_Color = R6; }
						ImGui::PopStyleColor();

						if (Settings::Renk2 == 4)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 162, pos.y + 242 + 69), ImVec2(pos.x + 395 + 162 + 40, pos.y + 242 + 69 + 21), ImColor(R6), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (162) + 2, pos.y + 242 + 69 + 1), ImColor(White), skCrypt("#4 "));
						}
					}
				}

				//Purple Color
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					//Color#5
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(18 + 395, 69 + 242 + 32));
						ImGui::PushStyleColor(ImGuiCol_Anil, E1);
						ImGui::PushStyleColor(ImGuiCol_Anill, E1);
						ImGui::PushStyleColor(ImGuiCol_Anilll, E1t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#5 "), ImVec2(40, 21))) { Settings::Renk2 = 5; Skeleton_Color = E1; }
						ImGui::PopStyleColor();

						if (Settings::Renk2 == 5)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 18, pos.y + 242 + 69 + 32), ImVec2(pos.x + 395 + 18 + 40, pos.y + 242 + 69 + 32 + 21), ImColor(E1), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (18) + 2, pos.y + 242 + 69 + 32 + 1), ImColor(White), skCrypt("#5 "));
						}
					}

					//Color#6
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(66 + 395, 69 + 242 + 32));
						ImGui::PushStyleColor(ImGuiCol_Anil, E2);
						ImGui::PushStyleColor(ImGuiCol_Anill, E2);
						ImGui::PushStyleColor(ImGuiCol_Anilll, E2t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#6 "), ImVec2(40, 21))) { Settings::Renk2 = 6; Skeleton_Color = E2; }
						ImGui::PopStyleColor();

						if (Settings::Renk2 == 6)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 395 + 66, pos.y + 242 + 69 + 32), ImVec2(pos.x + 395 + 395 + 66 + 40, pos.y + 242 + 69 + 32 + 21), ImColor(E2), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (66) + 2, pos.y + 242 + 69 + 32 + 1), ImColor(White), skCrypt("#6 "));
						}
					}

					//Color#7
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(114 + 395, 69 + 242 + 32));
						ImGui::PushStyleColor(ImGuiCol_Anil, E3);
						ImGui::PushStyleColor(ImGuiCol_Anill, E3);
						ImGui::PushStyleColor(ImGuiCol_Anilll, E3t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#7 "), ImVec2(40, 21))) { Settings::Renk2 = 7; Skeleton_Color = E3; }
						ImGui::PopStyleColor();

						if (Settings::Renk2 == 7)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 114, pos.y + 242 + 69 + 32), ImVec2(pos.x + 395 + 114 + 40, pos.y + 242 + 69 + 32 + 21), ImColor(E3), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (114) + 2, pos.y + 242 + 69 + 32 + 1), ImColor(White), skCrypt("#7 "));
						}
					}

					//Color#8
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(162 + 395, 69 + 242 + 32));
						ImGui::PushStyleColor(ImGuiCol_Anil, E4);
						ImGui::PushStyleColor(ImGuiCol_Anill, E4);
						ImGui::PushStyleColor(ImGuiCol_Anilll, E4t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#8 "), ImVec2(40, 21))) { Settings::Renk2 = 8; Skeleton_Color = E4; }
						ImGui::PopStyleColor();

						if (Settings::Renk2 == 8)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 162, pos.y + 242 + 69 + 32), ImVec2(pos.x + 395 + 162 + 40, pos.y + 242 + 69 + 32 + 21), ImColor(E4), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (162) + 2, pos.y + 242 + 69 + 32 + 1), ImColor(White), skCrypt("#8 "));
						}
					}
				}

				//Green Color
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					//Color#9
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(18 + 395, 69 + 242 + 64));
						ImGui::PushStyleColor(ImGuiCol_Anil, S1);
						ImGui::PushStyleColor(ImGuiCol_Anill, S1);
						ImGui::PushStyleColor(ImGuiCol_Anilll, S1t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#9 "), ImVec2(40, 21))) { Settings::Renk2 = 9; Skeleton_Color = S1; }
						ImGui::PopStyleColor();

						if (Settings::Renk2 == 9)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 18, pos.x + 242 + 69 + 64), ImVec2(pos.x + 395 + 18 + 40, pos.x + 242 + 69 + 64 + 21), ImColor(S1), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (18) + 2, pos.x + 242 + 69 + 64 + 1), ImColor(White), skCrypt("#9 "));
						}
					}

					//Color#10
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(66 + 395, 69 + 242 + 64));
						ImGui::PushStyleColor(ImGuiCol_Anil, S2);
						ImGui::PushStyleColor(ImGuiCol_Anill, S2);
						ImGui::PushStyleColor(ImGuiCol_Anilll, S2t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#10 "), ImVec2(40, 21))) { Settings::Renk2 = 10; Skeleton_Color = S2; }
						ImGui::PopStyleColor();

						if (Settings::Renk2 == 10)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 66, pos.x + 242 + 69 + 64), ImVec2(pos.x + 395 + 66 + 40, pos.x + 242 + 69 + 64 + 21), ImColor(S2), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (66) + 2, pos.x + 242 + 69 + 64 + 1), ImColor(White), skCrypt("#10 "));
						}
					}

					//Color#11
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(114 + 395, 69 + 242 + 64));
						ImGui::PushStyleColor(ImGuiCol_Anil, S3);
						ImGui::PushStyleColor(ImGuiCol_Anill, S3);
						ImGui::PushStyleColor(ImGuiCol_Anilll, S3t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#11 "), ImVec2(40, 21))) { Settings::Renk2 = 11; Skeleton_Color = S3; }
						ImGui::PopStyleColor();

						if (Settings::Renk2 == 11)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 114, pos.x + 242 + 69 + 64), ImVec2(pos.x + 395 + 114 + 40, pos.x + 242 + 69 + 64 + 21), ImColor(S3), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (114) + 2, pos.x + 242 + 69 + 64 + 1), ImColor(White), skCrypt("#11 "));
						}
					}

					//Color#12
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(162 + 395, 69 + 242 + 64));
						ImGui::PushStyleColor(ImGuiCol_Anil, S4);
						ImGui::PushStyleColor(ImGuiCol_Anill, S4);
						ImGui::PushStyleColor(ImGuiCol_Anilll, S4t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#12 "), ImVec2(40, 21))) { Settings::Renk2 = 12; Skeleton_Color = S4; }
						ImGui::PopStyleColor();

						if (Settings::Renk2 == 12)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 162, pos.x + 242 + 69 + 64), ImVec2(pos.x + 395 + 162 + 40, pos.x + 242 + 69 + 64 + 21), ImColor(S4), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (162) + 2, pos.x + 242 + 69 + 64 + 1), ImColor(White), skCrypt("#12 "));
						}
					}
				}
			}

			draww->AddRectFilled(ImVec2(pos.x + 395, pos.y + 420), ImVec2(pos.x + 617, pos.y + 585), ImColor(0, 11, 22, 255), 5.0f, 15);
			{
				//Panel Name
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 20.f, ImVec2(pos.x + 8 + 395, pos.y + 5 + 420), ImColor(TitleCol), "Player Box");
					ImGui::PushStyleColor(ImGuiCol_Text, LineCol);
					ImGui::SetCursorPos(ImVec2(3 + 395, Y + 420));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(4 + 395, Y + 420));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(5 + 395, Y + 420));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(6 + 395, Y + 420));
					ImGui::Text(cizgi);
					ImGui::PopStyleColor();
				}

				//Label
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 10 + 395, pos.y + 40 + 420), ImColor(Renk5), "Frame Color");
				}

				//Blue Color
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					//Color#1
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(18 + 395, 69 + 420));
						ImGui::PushStyleColor(ImGuiCol_Anil, R1);
						ImGui::PushStyleColor(ImGuiCol_Anill, R1);
						ImGui::PushStyleColor(ImGuiCol_Anilll, R1t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#1  "), ImVec2(40, 21))) { Settings::Renk3 = 1; Box_Color = ImColor(3, 168, 245, 0); }
						ImGui::PopStyleColor();

						if (Settings::Renk3 == 1)
						{

							draww->AddRectFilled(ImVec2(pos.x + 18 + 395, pos.y + 69 + 420), ImVec2(pos.x + 18 + 40 + 395, pos.y + 69 + 21 + 420), ImColor(R1), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (18) + 2, pos.y + 420 + 69 + 1), ImColor(White), "#1  ");
						}
					}

					//Color#2
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(66 + 395, 69 + 420));
						ImGui::PushStyleColor(ImGuiCol_Anil, R3);
						ImGui::PushStyleColor(ImGuiCol_Anill, R3);
						ImGui::PushStyleColor(ImGuiCol_Anilll, R3t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#2  "), ImVec2(40, 21))) { Settings::Renk3 = 2; Box_Color = R3; }
						ImGui::PopStyleColor();

						if (Settings::Renk3 == 2)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 66, pos.y + 420 + 69), ImVec2(pos.x + 395 + 66 + 40, pos.y + 420 + 69 + 21), ImColor(R3), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (66) + 2, pos.y + 420 + 69 + 1), ImColor(White), skCrypt("#2  "));
						}
					}

					//Color#3
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(114 + 395, 69 + 420));
						ImGui::PushStyleColor(ImGuiCol_Anil, R5);
						ImGui::PushStyleColor(ImGuiCol_Anill, R5);
						ImGui::PushStyleColor(ImGuiCol_Anilll, R5t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#3  "), ImVec2(40, 21))) { Settings::Renk3 = 3; Box_Color = R5; }
						ImGui::PopStyleColor();

						if (Settings::Renk3 == 3)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 114, pos.y + 420 + 69), ImVec2(pos.x + 395 + 114 + 40, pos.y + 420 + 69 + 21), ImColor(R5), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (114) + 2, pos.y + 420 + 69 + 1), ImColor(White), skCrypt("#3  "));
						}
					}

					//Color#4
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(162 + 395, 69 + 420));
						ImGui::PushStyleColor(ImGuiCol_Anil, R6);
						ImGui::PushStyleColor(ImGuiCol_Anill, R6);
						ImGui::PushStyleColor(ImGuiCol_Anilll, R6t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#4  "), ImVec2(40, 21))) { Settings::Renk3 = 4; Box_Color = R6; }
						ImGui::PopStyleColor();

						if (Settings::Renk3 == 4)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 162, pos.y + 420 + 69), ImVec2(pos.x + 395 + 162 + 40, pos.y + 420 + 69 + 21), ImColor(R6), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (162) + 2, pos.y + 420 + 69 + 1), ImColor(White), skCrypt("#4  "));
						}
					}
				}

				//Purple Color
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					//Color#5
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(18 + 395, 69 + 420 + 32));
						ImGui::PushStyleColor(ImGuiCol_Anil, E1);
						ImGui::PushStyleColor(ImGuiCol_Anill, E1);
						ImGui::PushStyleColor(ImGuiCol_Anilll, E1t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#5  "), ImVec2(40, 21))) { Settings::Renk3 = 5; Box_Color = E1; }
						ImGui::PopStyleColor();

						if (Settings::Renk3 == 5)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 18, pos.y + 420 + 69 + 32), ImVec2(pos.x + 395 + 18 + 40, pos.y + 420 + 69 + 32 + 21), ImColor(E1), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (18) + 2, pos.y + 420 + 69 + 32 + 1), ImColor(White), skCrypt("#5  "));
						}
					}

					//Color#6
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(66 + 395, 69 + 420 + 32));
						ImGui::PushStyleColor(ImGuiCol_Anil, E2);
						ImGui::PushStyleColor(ImGuiCol_Anill, E2);
						ImGui::PushStyleColor(ImGuiCol_Anilll, E2t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#6  "), ImVec2(40, 21))) { Settings::Renk3 = 6; Box_Color = E2; }
						ImGui::PopStyleColor();

						if (Settings::Renk3 == 6)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 395 + 66, pos.y + 420 + 69 + 32), ImVec2(pos.x + 395 + 395 + 66 + 40, pos.y + 420 + 69 + 32 + 21), ImColor(E2), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (66) + 2, pos.y + 420 + 69 + 32 + 1), ImColor(White), skCrypt("#6  "));
						}
					}

					//Color#7
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(114 + 395, 69 + 420 + 32));
						ImGui::PushStyleColor(ImGuiCol_Anil, E3);
						ImGui::PushStyleColor(ImGuiCol_Anill, E3);
						ImGui::PushStyleColor(ImGuiCol_Anilll, E3t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#7  "), ImVec2(40, 21))) { Settings::Renk3 = 7; Box_Color = E3; }
						ImGui::PopStyleColor();

						if (Settings::Renk3 == 7)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 114, pos.y + 420 + 69 + 32), ImVec2(pos.x + 395 + 114 + 40, pos.y + 420 + 69 + 32 + 21), ImColor(E3), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (114) + 2, pos.y + 420 + 69 + 32 + 1), ImColor(White), skCrypt("#7  "));
						}
					}

					//Color#8
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(162 + 395, 69 + 420 + 32));
						ImGui::PushStyleColor(ImGuiCol_Anil, E4);
						ImGui::PushStyleColor(ImGuiCol_Anill, E4);
						ImGui::PushStyleColor(ImGuiCol_Anilll, E4t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#8  "), ImVec2(40, 21))) { Settings::Renk3 = 8; Box_Color = E4; }
						ImGui::PopStyleColor();

						if (Settings::Renk3 == 8)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 162, pos.y + 420 + 69 + 32), ImVec2(pos.x + 395 + 162 + 40, pos.y + 420 + 69 + 32 + 21), ImColor(E4), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (162) + 2, pos.y + 420 + 69 + 32 + 1), ImColor(White), skCrypt("#8  "));
						}
					}
				}

				//Green Color
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					//Color#9
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(18 + 395, 69 + 420 + 64));
						ImGui::PushStyleColor(ImGuiCol_Anil, S1);
						ImGui::PushStyleColor(ImGuiCol_Anill, S1);
						ImGui::PushStyleColor(ImGuiCol_Anilll, S1t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#9  "), ImVec2(40, 21))) { Settings::Renk3 = 9; Box_Color = S1; }
						ImGui::PopStyleColor();

						if (Settings::Renk3 == 9)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 18, pos.x + 420 + 69 + 64), ImVec2(pos.x + 395 + 18 + 40, pos.x + 420 + 69 + 64 + 21), ImColor(S1), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (18) + 2, pos.x + 420 + 69 + 64 + 1), ImColor(White), skCrypt("#9  "));
						}
					}

					//Color#10
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(66 + 395, 69 + 420 + 64));
						ImGui::PushStyleColor(ImGuiCol_Anil, S2);
						ImGui::PushStyleColor(ImGuiCol_Anill, S2);
						ImGui::PushStyleColor(ImGuiCol_Anilll, S2t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#10  "), ImVec2(40, 21))) { Settings::Renk3 = 10; Box_Color = S2; }
						ImGui::PopStyleColor();

						if (Settings::Renk3 == 10)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 66, pos.x + 420 + 69 + 64), ImVec2(pos.x + 395 + 66 + 40, pos.x + 420 + 69 + 64 + 21), ImColor(S2), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (66) + 2, pos.x + 420 + 69 + 64 + 1), ImColor(White), skCrypt("#10  "));
						}
					}

					//Color#11
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(114 + 395, 69 + 420 + 64));
						ImGui::PushStyleColor(ImGuiCol_Anil, S3);
						ImGui::PushStyleColor(ImGuiCol_Anill, S3);
						ImGui::PushStyleColor(ImGuiCol_Anilll, S3t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#11  "), ImVec2(40, 21))) { Settings::Renk3 = 11; Box_Color = S3; }
						ImGui::PopStyleColor();

						if (Settings::Renk3 == 11)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 114, pos.x + 420 + 69 + 64), ImVec2(pos.x + 395 + 114 + 40, pos.x + 420 + 69 + 64 + 21), ImColor(S3), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (114) + 2, pos.x + 420 + 69 + 64 + 1), ImColor(White), skCrypt("#11  "));
						}
					}

					//Color#12
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(162 + 395, 69 + 420 + 64));
						ImGui::PushStyleColor(ImGuiCol_Anil, S4);
						ImGui::PushStyleColor(ImGuiCol_Anill, S4);
						ImGui::PushStyleColor(ImGuiCol_Anilll, S4t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#12  "), ImVec2(40, 21))) { Settings::Renk3 = 12; Box_Color = S4; }
						ImGui::PopStyleColor();

						if (Settings::Renk3 == 12)
						{

							draww->AddRectFilled(ImVec2(pos.x + 395 + 162, pos.x + 420 + 69 + 64), ImVec2(pos.x + 395 + 162 + 40, pos.x + 420 + 69 + 64 + 21), ImColor(S4), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 395 + (162) + 2, pos.x + 420 + 69 + 64 + 1), ImColor(White), skCrypt("#12  "));
						}
					}
				}
			}

			draww->AddRectFilled(ImVec2(pos.x + 163, pos.y + 420), ImVec2(pos.x + 385, pos.y + 585), ImColor(0, 11, 22, 255), 5.0f, 15);
			{
				//Panel Name
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 20.f, ImVec2(pos.x + 8 + 163, pos.y + 5 + 420), ImColor(TitleCol), "Snap Line");
					ImGui::PushStyleColor(ImGuiCol_Text, LineCol);
					ImGui::SetCursorPos(ImVec2(3 + 163, Y + 420));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(4 + 163, Y + 420));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(5 + 163, Y + 420));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(6 + 163, Y + 420));
					ImGui::Text(cizgi);
					ImGui::PopStyleColor();
				}

				//Label
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 10 + 163, pos.y + 40 + 420), ImColor(Renk5), "Line Color");
				}

				//Blue Color
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					//Color#1
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(18 + 163, 69 + 420));
						ImGui::PushStyleColor(ImGuiCol_Anil, R1);
						ImGui::PushStyleColor(ImGuiCol_Anill, R1);
						ImGui::PushStyleColor(ImGuiCol_Anilll, R1t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#1      "), ImVec2(40, 21))) { Settings::Renk4 = 1; Snap_Line_Color = ImColor(3, 168, 245, 0); }
						ImGui::PopStyleColor();

						if (Settings::Renk4 == 1)
						{

							draww->AddRectFilled(ImVec2(pos.x + 18 + 163, pos.y + 69 + 420), ImVec2(pos.x + 18 + 40 + 163, pos.y + 69 + 21 + 420), ImColor(R1), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 163 + (18) + 2, pos.y + 420 + 69 + 1), ImColor(White), "#1      ");
						}
					}

					//Color#2
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(66 + 163, 69 + 420));
						ImGui::PushStyleColor(ImGuiCol_Anil, R3);
						ImGui::PushStyleColor(ImGuiCol_Anill, R3);
						ImGui::PushStyleColor(ImGuiCol_Anilll, R3t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#2      "), ImVec2(40, 21))) { Settings::Renk4 = 2; Snap_Line_Color = R3; }
						ImGui::PopStyleColor();

						if (Settings::Renk4 == 2)
						{

							draww->AddRectFilled(ImVec2(pos.x + 163 + 66, pos.y + 420 + 69), ImVec2(pos.x + 163 + 66 + 40, pos.y + 420 + 69 + 21), ImColor(R3), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 163 + (66) + 2, pos.y + 420 + 69 + 1), ImColor(White), skCrypt("#2      "));
						}
					}

					//Color#3
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(114 + 163, 69 + 420));
						ImGui::PushStyleColor(ImGuiCol_Anil, R5);
						ImGui::PushStyleColor(ImGuiCol_Anill, R5);
						ImGui::PushStyleColor(ImGuiCol_Anilll, R5t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#3      "), ImVec2(40, 21))) { Settings::Renk4 = 3; Snap_Line_Color = R5; }
						ImGui::PopStyleColor();

						if (Settings::Renk4 == 3)
						{

							draww->AddRectFilled(ImVec2(pos.x + 163 + 114, pos.y + 420 + 69), ImVec2(pos.x + 163 + 114 + 40, pos.y + 420 + 69 + 21), ImColor(R5), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 163 + (114) + 2, pos.y + 420 + 69 + 1), ImColor(White), skCrypt("#3      "));
						}
					}

					//Color#4
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(162 + 163, 69 + 420));
						ImGui::PushStyleColor(ImGuiCol_Anil, R6);
						ImGui::PushStyleColor(ImGuiCol_Anill, R6);
						ImGui::PushStyleColor(ImGuiCol_Anilll, R6t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#4      "), ImVec2(40, 21))) { Settings::Renk4 = 4; Snap_Line_Color = R6; }
						ImGui::PopStyleColor();

						if (Settings::Renk4 == 4)
						{

							draww->AddRectFilled(ImVec2(pos.x + 163 + 162, pos.y + 420 + 69), ImVec2(pos.x + 163 + 162 + 40, pos.y + 420 + 69 + 21), ImColor(R6), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 163 + (162) + 2, pos.y + 420 + 69 + 1), ImColor(White), skCrypt("#4      "));
						}
					}
				}

				//Purple Color
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					//Color#5
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(18 + 163, 69 + 420 + 32));
						ImGui::PushStyleColor(ImGuiCol_Anil, E1);
						ImGui::PushStyleColor(ImGuiCol_Anill, E1);
						ImGui::PushStyleColor(ImGuiCol_Anilll, E1t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#5      "), ImVec2(40, 21))) { Settings::Renk4 = 5; Snap_Line_Color = E1; }
						ImGui::PopStyleColor();

						if (Settings::Renk4 == 5)
						{

							draww->AddRectFilled(ImVec2(pos.x + 163 + 18, pos.y + 420 + 69 + 32), ImVec2(pos.x + 163 + 18 + 40, pos.y + 420 + 69 + 32 + 21), ImColor(E1), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 163 + (18) + 2, pos.y + 420 + 69 + 32 + 1), ImColor(White), skCrypt("#5      "));
						}
					}

					//Color#6
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(66 + 163, 69 + 420 + 32));
						ImGui::PushStyleColor(ImGuiCol_Anil, E2);
						ImGui::PushStyleColor(ImGuiCol_Anill, E2);
						ImGui::PushStyleColor(ImGuiCol_Anilll, E2t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#6      "), ImVec2(40, 21))) { Settings::Renk4 = 6; Snap_Line_Color = E2; }
						ImGui::PopStyleColor();

						if (Settings::Renk4 == 6)
						{

							draww->AddRectFilled(ImVec2(pos.x + 163 + 66, pos.y + 420 + 69 + 32), ImVec2(pos.x + 163 + 66 + 40, pos.y + 420 + 69 + 32 + 21), ImColor(E2), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 163 + (66) + 2, pos.y + 420 + 69 + 32 + 1), ImColor(White), skCrypt("#6      "));
						}
					}

					//Color#7
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(114 + 163, 69 + 420 + 32));
						ImGui::PushStyleColor(ImGuiCol_Anil, E3);
						ImGui::PushStyleColor(ImGuiCol_Anill, E3);
						ImGui::PushStyleColor(ImGuiCol_Anilll, E3t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#7      "), ImVec2(40, 21))) { Settings::Renk4 = 7; Snap_Line_Color = E3; }
						ImGui::PopStyleColor();

						if (Settings::Renk4 == 7)
						{

							draww->AddRectFilled(ImVec2(pos.x + 163 + 114, pos.y + 420 + 69 + 32), ImVec2(pos.x + 163 + 114 + 40, pos.y + 420 + 69 + 32 + 21), ImColor(E3), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 163 + (114) + 2, pos.y + 420 + 69 + 32 + 1), ImColor(White), skCrypt("#7      "));
						}
					}

					//Color#8
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(162 + 163, 69 + 420 + 32));
						ImGui::PushStyleColor(ImGuiCol_Anil, E4);
						ImGui::PushStyleColor(ImGuiCol_Anill, E4);
						ImGui::PushStyleColor(ImGuiCol_Anilll, E4t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#8      "), ImVec2(40, 21))) { Settings::Renk4 = 8; Snap_Line_Color = E4; }
						ImGui::PopStyleColor();

						if (Settings::Renk4 == 8)
						{

							draww->AddRectFilled(ImVec2(pos.x + 163 + 162, pos.y + 420 + 69 + 32), ImVec2(pos.x + 163 + 162 + 40, pos.y + 420 + 69 + 32 + 21), ImColor(E4), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 163 + (162) + 2, pos.y + 420 + 69 + 32 + 1), ImColor(White), skCrypt("#8      "));
						}
					}
				}

				//Green Color
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					//Color#9
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(18 + 163, 69 + 420 + 64));
						ImGui::PushStyleColor(ImGuiCol_Anil, S1);
						ImGui::PushStyleColor(ImGuiCol_Anill, S1);
						ImGui::PushStyleColor(ImGuiCol_Anilll, S1t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#9      "), ImVec2(40, 21))) { Settings::Renk4 = 9; Snap_Line_Color = S1; }
						ImGui::PopStyleColor();

						if (Settings::Renk4 == 9)
						{

							draww->AddRectFilled(ImVec2(pos.x + 163 + 18, pos.x + 420 + 69 + 64), ImVec2(pos.x + 163 + 18 + 40, pos.x + 420 + 69 + 64 + 21), ImColor(S1), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 163 + (18) + 2, pos.x + 420 + 69 + 64 + 1), ImColor(White), skCrypt("#9      "));
						}
					}

					//Color#10
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(66 + 163, 69 + 420 + 64));
						ImGui::PushStyleColor(ImGuiCol_Anil, S2);
						ImGui::PushStyleColor(ImGuiCol_Anill, S2);
						ImGui::PushStyleColor(ImGuiCol_Anilll, S2t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#10      "), ImVec2(40, 21))) { Settings::Renk4 = 10; Snap_Line_Color = S2; }
						ImGui::PopStyleColor();

						if (Settings::Renk4 == 10)
						{

							draww->AddRectFilled(ImVec2(pos.x + 163 + 66, pos.x + 420 + 69 + 64), ImVec2(pos.x + 163 + 66 + 40, pos.x + 420 + 69 + 64 + 21), ImColor(S2), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 163 + (66) + 2, pos.x + 420 + 69 + 64 + 1), ImColor(White), skCrypt("#10      "));
						}
					}

					//Color#11
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(114 + 163, 69 + 420 + 64));
						ImGui::PushStyleColor(ImGuiCol_Anil, S3);
						ImGui::PushStyleColor(ImGuiCol_Anill, S3);
						ImGui::PushStyleColor(ImGuiCol_Anilll, S3t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#11      "), ImVec2(40, 21))) { Settings::Renk4 = 11; Snap_Line_Color = S3; }
						ImGui::PopStyleColor();

						if (Settings::Renk4 == 11)
						{

							draww->AddRectFilled(ImVec2(pos.x + 163 + 114, pos.x + 420 + 69 + 64), ImVec2(pos.x + 163 + 114 + 40, pos.x + 420 + 69 + 64 + 21), ImColor(S3), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 163 + (114) + 2, pos.x + 420 + 69 + 64 + 1), ImColor(White), skCrypt("#11      "));
						}
					}

					//Color#12
					draww = ImGui::GetWindowDrawList();
					pos = ImGui::GetWindowPos();
					{
						ImGui::Spacing();
						ImGui::SetCursorPos(ImVec2(162 + 163, 69 + 420 + 64));
						ImGui::PushStyleColor(ImGuiCol_Anil, S4);
						ImGui::PushStyleColor(ImGuiCol_Anill, S4);
						ImGui::PushStyleColor(ImGuiCol_Anilll, S4t);

						ImGui::PushStyleColor(ImGuiCol_cols, White);
						ImGui::PushStyleColor(ImGuiCol_colss, White);
						ImGui::PushStyleColor(ImGuiCol_colsss, Silver);
						if (ImGui::sukar(skCrypt("#12      "), ImVec2(40, 21))) { Settings::Renk4 = 12; Snap_Line_Color = S4; }
						ImGui::PopStyleColor();

						if (Settings::Renk4 == 12)
						{

							draww->AddRectFilled(ImVec2(pos.x + 163 + 162, pos.x + 420 + 69 + 64), ImVec2(pos.x + 163 + 162 + 40, pos.x + 420 + 69 + 64 + 21), ImColor(S4), 7.0, 15);

							draww->AddText(nullptr, 13.0f, ImVec2(pos.x + 163 + (162) + 2, pos.x + 420 + 69 + 64 + 1), ImColor(White), skCrypt("#12      "));
						}
					}
				}
			}

			draww->AddRectFilled(ImVec2(pos.x + 163, pos.y + 67), ImVec2(pos.x + 385, pos.y + 410), ImColor(0, 11, 22, 255), 5.0f, 15);
			{
				//Art Box
				
					draww = ImGui::GetOverlayDrawList();
					pos = ImGui::GetWindowPos();
					
					{
					

					
						if (argibi2 == false)
						{
							if (ucdkutu == true)
							{
								//Art Cube
								draww = ImGui::GetOverlayDrawList();
								pos = ImGui::GetWindowPos();
								{
									draww->AddLine(ImVec2(pos.x + 163 + 21, pos.y + 67 + 45 - 27), ImVec2(pos.x + 163 + 36, pos.y + 67 + 60 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 22, pos.y + 67 + 45 - 27), ImVec2(pos.x + 163 + 36, pos.y + 67 + 59 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 22, pos.y + 67 + 44 - 27), ImVec2(pos.x + 163 + 37, pos.y + 67 + 59 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 23, pos.y + 67 + 44 - 27), ImVec2(pos.x + 163 + 37, pos.y + 67 + 58 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 23, pos.y + 67 + 43 - 27), ImVec2(pos.x + 163 + 38, pos.y + 67 + 58 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 198, pos.y + 67 + 42 - 27), ImVec2(pos.x + 163 + 183, pos.y + 67 + 57 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 198, pos.y + 67 + 43 - 27), ImVec2(pos.x + 163 + 184, pos.y + 67 + 57 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 199, pos.y + 67 + 43 - 27), ImVec2(pos.x + 163 + 184, pos.y + 67 + 58 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 199, pos.y + 67 + 43 - 27), ImVec2(pos.x + 163 + 184, pos.y + 67 + 58 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 199, pos.y + 67 + 44 - 27), ImVec2(pos.x + 163 + 185, pos.y + 67 + 58 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 200, pos.y + 67 + 44 - 27), ImVec2(pos.x + 163 + 185, pos.y + 67 + 59 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 21, pos.y + 67 + 352 - 27), ImVec2(pos.x + 163 + 36, pos.y + 67 + 337 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 22, pos.y + 67 + 352 - 27), ImVec2(pos.x + 163 + 36, pos.y + 67 + 338 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 22, pos.y + 67 + 353 - 27), ImVec2(pos.x + 163 + 37, pos.y + 67 + 338 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 23, pos.y + 67 + 353 - 27), ImVec2(pos.x + 163 + 37, pos.y + 67 + 339 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 23, pos.y + 67 + 354 - 27), ImVec2(pos.x + 163 + 38, pos.y + 67 + 339 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 198, pos.y + 67 + 355 - 27), ImVec2(pos.x + 163 + 183, pos.y + 67 + 340 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 198, pos.y + 67 + 354 - 27), ImVec2(pos.x + 163 + 184, pos.y + 67 + 340 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 199, pos.y + 67 + 354 - 27), ImVec2(pos.x + 163 + 184, pos.y + 67 + 339 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 199, pos.y + 67 + 353 - 27), ImVec2(pos.x + 163 + 185, pos.y + 67 + 339 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 200, pos.y + 67 + 353 - 27), ImVec2(pos.x + 163 + 185, pos.y + 67 + 338 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddRectFilled(ImVec2(pos.x + 163 + 35, pos.y + 67 + 57 - 27), ImVec2(pos.x + 163 + 185, pos.y + 67 + 60 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency));
									draww->AddRectFilled(ImVec2(pos.x + 163 + 183, pos.y + 67 + 60 - 27), ImVec2(pos.x + 163 + 186, pos.y + 67 + 338 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency));
									draww->AddRectFilled(ImVec2(pos.x + 163 + 35, pos.y + 67 + 60 - 27), ImVec2(pos.x + 163 + 38, pos.y + 67 + 338 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency));
									draww->AddRectFilled(ImVec2(pos.x + 163 + 35, pos.y + 67 + 338 - 27), ImVec2(pos.x + 163 + 185, pos.y + 67 + 341 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency));
									draww->AddRect(ImVec2(pos.x + 163 + 38, pos.y + 67 + 60 - 27), ImVec2(pos.x + 163 + 183, pos.y + 67 + 338 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency));
									draww->AddLine(ImVec2(pos.x + 163 + 39, pos.y + 67 + 61 - 27), ImVec2(pos.x + 163 + 41, pos.y + 67 + 61 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 39, pos.y + 67 + 62 - 27), ImVec2(pos.x + 163 + 40, pos.y + 67 + 62 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 180, pos.y + 67 + 61 - 27), ImVec2(pos.x + 163 + 182, pos.y + 67 + 61 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 181, pos.y + 67 + 62 - 27), ImVec2(pos.x + 163 + 182, pos.y + 67 + 62 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 39, pos.y + 67 + 335 - 27), ImVec2(pos.x + 163 + 40, pos.y + 67 + 335 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 39, pos.y + 67 + 336 - 27), ImVec2(pos.x + 163 + 41, pos.y + 67 + 336 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 181, pos.y + 67 + 335 - 27), ImVec2(pos.x + 163 + 182, pos.y + 67 + 335 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 180, pos.y + 67 + 336 - 27), ImVec2(pos.x + 163 + 182, pos.y + 67 + 336 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 0.0f);
								}
							}
							draww->AddLine(ImVec2(pos.x + 163 + 19, pos.y + 67 + 39 - 27), ImVec2(pos.x + 163 + 202, pos.y + 67 + 39 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 18, pos.y + 67 + 40 - 27), ImVec2(pos.x + 163 + 203, pos.y + 67 + 40 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 17, pos.y + 67 + 41 - 27), ImVec2(pos.x + 163 + 204, pos.y + 67 + 41 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 17, pos.y + 67 + 42 - 27), ImVec2(pos.x + 163 + 204, pos.y + 67 + 42 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 17, pos.y + 67 + 43 - 27), ImVec2(pos.x + 163 + 23, pos.y + 67 + 43 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 198, pos.y + 67 + 43 - 27), ImVec2(pos.x + 163 + 204, pos.y + 67 + 43 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 17, pos.y + 67 + 44 - 27), ImVec2(pos.x + 163 + 22, pos.y + 67 + 44 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 199, pos.y + 67 + 44 - 27), ImVec2(pos.x + 163 + 204, pos.y + 67 + 44 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 1.0F);

							draww->AddLine(ImVec2(pos.x + 163 + 17, pos.y + 67 + 45 - 27), ImVec2(pos.x + 163 + 17, pos.y + 67 + 353 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 18, pos.y + 67 + 45 - 27), ImVec2(pos.x + 163 + 18, pos.y + 67 + 353 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 19, pos.y + 67 + 45 - 27), ImVec2(pos.x + 163 + 19, pos.y + 67 + 353 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 20, pos.y + 67 + 45 - 27), ImVec2(pos.x + 163 + 20, pos.y + 67 + 353 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 1.0F);

							draww->AddLine(ImVec2(pos.x + 163 + 200, pos.y + 67 + 45 - 27), ImVec2(pos.x + 163 + 200, pos.y + 67 + 353 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 201, pos.y + 67 + 45 - 27), ImVec2(pos.x + 163 + 201, pos.y + 67 + 353 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 202, pos.y + 67 + 45 - 27), ImVec2(pos.x + 163 + 202, pos.y + 67 + 353 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 203, pos.y + 67 + 45 - 27), ImVec2(pos.x + 163 + 203, pos.y + 67 + 353 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 1.0F);

							draww->AddLine(ImVec2(pos.x + 163 + 17, pos.y + 67 + 353 - 27), ImVec2(pos.x + 163 + 22, pos.y + 67 + 353 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 199, pos.y + 67 + 353 - 27), ImVec2(pos.x + 163 + 204, pos.y + 67 + 353 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 17, pos.y + 67 + 354 - 27), ImVec2(pos.x + 163 + 23, pos.y + 67 + 354 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 198, pos.y + 67 + 354 - 27), ImVec2(pos.x + 163 + 204, pos.y + 67 + 354 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 17, pos.y + 67 + 355 - 27), ImVec2(pos.x + 163 + 204, pos.y + 67 + 355 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 17, pos.y + 67 + 356 - 27), ImVec2(pos.x + 163 + 204, pos.y + 67 + 356 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 18, pos.y + 67 + 357 - 27), ImVec2(pos.x + 163 + 203, pos.y + 67 + 357 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 19, pos.y + 67 + 358 - 27), ImVec2(pos.x + 163 + 202, pos.y + 67 + 358 - 27), ImColor(Box_Color) + ImColor(0, 0, 0, (int)Box_Transparency), 1.0F);
						}
						if (argibi2 == true)
						{
							if (ucdkutu == true)
							{
								//Art Cube
								draww = ImGui::GetOverlayDrawList();
								pos = ImGui::GetWindowPos();
								{
									draww->AddLine(ImVec2(pos.x + 163 + 21, pos.y + 67 + 45 - 27), ImVec2(pos.x + 163 + 36, pos.y + 67 + 60 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 22, pos.y + 67 + 45 - 27), ImVec2(pos.x + 163 + 36, pos.y + 67 + 59 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 22, pos.y + 67 + 44 - 27), ImVec2(pos.x + 163 + 37, pos.y + 67 + 59 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 23, pos.y + 67 + 44 - 27), ImVec2(pos.x + 163 + 37, pos.y + 67 + 58 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 23, pos.y + 67 + 43 - 27), ImVec2(pos.x + 163 + 38, pos.y + 67 + 58 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 198, pos.y + 67 + 42 - 27), ImVec2(pos.x + 163 + 183, pos.y + 67 + 57 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 198, pos.y + 67 + 43 - 27), ImVec2(pos.x + 163 + 184, pos.y + 67 + 57 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 199, pos.y + 67 + 43 - 27), ImVec2(pos.x + 163 + 184, pos.y + 67 + 58 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 199, pos.y + 67 + 43 - 27), ImVec2(pos.x + 163 + 184, pos.y + 67 + 58 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 199, pos.y + 67 + 44 - 27), ImVec2(pos.x + 163 + 185, pos.y + 67 + 58 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 200, pos.y + 67 + 44 - 27), ImVec2(pos.x + 163 + 185, pos.y + 67 + 59 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 21, pos.y + 67 + 352 - 27), ImVec2(pos.x + 163 + 36, pos.y + 67 + 337 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 22, pos.y + 67 + 352 - 27), ImVec2(pos.x + 163 + 36, pos.y + 67 + 338 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 22, pos.y + 67 + 353 - 27), ImVec2(pos.x + 163 + 37, pos.y + 67 + 338 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 23, pos.y + 67 + 353 - 27), ImVec2(pos.x + 163 + 37, pos.y + 67 + 339 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 23, pos.y + 67 + 354 - 27), ImVec2(pos.x + 163 + 38, pos.y + 67 + 339 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 198, pos.y + 67 + 355 - 27), ImVec2(pos.x + 163 + 183, pos.y + 67 + 340 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 198, pos.y + 67 + 354 - 27), ImVec2(pos.x + 163 + 184, pos.y + 67 + 340 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 199, pos.y + 67 + 354 - 27), ImVec2(pos.x + 163 + 184, pos.y + 67 + 339 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 199, pos.y + 67 + 353 - 27), ImVec2(pos.x + 163 + 185, pos.y + 67 + 339 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 200, pos.y + 67 + 353 - 27), ImVec2(pos.x + 163 + 185, pos.y + 67 + 338 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddRectFilled(ImVec2(pos.x + 163 + 35, pos.y + 67 + 57 - 27), ImVec2(pos.x + 163 + 185, pos.y + 67 + 60 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency));
									draww->AddRectFilled(ImVec2(pos.x + 163 + 183, pos.y + 67 + 60 - 27), ImVec2(pos.x + 163 + 186, pos.y + 67 + 338 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency));
									draww->AddRectFilled(ImVec2(pos.x + 163 + 35, pos.y + 67 + 60 - 27), ImVec2(pos.x + 163 + 38, pos.y + 67 + 338 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency));
									draww->AddRectFilled(ImVec2(pos.x + 163 + 35, pos.y + 67 + 338 - 27), ImVec2(pos.x + 163 + 185, pos.y + 67 + 341 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency));
									draww->AddRect(ImVec2(pos.x + 163 + 38, pos.y + 67 + 60 - 27), ImVec2(pos.x + 163 + 183, pos.y + 67 + 338 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency));
									draww->AddLine(ImVec2(pos.x + 163 + 39, pos.y + 67 + 61 - 27), ImVec2(pos.x + 163 + 41, pos.y + 67 + 61 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 39, pos.y + 67 + 62 - 27), ImVec2(pos.x + 163 + 40, pos.y + 67 + 62 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 180, pos.y + 67 + 61 - 27), ImVec2(pos.x + 163 + 182, pos.y + 67 + 61 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 181, pos.y + 67 + 62 - 27), ImVec2(pos.x + 163 + 182, pos.y + 67 + 62 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 39, pos.y + 67 + 335 - 27), ImVec2(pos.x + 163 + 40, pos.y + 67 + 335 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 39, pos.y + 67 + 336 - 27), ImVec2(pos.x + 163 + 41, pos.y + 67 + 336 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 181, pos.y + 67 + 335 - 27), ImVec2(pos.x + 163 + 182, pos.y + 67 + 335 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
									draww->AddLine(ImVec2(pos.x + 163 + 180, pos.y + 67 + 336 - 27), ImVec2(pos.x + 163 + 182, pos.y + 67 + 336 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 0.0f);
								}
							}
							draww->AddLine(ImVec2(pos.x + 163 + 19, pos.y + 67 + 39 - 27), ImVec2(pos.x + 163 + 202, pos.y + 67 + 39 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 18, pos.y + 67 + 40 - 27), ImVec2(pos.x + 163 + 203, pos.y + 67 + 40 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 17, pos.y + 67 + 41 - 27), ImVec2(pos.x + 163 + 204, pos.y + 67 + 41 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 17, pos.y + 67 + 42 - 27), ImVec2(pos.x + 163 + 204, pos.y + 67 + 42 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 17, pos.y + 67 + 43 - 27), ImVec2(pos.x + 163 + 23, pos.y + 67 + 43 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 198, pos.y + 67 + 43 - 27), ImVec2(pos.x + 163 + 204, pos.y + 67 + 43 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 17, pos.y + 67 + 44 - 27), ImVec2(pos.x + 163 + 22, pos.y + 67 + 44 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 199, pos.y + 67 + 44 - 27), ImVec2(pos.x + 163 + 204, pos.y + 67 + 44 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 1.0F);

							draww->AddLine(ImVec2(pos.x + 163 + 17, pos.y + 67 + 45 - 27), ImVec2(pos.x + 163 + 17, pos.y + 67 + 353 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 18, pos.y + 67 + 45 - 27), ImVec2(pos.x + 163 + 18, pos.y + 67 + 353 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 19, pos.y + 67 + 45 - 27), ImVec2(pos.x + 163 + 19, pos.y + 67 + 353 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 20, pos.y + 67 + 45 - 27), ImVec2(pos.x + 163 + 20, pos.y + 67 + 353 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 1.0F);

							draww->AddLine(ImVec2(pos.x + 163 + 200, pos.y + 67 + 45 - 27), ImVec2(pos.x + 163 + 200, pos.y + 67 + 353 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 201, pos.y + 67 + 45 - 27), ImVec2(pos.x + 163 + 201, pos.y + 67 + 353 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 202, pos.y + 67 + 45 - 27), ImVec2(pos.x + 163 + 202, pos.y + 67 + 353 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 203, pos.y + 67 + 45 - 27), ImVec2(pos.x + 163 + 203, pos.y + 67 + 353 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 1.0F);

							draww->AddLine(ImVec2(pos.x + 163 + 17, pos.y + 67 + 353 - 27), ImVec2(pos.x + 163 + 22, pos.y + 67 + 353 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 199, pos.y + 67 + 353 - 27), ImVec2(pos.x + 163 + 204, pos.y + 67 + 353 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 17, pos.y + 67 + 354 - 27), ImVec2(pos.x + 163 + 23, pos.y + 67 + 354 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 198, pos.y + 67 + 354 - 27), ImVec2(pos.x + 163 + 204, pos.y + 67 + 354 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 17, pos.y + 67 + 355 - 27), ImVec2(pos.x + 163 + 204, pos.y + 67 + 355 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 17, pos.y + 67 + 356 - 27), ImVec2(pos.x + 163 + 204, pos.y + 67 + 356 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 18, pos.y + 67 + 357 - 27), ImVec2(pos.x + 163 + 203, pos.y + 67 + 357 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Box_Rainbow_Transparency), 1.0F);
							draww->AddLine(ImVec2(pos.x + 163 + 19, pos.y + 67 + 358 - 27), ImVec2(pos.x + 163 + 202, pos.y + 67 + 358 - 27), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Head_Circle_Rainbow_Transparency), 1.0F);
						}
					}

					//Art Bone
					draww = ImGui::GetOverlayDrawList();
					pos = ImGui::GetWindowPos();
					{
						if (argibi3 == false)
						{
							Boneh(pos.x + 163 + 51, pos.y + 67 + 85 - 27, ImColor(Skeleton_Color) + ImColor(0, 0, 0, (int)Bone_Transparency));
						}

						if (ghost == true)
						{
							Boneh(pos.x + 163 + 51, pos.y + 67 + 85 - 27, ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Bone_Rainbow_Transparency));
							Boneh(pos.x + 163 + 51, pos.y + 67 + 85 - 27, ImColor(255, 255, 255, (int)Alpha));
						}

						if (argibi3 == true)
						{
							Boneh(pos.x + 163 + 51, pos.y + 67 + 85 - 27, ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Bone_Rainbow_Transparency));
						}
					}

					//Art Head
					draww = ImGui::GetOverlayDrawList();
					pos = ImGui::GetWindowPos();
					{
						if (argibi == false)
						{
							//Art Head
							draww = ImGui::GetOverlayDrawList();
							pos = ImGui::GetWindowPos();
							{
								draww->AddCircle(ImVec2(pos.x + 163 + 111, pos.y + 67 + 88 - 27), (SizeH), ImColor(Inner_Circle_Color) + ImColor(0, 0, 0, (int)Head_Circle_Transparency), Types, Kalin);
							}
						}
						if (argibi == true )
						{
							//Art Head
							draww = ImGui::GetOverlayDrawList();
							pos = ImGui::GetWindowPos();
							{
								draww->AddCircle(ImVec2(pos.x + 163 + 111, pos.y + 67 + 88 - 27), (SizeH), ImColor(isRed, isGreen, isBlue, 0.0f) + ImColor(0, 0, 0, (int)Head_Circle_Rainbow_Transparency), Types, Kalin);
							}
						}
					}
				
			}
		}

		if (Settings::Tab == 5)
		{
			draww = ImGui::GetWindowDrawList();
			pos = ImGui::GetWindowPos();
			draww->AddRectFilled(ImVec2(pos.x + 163, pos.y + 67), ImVec2(pos.x + 385, pos.y + 232), ImColor(0, 11, 22, 255), 5.0f, 15);
			{
				//Panel Name
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 20.f, ImVec2(pos.x + 8 + 163, pos.y + 5 + 67), ImColor(TitleCol), "Prepared Config");
					ImGui::PushStyleColor(ImGuiCol_Text, LineCol);
					ImGui::SetCursorPos(ImVec2(3 + 163, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(4 + 163, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(5 + 163, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(6 + 163, Y + 67));
					ImGui::Text(cizgi);
					ImGui::PopStyleColor();
				}

				//Label Draws
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 163, pos.y + 40 + 67), ImColor(Renk5), "Enable Legit Config");
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 163, pos.y + 72 + 67), ImColor(Renk5), "Enable Standart Config");
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 163, pos.y + 104 + 67), ImColor(Renk5), "Enable Pro Config");
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 8 + 163, pos.y + 136 + 67), ImColor(Renk5), "Enable Rage Config");
				}

				//Check Boxes
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					ImGui::PushStyleVar(ImGuiStyleVar_GrabRounding, 500.0f);
					ImGui::PushStyleColor(ImGuiCol_FrameBgActive, ImVec4(0.10f, 0.09f, 0.12f, 1.00f));

					ImGui::SetCursorPos(ImVec2(182 + 163, 40 + 67));
					if (ImGui::Checkbox("Enable_Legit_Config", &Enable_Legit_Config))
					{
						Enable_Standart_Config = false;
						Enable_Professional_Config = false;
						Enable_Rage_Config = false;
					}

					ImGui::SetCursorPos(ImVec2(182 + 163, 72 + 67));
					if (ImGui::Checkbox("Enable_Standart_Config", &Enable_Standart_Config))
					{
						Enable_Legit_Config = false;
						Enable_Professional_Config = false;
						Enable_Rage_Config = false;
					}

					ImGui::SetCursorPos(ImVec2(182 + 163, 104 + 67));
					if (ImGui::Checkbox("Enable_Professional_Config", &Enable_Professional_Config))
					{
						Enable_Standart_Config = false;
						Enable_Legit_Config = false;
						Enable_Rage_Config = false;
					}

					ImGui::SetCursorPos(ImVec2(182 + 163, 136 + 67));
					if (ImGui::Checkbox("Enable_Rage_Config", &Enable_Rage_Config))
					{
						Enable_Standart_Config = false;
						Enable_Legit_Config = false;
						Enable_Professional_Config = false;
					}

					ImGui::PopStyleColor();
					ImGui::PopStyleVar();
				}
			}

			draww->AddRectFilled(ImVec2(pos.x + 395, pos.y + 67), ImVec2(pos.x + 617, pos.y + 232), ImColor(0, 11, 22, 255), 5.0f, 15);
			{
				//Panel Name
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 20.f, ImVec2(pos.x + 8 + 395, pos.y + 5 + 67), ImColor(TitleCol), "Config Information");
					ImGui::PushStyleColor(ImGuiCol_Text, LineCol);
					ImGui::SetCursorPos(ImVec2(3 + 395, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(4 + 395, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(5 + 395, Y + 67));
					ImGui::Text(cizgi);
					ImGui::SetCursorPos(ImVec2(6 + 395, Y + 67));
					ImGui::Text(cizgi);
					ImGui::PopStyleColor();
				}

				//Label Draw
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					if (Enable_Legit_Config == true)
					{
						draww->AddText(tolstiy, 18.f, ImVec2(pos.x  + 395 + 8, pos.y  + 67 + 40), ImColor(Renk5), "Legit Config");

						draww->AddText(tolstiy, 18.f, ImVec2(pos.x  + 395 + 8, pos.y  + 67 + 62), ImColor(49, 69, 82, 255), "* The legal setting reduces ");

						draww->AddText(tolstiy, 18.f, ImVec2(pos.x  + 395 + 8, pos.y  + 67 + 82), ImColor(49, 69, 82, 255), "your detection to 0%");

						draww->AddText(tolstiy, 18.f, ImVec2(pos.x  + 395 + 8, pos.y  + 67 + 102), ImColor(49, 69, 82, 255), "and allows you to experience");

						draww->AddText(tolstiy, 18.f, ImVec2(pos.x  + 395 + 8, pos.y  + 67 + 122), ImColor(49, 69, 82, 255), "the cheat without being ");

						draww->AddText(tolstiy, 18.f, ImVec2(pos.x  + 395 + 8, pos.y  + 67 + 142), ImColor(49, 69, 82, 255), "kicked out of the game.");
					}

					if (Enable_Standart_Config == true)
					{
						draww->AddText(tolstiy, 18.f, ImVec2(pos.x  + 395 + 8, pos.y  + 67 + 40), ImColor(Renk5), "Standart Config");

						draww->AddText(tolstiy, 18.f, ImVec2(pos.x  + 395 + 8, pos.y  + 67 + 62), ImColor(49, 69, 82, 255), "* The standard configuration");

						draww->AddText(tolstiy, 18.f, ImVec2(pos.x  + 395 + 8, pos.y  + 67 + 82), ImColor(49, 69, 82, 255), "slightly reduces your ");

						draww->AddText(tolstiy, 18.f, ImVec2(pos.x  + 395 + 8, pos.y  + 67 + 102), ImColor(49, 69, 82, 255), "detection and allows you to  ");

						draww->AddText(tolstiy, 18.f, ImVec2(pos.x  + 395 + 8, pos.y  + 67 + 122), ImColor(49, 69, 82, 255), "experience the cheat");

						draww->AddText(tolstiy, 18.f, ImVec2(pos.x  + 395 + 8, pos.y  + 67 + 142), ImColor(49, 69, 82, 255), "in a fun way.");
					}

					if (Enable_Professional_Config == true)
					{
						draww->AddText(tolstiy, 18.f, ImVec2(pos.x  + 395 + 8, pos.y  + 67 + 40), ImColor(Renk5), "Professional Config");

						draww->AddText(tolstiy, 18.f, ImVec2(pos.x  + 395 + 8, pos.y  + 67 + 62), ImColor(49, 69, 82, 255), "* The Professional");

						draww->AddText(tolstiy, 18.f, ImVec2(pos.x  + 395 + 8, pos.y  + 67 + 82), ImColor(49, 69, 82, 255), "configuration does not");

						draww->AddText(tolstiy, 18.f, ImVec2(pos.x  + 395 + 8, pos.y  + 67 + 102), ImColor(49, 69, 82, 255), "reduce your perception");

						draww->AddText(tolstiy, 18.f, ImVec2(pos.x  + 395 + 8, pos.y  + 67 + 122), ImColor(49, 69, 82, 255), "and allows you to fully");

						draww->AddText(tolstiy, 18.f, ImVec2(pos.x  + 395 + 8, pos.y  + 67 + 142), ImColor(49, 69, 82, 255), "experience the cheat.");
					}

					if (Enable_Rage_Config == true)
					{
						draww->AddText(tolstiy, 18.f, ImVec2(pos.x  + 395 + 8, pos.y  + 67 + 40), ImColor(Renk5), "Rage Config");

						draww->AddText(tolstiy, 18.f, ImVec2(pos.x  + 395 + 8, pos.y  + 67 + 62), ImColor(49, 69, 82, 255), "* anger structuring is");

						draww->AddText(tolstiy, 18.f, ImVec2(pos.x  + 395 + 8, pos.y  + 67 + 82), ImColor(49, 69, 82, 255), "dangerous and illegal. Be very");

						draww->AddText(tolstiy, 18.f, ImVec2(pos.x  + 395 + 8, pos.y  + 67 + 102), ImColor(49, 69, 82, 255), "careful when using this ");

						draww->AddText(tolstiy, 18.f, ImVec2(pos.x  + 395 + 8, pos.y  + 67 + 122), ImColor(49, 69, 82, 255), "configuration. The cheat does ");

						draww->AddText(tolstiy, 18.f, ImVec2(pos.x  + 395 + 8, pos.y  + 67 + 142), ImColor(49, 69, 82, 255), "not mask your use in any way.");
					}
				}
			}
		}

		if (Settings::Tab == 6)
		{
			draww = ImGui::GetWindowDrawList();
			pos = ImGui::GetWindowPos();
			draww->AddRectFilled(ImVec2(pos.x + 163, pos.y + 67), ImVec2(pos.x + 617, pos.y + 258), ImColor(0, 11, 22, 255), 5.0f, 15);
			{
				//Panel Name
				draww = ImGui::GetOverlayDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 20.f, ImVec2(pos.x + 163 + 8, pos.y + 67 + 5), ImColor(TitleCol), "AN & BA");

					ImGui::PushStyleColor(ImGuiCol_Text, LineCol);
					ImGui::SetCursorPos(ImVec2(3 + 163, Y + 67));
					ImGui::Text(cizgi2);
					ImGui::SetCursorPos(ImVec2(4 + 163, Y + 67));
					ImGui::Text(cizgi2);
					ImGui::SetCursorPos(ImVec2(5 + 163, Y + 67));
					ImGui::Text(cizgi2);
					ImGui::SetCursorPos(ImVec2(6 + 163, Y + 67));
					ImGui::Text(cizgi2);
					ImGui::PopStyleColor();
				}

				//Label Draw
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 163 + 8, pos.y + 67 + 40), ImColor(Renk5), "Information");

					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 163 + 8, pos.y + 67 + 62), ImColor(49, 69, 82, 255), "* We are an experienced team that has been developing cheats");

					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 163 + 8, pos.y + 67 + 82), ImColor(49, 69, 82, 255), "for 4 years, We are confident in this field. Previously, we ");

					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 163 + 8, pos.y + 67 + 102), ImColor(49, 69, 82, 255), "produced MadValo V1 - V4, MadApex projects and presented ");

					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 163 + 8, pos.y + 67 + 122), ImColor(49, 69, 82, 255), "them to users. Our new project MadValo+ includes many");

					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 163 + 8, pos.y + 67 + 142), ImColor(49, 69, 82, 255), "features. Have fun.");

					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 163 + 8, pos.y + 67 + 165), ImColor(Renk5), "Contact Us");
				}

				//Contact Button
				{
					ImGui::Spacing();
					ImGui::PushStyleColor(ImGuiCol_Text, to_vec4(153, 176, 189, 255));
					ImGui::PushStyleColor(ImGuiCol_Button, to_vec4(8, 8, 13, 255));	
					ImGui::PushStyleColor(ImGuiCol_ButtonActive, to_vec4(8, 8, 13, 255));
					ImGui::PushStyleColor(ImGuiCol_ButtonHovered, to_vec4(8, 8, 13, 254));
					ImGui::SetCursorPos(ImVec2(463 + 49, 67 + 162));
					if (ImGui::ButtonExittn("AN & BA", ImVec2(100, 24))) ShellExecuteA(0, 0, "chrome.exe", "https://discord.gg/CCJ53XDG3V", 0, SW_SHOWMAXIMIZED);
				}
			}

			draww->AddRectFilled(ImVec2(pos.x + 163, pos.y + 268), ImVec2(pos.x + 617, pos.y + 585), ImColor(0, 11, 22, 255), 5.0f, 15);
			{
				//Panel Name
				draww = ImGui::GetOverlayDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 20.f, ImVec2(pos.x + 163 + 8, pos.y + 268 + 5), ImColor(TitleCol), "MadUI");

					ImGui::PushStyleColor(ImGuiCol_Text, LineCol);
					ImGui::SetCursorPos(ImVec2(3 + 163, Y + 268));
					ImGui::Text(cizgi2);
					ImGui::SetCursorPos(ImVec2(4 + 163, Y + 268));
					ImGui::Text(cizgi2);
					ImGui::SetCursorPos(ImVec2(5 + 163, Y + 268));
					ImGui::Text(cizgi2);
					ImGui::SetCursorPos(ImVec2(6 + 163, Y + 268));
					ImGui::Text(cizgi2);
					ImGui::PopStyleColor();
				}

				//Label Draw
				draww = ImGui::GetWindowDrawList();
				pos = ImGui::GetWindowPos();
				{
					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 163 + 8, pos.y + 268 + 40), ImColor(Renk5), "Information");

					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 163 + 8, pos.y + 268 + 62), ImColor(49, 69, 82, 255), "* MadUI is updated regularly. It also always offers the latest ");

					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 163 + 8, pos.y + 268 + 82), ImColor(49, 69, 82, 255), "versions of the specific cheats. MadUI is 100% safe, the loader ");

					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 163 + 8, pos.y + 268 + 102), ImColor(49, 69, 82, 255), "itself does not contain any harmful contents. All cheats on");

					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 163 + 8, pos.y + 268 + 122), ImColor(49, 69, 82, 255), "MadUI are checked by us first to make sure they're safe.");

					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 163 + 8, pos.y + 268 + 142), ImColor(49, 69, 82, 255), "MadUI offers cheats for CS:GO, Valorant and more! We make");

					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 163 + 8, pos.y + 268 + 162), ImColor(49, 69, 82, 255), "sure that all cheats are up-to-date. For a full cheat list, check");

					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 163 + 8, pos.y + 268 + 182), ImColor(49, 69, 82, 255), "our Forums! MadUI is free. We earn money through ads, thanks");

					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 163 + 8, pos.y + 268 + 202), ImColor(49, 69, 82, 255), " to our custom ad approval system. All of the cheats will be ");

					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 163 + 8, pos.y + 268 + 222), ImColor(49, 69, 82, 255), "avaible for free! However, we do offer account upgrades, ");

					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 163 + 8, pos.y + 268 + 242), ImColor(49, 69, 82, 255), "which means you can get ad-free access to MadUI. We have a ");

					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 163 + 8, pos.y + 268 + 262), ImColor(49, 69, 82, 255), "forum to discuss MadUI. You can find configs, tutorials! ");

					draww->AddText(tolstiy, 18.f, ImVec2(pos.x + 163 + 8, pos.y + 265 + 288 + 6), ImColor(Renk5), "Contact Us");
				}

				//Contact Button
				{
					ImGui::Spacing();
					ImGui::PushStyleColor(ImGuiCol_Text, to_vec4(153, 176, 189, 255));
					ImGui::PushStyleColor(ImGuiCol_Button, to_vec4(8, 8, 13, 255));
					ImGui::PushStyleColor(ImGuiCol_ButtonActive, to_vec4(8, 8, 13, 255));
					ImGui::PushStyleColor(ImGuiCol_ButtonHovered, to_vec4(8, 8, 13, 254));
					ImGui::SetCursorPos(ImVec2(463 + 49, 265 + 291));
					if (ImGui::ButtonExittn("MadUI", ImVec2(100, 24))) ShellExecuteA(0, 0, "chrome.exe", "https://madui.app/", 0, SW_SHOWMAXIMIZED);
				}
			}

		}
	}
	else SetLayeredWindowAttributes(MyWnd, 0, 255, LWA_ALPHA);
}

