#pragma once

#ifndef _PICALC_H_
#define _PICALC_H_

#include <tchar.h>
#include <windows.h>
#include <commctrl.h>

#include "resource.h"

#define MAX_LOADSTRING 100

static FILE* fDummyFile;

const CHAR g_szClassName[] = "myWindowClass";
const CHAR g_szChildClassName[] = "myMDIChildWindowClass";

HWND g_hMDIClient = NULL;
HWND g_hMainWindow = NULL;

#endif  // _PICALC_H_
