// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "stdafx.h"

// "#pragma comment(linker, "导致程序在DEBUG下编译错误
// https://www.v2ex.com/t/366594
#ifdef _DEBUG
#pragma comment(lib, "msvcrtd.lib")
#pragma comment(lib, "vcruntimed.lib")
#pragma comment(lib, "ucrtd.lib")
#endif
#pragma comment(linker, "/ENTRY:DllMain")

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

