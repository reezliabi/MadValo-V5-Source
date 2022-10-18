
int AimHackKey;
int AimHackKeyStatus;

static bool Items_ArrayGetter(void* data, int idx, const char** out_text)
{
	const char* const* items = (const char* const*)data;
	if (out_text)
		*out_text = items[idx];
	return true;
}
static const char* keyNames[] = {
	"",
	"    Left Mouse",
	"   Right Mouse",
	"       Cancel",
	"   Middle Mouse",
	"      Mouse 5",
	"      Mouse 4",
	"",
	"     Backspace",
	"          Tab",
	"",
	"",
	"         Clear",
	"        Enter",
	"",
	"",
	"         Shift",
	"       Control",
	"           Alt",
	"        Pause",
	"         Caps",
	"",
	"",
	"",
	"",
	"",
	"",
	"        Escape",
	"",
	"",
	"",
	"",
	"         Space",
	"      Page Up",
	"    Page Down",
	"           End",
	"         Home",
	"          Left",
	"           Up",
	"         Right",
	"         Down",
	"             ",
	"             ",
	"             ",
	"         Print",
	"        Insert",
	"        Delete",
	"             ",
	"             0",
	"             1",
	"             2",
	"             3",
	"             4",
	"             5",
	"             6",
	"             7",
	"             8",
	"             9",
	"             ",
	"             ",
	"             ",
	"             ",
	"             ",
	"             ",
	"             ",
	"             A",
	"             B",
	"             C",
	"             D",
	"             E",
	"             F",
	"             G",
	"             H",
	"             I",
	"             J",
	"             K",
	"             L",
	"             M",
	"             N",
	"             O",
	"             P",
	"             Q",
	"             R",
	"             S",
	"             T",
	"             U",
	"             V",
	"             W",
	"             X",
	"             Y",
	"             Z",
	"",
	"",
	"",
	"",
	"",
	"       Numpad 0",
	"       Numpad 1",
	"       Numpad 2",
	"       Numpad 3",
	"       Numpad 4",
	"       Numpad 5",
	"       Numpad 6",
	"       Numpad 7",
	"       Numpad 8",
	"       Numpad 9",
	"       Multiply",
	"            Add",
	"",
	"         Subtract",
	"          Decimal",
	"           Divide",
	"            F1",
	"            F2",
	"            F3",
	"            F4",
	"            F5",
	"            F6",
	"            F7",
	"            F8",
	"            F9",
	"            F10",
	"            F11",
	"            F12",
};

void AimHackChangeKey(void* blank)
{
	AimHackKeyStatus = 1;
	while (true)
	{
		for (int i = 0; i < 0x87; i++)
		{
			if (GetKeyState(i) & 0x8000)
			{
				AimHackKey = i;
				AimHackKeyStatus = 0;
				return;
			}
		}
	}
}
void AimHackKeyButton(int AimBotKey, void* changekey, int status, ImVec2 a)
{

	const char* preview_value = NULL;
	if (AimHackKey >= 0 && AimHackKey < IM_ARRAYSIZE(keyNames))
		Items_ArrayGetter(keyNames, AimHackKey, &preview_value);

	std::string aimkeys;
	if (preview_value == NULL)
		aimkeys = skCrypt("     Select Key");
	else
		aimkeys = preview_value;
	if (status == 1)
	{
		aimkeys = skCrypt("     Press key");
	}
	if (ImGui::Button(aimkeys.c_str(), a))
	{
		if (status == 0)
		{

			CreateThread(0, 0, (LPTHREAD_START_ROUTINE)changekey, nullptr, 0, nullptr);
		}
	}
}
