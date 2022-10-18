#pragma once
#include <cstdint>
#include <stdio.h>
#include <string>
#include <random>
#include "drv.h"
#include "skCrypt.h"
namespace fptr_data
{
	constexpr uint64_t static_identifier = 0xBADC0DE;


	enum class kernel_opr : uint32_t
	{
		read = 1,
		write,
		get_process_module,
		get_process_base,
		get_guarded_base,
		unhook_driver,


		alloc,
		free,
		protect,
		move_mouse,
		read_virtual
	};


	enum class kernel_err : uint16_t
	{
		invalid_process = 2,
		check_fail,
		no_operation,
		invalid_data,

		no_error = 0,
		unset_err = 1
	};

	struct kernel_com
	{
		bool success;
		kernel_err error;
		int request_key;

		uint32_t target_pid;
		uint32_t user_pid;

		uintptr_t address;
		uintptr_t buffer;

		union
		{
			size_t size;
			const char* name;
		};

		size_t transfer;
		long x;
		long y;
		unsigned short button_flags;
	};
}
namespace kernel
{
	class driver
	{
	public:
		driver();
		~driver();

	public:
		uint32_t pid;
		uintptr_t guarded;
		void attach(uint32_t pid) { this->pid = pid; }
		bool init();

		bool is_guarded(uintptr_t pointer)
		{
			constexpr uintptr_t filter = 0xFFFFFFF000000000;
			uintptr_t result = pointer & filter;
			return result == 0x8000000000 || result == 0x10000000000;
		}
		uint64_t make_guarded_pointer(uint64_t address)
		{
			if (is_guarded(address)) {
				return guarded + (address & 0xFFFFFF);
			}
			else {
				return address;
			}
		}
		void unload();

		uintptr_t get_process_module(const char* name);
		uintptr_t get_process_base(uint32_t _pid = 0);
		uintptr_t get_guarded_base();
		bool read_buffer(uintptr_t addr, uint8_t* buffer, size_t size, size_t* transfer = nullptr);
		bool write_buffer(uintptr_t addr, uint8_t* buffer, size_t size, size_t* transfer = nullptr);



		uintptr_t move(long x, long y, unsigned short button);
		uintptr_t alloc(uintptr_t addr, size_t size, uint32_t alloc_flags, uint32_t protection);
		void free(uintptr_t addr);
		void protect(uintptr_t addr, size_t size, uint32_t protection);
	};
}
inline kernel::driver driver;
template<typename Value_T>
Value_T read(uintptr_t addr)
{
	Value_T val;
	if (!driver.read_buffer(addr, (uint8_t*)&val, sizeof(Value_T)))
		memset((void*)&val, 0, sizeof(val));
	return val;
}
template<typename Value_T>
Value_T read_guarded(uintptr_t addr)
{
	Value_T val;

	if (!driver.read_buffer(addr, (uint8_t*)&val, sizeof(Value_T)))
		memset((void*)&val, 0, sizeof(val));

	if (driver.is_guarded(val))
	{
		val = driver.make_guarded_pointer(val);
	}
	return val;
}
template<typename T>
void read_array(uint64_t address, T* array, size_t len)
{
	driver.read_buffer(address, (uint8_t*)&array, sizeof(T) * len);
}
template<typename Value_T>
void write(uintptr_t addr, Value_T val) { driver.write_buffer(addr, (uint8_t*)&val, sizeof(Value_T)); }
#include "kdmapper/kdmapper.hpp"
inline HANDLE iqvw64e_device_handle;

inline LONG WINAPI SimplestCrashHandler(EXCEPTION_POINTERS* ExceptionInfo)
{
	if (ExceptionInfo && ExceptionInfo->ExceptionRecord)
		Log(L"[!!] Crash at addr 0x" << ExceptionInfo->ExceptionRecord->ExceptionAddress << L" by 0x" << std::hex << ExceptionInfo->ExceptionRecord->ExceptionCode << std::endl);
	else
		Log(L"[!!] Crash" << std::endl);

	if (iqvw64e_device_handle)
		intel_driver::Unload(iqvw64e_device_handle);

	return EXCEPTION_EXECUTE_HANDLER;
}
inline bool callbackExample(ULONG64* param1, ULONG64* param2, ULONG64 allocationPtr, ULONG64 allocationSize, ULONG64 mdlptr) {
	UNREFERENCED_PARAMETER(param1);
	UNREFERENCED_PARAMETER(param2);
	UNREFERENCED_PARAMETER(allocationPtr);
	UNREFERENCED_PARAMETER(allocationSize);
	UNREFERENCED_PARAMETER(mdlptr);
	//Log("[+] Callback example called" << std::endl);
	return true;
}
inline bool LoadDriver()//spfr
{
	iqvw64e_device_handle = intel_driver::Load();

	NTSTATUS exitCode = 0;
	//if (!kdmapper::MapDriver(iqvw64e_device_handle, spfr.data(), 0, 0, false, true, false, false, callbackExample, &exitCode)) {
	//	//Log(L"[-] Failed to map " << "r7flexultragoodselfdriver" << std::endl);
	//	//intel_driver::Unload(iqvw64e_device_handle);
	//}
	if (!kdmapper::MapDriver(iqvw64e_device_handle, raw_image.data(), 0, 0, false, true, false, false, callbackExample, &exitCode)) {
		//Log(L"[-] Failed to map " << "r7flexultragoodselfdriver" << std::endl);
		intel_driver::Unload(iqvw64e_device_handle);
	}
	

	if (!intel_driver::Unload(iqvw64e_device_handle)) {
		//Log(L"[-] Warning failed to fully unload vulnerable driver " << std::endl);
	}
	//Log(L"[+] success" << std::endl);
	return true;
}


inline void init()
{
	bool a1asdsa = true;
	bool a2asdasd = true;
r7:
	if (!driver.init())
	{
	
		if (FindWindowA(skCrypt("UnrealWindow"), NULL))
		{
			if (a1asdsa)
			{
				system(skCrypt("cls"));
				printf(skCrypt("[valrose] close game...\n")); a1asdsa = false;
			}
			
			Sleep(250);
			goto r7;
		}
		if (LoadDriver())
		{
			if (a2asdasd)
			{
				system(skCrypt("cls"));
				printf(skCrypt("[valrose] restart again\n")); a2asdasd = false;
			}
			
			Sleep(250);
			goto r7;
			//exit(1);
		}
	}

}