// THIS FILE WAS CREATED BY BLUEFIRE1337 

#include <stdio.h>
#include "mhyprot.hpp"
#include "readbase.hpp"
#include "baseadress.h"

uint64_t process_id;
uint64_t systembase = 0;
uint64_t EPImageFileName = 0;
uint64_t EPUniqueProcessId = 0;
uint64_t EPSectionBaseAddress = 0;
uint64_t EPActiveProcessLinks = 0;

bool ReadVirtual(uint64_t dirbase, uint64_t address, uint8_t* buffer, int size)
{
	auto paddress = address;
	return mhyprot::driver_impl::read_kernel_memory(paddress, buffer, size);
}

uint64_t SFGetEProcess(int pid)
{
	auto handle_info = QueryInfo<SYSTEM_HANDLE_INFORMATION>(SystemHandleInformation);
	if(!handle_info.get())
		return 0;

	for(size_t i = 0; i < handle_info->HandleCount; i++)
		if(pid == handle_info->Handles[i].ProcessId && 7 == handle_info->Handles[i].ObjectTypeNumber) {
			//logger::log2("[+] Got Handle is 0x%llX\n", reinterpret_cast<size_t>(handle_info->Handles[i].Object));
			return reinterpret_cast<size_t>(handle_info->Handles[i].Object);
		}
	return 0;
}

uint64_t GetEProcess(int pid)
{
	_LIST_ENTRY ActiveProcessLinks;

	ReadVirtual(systembase, SFGetEProcess(4) + EPActiveProcessLinks, (uint8_t*)&ActiveProcessLinks, sizeof(ActiveProcessLinks));

	while(true)
	{
		uint64_t next_pid = 0;
		char buffer[0xFFFF];
		uint64_t next_link = (uint64_t)(ActiveProcessLinks.Flink);
		uint64_t next = next_link - EPActiveProcessLinks;
		ReadVirtual(systembase, next + EPUniqueProcessId, (uint8_t*)&next_pid, sizeof(next_pid));
		ReadVirtual(systembase, next + EPImageFileName, (uint8_t*)&buffer, sizeof(buffer));
		ReadVirtual(systembase, next + EPActiveProcessLinks, (uint8_t*)&ActiveProcessLinks, sizeof(ActiveProcessLinks));
		if(GetAsyncKeyState(VK_MENU)) {
			mhyprot::unload();
		}

		if(next_pid == pid) {
			return next;
		}
		if(next_pid == 4 || next_pid == 0)
			break;
	}
	return 0;
}

uint64_t GetKernelModuleAddress(const std::string& module_name)
{
	void* buffer = nullptr;
	DWORD buffer_size = 0;

	NTSTATUS status = NtQuerySystemInformation(static_cast<SYSTEM_INFORMATION_CLASS>(SystemModuleInformation), buffer, buffer_size, &buffer_size);

	while(status == STATUS_INFO_LENGTH_MISMATCH)
	{
		VirtualFree(buffer, 0, MEM_RELEASE);

		buffer = VirtualAlloc(nullptr, buffer_size, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
		status = NtQuerySystemInformation(static_cast<SYSTEM_INFORMATION_CLASS>(SystemModuleInformation), buffer, buffer_size, &buffer_size);
	}

	if(!NT_SUCCESS(status))
	{
		VirtualFree(buffer, 0, MEM_RELEASE);
		return 0;
	}

	const auto modules = static_cast<PRTL_PROCESS_MODULES>(buffer);

	for(auto i = 0u; i < modules->NumberOfModules; ++i)
	{
		const std::string current_module_name = std::string(reinterpret_cast<char*>(modules->Modules[i].FullPathName) + modules->Modules[i].OffsetToFileName);

		if(!_stricmp(current_module_name.c_str(), module_name.c_str()))
		{
			const uint64_t result = reinterpret_cast<uint64_t>(modules->Modules[i].ImageBase);

			VirtualFree(buffer, 0, MEM_RELEASE);
			return result;
		}
	}

	VirtualFree(buffer, 0, MEM_RELEASE);
	return 0;
}

void FixOffsets() {

	using namespace std;

	NTSTATUS(WINAPI * RtlGetVersion)(LPOSVERSIONINFOEXW);
	OSVERSIONINFOEXW osInfo;

	*(FARPROC*)&RtlGetVersion = GetProcAddress(GetModuleHandleA("ntdll"),
		"RtlGetVersion");

	DWORD build = 0;

	if(NULL != RtlGetVersion)
	{
		osInfo.dwOSVersionInfoSize = sizeof(osInfo);
		RtlGetVersion(&osInfo);
		build = osInfo.dwBuildNumber;
	}

	//https://www.vergiliusproject.com/kernels/x64/Windows%2010%20|%202016/2009%2020H2%20(October%202020%20Update)/_EPROCESS
	switch(build) // some offsets might be wrong, check it yourself it if does not work
	{
	case 22000: //WIN11
		EPImageFileName = 0x5a8;
		EPUniqueProcessId = 0x440;
		EPSectionBaseAddress = 0x520;
		EPActiveProcessLinks = 0x448;
		break;
	case 19044: //WIN10_21H2
		EPImageFileName = 0x5a8;
		EPUniqueProcessId = 0x440;
		EPSectionBaseAddress = 0x520;
		EPActiveProcessLinks = 0x448;
		break;
	case 19043: //WIN10_21H1
		EPImageFileName = 0x5a8;
		EPUniqueProcessId = 0x440;
		EPSectionBaseAddress = 0x520;
		EPActiveProcessLinks = 0x448;
		break;
	case 19042: //WIN10_20H2
		EPImageFileName = 0x5a8;
		EPUniqueProcessId = 0x440;
		EPSectionBaseAddress = 0x520;
		EPActiveProcessLinks = 0x448;
		break;
	case 19041: //WIN10_20H1
		EPImageFileName = 0x5a8;
		EPUniqueProcessId = 0x440;
		EPSectionBaseAddress = 0x520;
		EPActiveProcessLinks = 0x448;
		break;
	case 18363: //WIN10_19H2
		EPImageFileName = 0x450;
		EPUniqueProcessId = 0x2e8;
		EPSectionBaseAddress = 0x3c8;
		EPActiveProcessLinks = 0x2f0;
		break;
	case 18362: //WIN10_19H1
		EPImageFileName = 0x450;
		EPUniqueProcessId = 0x2e8;
		EPSectionBaseAddress = 0x3c8;
		EPActiveProcessLinks = 0x2f0;
		break;
	case 17763: //WIN10_RS5
		EPImageFileName = 0x450;
		EPUniqueProcessId = 0x2e0;
		EPSectionBaseAddress = 0x3c0;
		EPActiveProcessLinks = 0x2e8;
		break;
	case 17134: //WIN10_RS4
		EPImageFileName = 0x450;
		EPUniqueProcessId = 0x2e0;
		EPSectionBaseAddress = 0x3c0;
		EPActiveProcessLinks = 0x2e8;
		break;
	case 16299: //WIN10_RS3
		EPImageFileName = 0x450;
		EPUniqueProcessId = 0x2e0;
		EPSectionBaseAddress = 0x3c0;
		EPActiveProcessLinks = 0x2e8;
		break;
	case 15063: //WIN10_RS2
		EPImageFileName = 0x450;
		EPUniqueProcessId = 0x2e0;
		EPSectionBaseAddress = 0x3c0;
		EPActiveProcessLinks = 0x2e8;
		break;
	case 14393: //WIN10_RS1
		EPImageFileName = 0x450;
		EPUniqueProcessId = 0x2e8;
		EPSectionBaseAddress = 0x3c0;
		EPActiveProcessLinks = 0x2f0;
		break;
	case 10586: //WIN10_TH2
		EPImageFileName = 0x450;
		EPUniqueProcessId = 0x2e8;
		EPSectionBaseAddress = 0x3c0;
		EPActiveProcessLinks = 0x2f0;
		break;
	default:
		printf("[!] No Support for %d,\n check https://www.vergiliusproject.com/kernels/x64/Windows%2011/Insider%20Preview%20(Jun%202021)/_EPROCESS to update the code\n", build);
		exit(0);
		break;
	}
	printf("[+] Found offsets for %d!\n", build);
}

uint64_t GetProcessId() {
	return process_id;
}

uint64_t GetProcessBase(int pid) {
	FixOffsets();

	if(systembase == 0) {
		systembase = GetKernelModuleAddress("ntoskrnl.exe");
	}
	uint64_t base = 0;
	logger::log2(skCrypt("[+] Got System Base is 0x%llX\n"), systembase);
	ReadVirtual(systembase, GetEProcess(pid) + EPSectionBaseAddress, (uint8_t*)&base, sizeof(base));
	logger::log2(skCrypt("[+] Got Process Base is 0x%llX\n"), base);
	process_id = pid;
	return base;
}

uint64_t GetProcessId(const char* process_name) {
	UINT pid = 0;
	HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	PROCESSENTRY32 process;
	ZeroMemory(&process, sizeof(process));
	process.dwSize = sizeof(process);
	if(Process32First(snapshot, &process))
	{
		do
		{
			if(std::strcmp(process.szExeFile, process_name) == 0)
			{
				//printf("PID::: %d : [%s] , %s\n\n", process.th32ProcessID, process.szExeFile, process_name);
				pid = process.th32ProcessID;
				break;
			}
		} while(Process32Next(snapshot, &process));
	}
	CloseHandle(snapshot);
	return pid;
}

bool read_raw(int pid, uint64_t address, void* buffer, size_t size) {
	return mhyprot::driver_impl::read_user_memory(pid, address, buffer, size);
}

bool write_raw(int pid, uint64_t address, void* buffer, size_t size) {
	return mhyprot::driver_impl::write_user_memory(pid, address, buffer, size);
}

bool IsValid(uint64_t adress) {
	if(adress <= 0x400000 || adress == 0xCCCCCCCCCCCCCCCC || reinterpret_cast<void*>(adress) == nullptr || adress > 0x7FFFFFFFFFFFFFFF) {
		return false;
	}

	return true;
}