
#pragma warning (disable : 4100)



#include "guidedhacking.h"
#include "messages.h"

NTSTATUS DriverEntry(PDRIVER_OBJECT pDriverObject, PUNICODE_STRING pRegistryPath)
{
	pDriverObject->DriverUnload = UnloadDriver;
	DbgPrintEx(0, 0, "Message!");
	DebugMessage("Welcome to the first GuidiedHacking Driver!");
	return STATUS_SUCCESS;
}

NTSTATUS UnloadDriver(PDRIVER_OBJECT pDriverObject)
{
	DebugMessage("Hello");

	return STATUS_SUCCESS;
}