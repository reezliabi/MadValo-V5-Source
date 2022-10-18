#pragma once
#include "struct.h"
#include "skCrypt.h"
uintptr_t g_pid;
uintptr_t g_base;
static inline char* memdup(const char* s, size_t n)
{
	char* t = (char*)malloc(n);
	memcpy(t, s, n);
	return t;
}
#define _memdup(object) memdup(object, sizeof(object))
namespace settings{
	bool show_menu = false;
	bool esp_enabled = true;
	bool bone_esp = true; static float bone_color[4] = {255, 255, 255, 255};
	bool headcircle = true; static float headcircle_color[4] = { 255, 255, 255, 255 };
	bool box_esp = true; static float box_color[4] = { 255, 255, 255, 255 };
	bool snapline = true; static float snapline_color[4] = { 255, 255, 255, 255 };
	bool distance = true; static float distance_color[4] = { 255.0f, 255.0f, 255.0f, 255.0f };
	bool healthbar = true;
	bool silentaim = true;
	bool glow = true;
	int box_type, line_type;
	const char* box[] = { skCrypt("Corner Box"), skCrypt("Normal Box"), skCrypt("3D Box")};
	const char* line[] = { skCrypt("Middle Down"), skCrypt("Middle Top"), skCrypt("Crosshair")};
	int aimkey = 6;
	bool aimbot = true;
	bool visiblecheck = true;
	bool teamcheck;
	bool rcs;
	bool autoshoot = false;
	float fov = 60;
	float smooth = 2;
	int hitbox;
	const char* hitbox2[] = { skCrypt("Head"), skCrypt("Neck"), skCrypt("Body")};
}

namespace Settings {
	static int Tab = 1;
	static int malyusuf = 1;
	static int Renk2 = 1;
	static int Renk3 = 1;
	static int Renk4 = 1;
}