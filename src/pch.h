#pragma once
#ifndef PCH_H
#define PCH_H

#include <iostream>
#include <Windows.h>
#include "../d3dx11/d3dx11.h"
#include "../libmem++/libmem.hpp"
#include "../imgui/imgui.h"
#include "../imgui/imgui_impl_win32.h"
#include "../imgui/imgui_impl_dx11.h"

int Run(DWORD processID);
MODULEENTRY32 GetModule(DWORD procId, const wchar_t* str);

#endif