#include "stdConsole.h"
#include <j3dcore/j3dhook.h>
#include <std/RTI/symbols.h>

static HANDLE stdConsole_hInput     = 0;
static HANDLE stdConsole_hOutput    = 0;
static int stdConsole_textAttribute = 0;
static WORD stdConsole_wAttributes  = 0;

static int stdConsole_dword_5DCCCC  = 0;
static int stdConsole_dword_5DCCD8  = 0;
static int stdConsole_dword_5DCCDC  = 0;

void stdConsole_InstallHooks(void)
{
    J3D_HOOKFUNC(stdConsole_Startup);
    J3D_HOOKFUNC(stdConsole_Shutdown);
    J3D_HOOKFUNC(stdConsole_SetAttributes);
    J3D_HOOKFUNC(stdConsole_SetConsoleTextAttribute);
    J3D_HOOKFUNC(stdConsole_InitOutputConsole);
    J3D_HOOKFUNC(stdConsole_WriteConsole);
}

void stdConsole_ResetGlobals(void)
{}

int J3DAPI stdConsole_Startup(const char* pTitleText, int attributes, int bShowMinimized)
{
    AllocConsole();
    SetConsoleTitle(pTitleText);

    stdConsole_hInput  = GetStdHandle(STD_INPUT_HANDLE);
    stdConsole_hOutput = GetStdHandle(STD_OUTPUT_HANDLE);

    stdConsole_dword_5DCCD8 = 8;
    stdConsole_dword_5DCCDC = 1;
    stdConsole_dword_5DCCCC = 0;

    stdConsole_SetAttributes(attributes);
    stdConsole_InitOutputConsole();

    HWND hwnd = FindWindow(0, pTitleText);
    if ( hwnd )
    {
        RECT wRect;
        GetWindowRect(hwnd, &wRect);

        RECT sRect;
        HWND hwndScreen = GetDesktopWindow();
        GetWindowRect(hwndScreen, &sRect);

        SetWindowPos(hwnd, NULL, sRect.right - wRect.right + wRect.left - 10, sRect.bottom - wRect.bottom + wRect.top - 25, 0, 0, SWP_NOACTIVATE | SWP_NOZORDER | SWP_NOSIZE);
        if ( bShowMinimized ) {
            ShowWindow(hwnd, SW_MINIMIZE);
        }
    }

    return 1;
}

void stdConsole_Shutdown(void)
{
    FreeConsole();
}

int J3DAPI stdConsole_SetAttributes(WORD wAttributes)
{
    stdConsole_wAttributes = wAttributes;
    return 1;
}

int J3DAPI stdConsole_SetConsoleTextAttribute(WORD wAttributes)
{
    stdConsole_textAttribute = wAttributes;
    return SetConsoleTextAttribute(stdConsole_hOutput, wAttributes);
}

int stdConsole_InitOutputConsole(void)
{
    stdConsole_SetConsoleTextAttribute(stdConsole_wAttributes & 0xF0);

    COORD startCoords  = { 0, 0 };  // Start at the top-left corner
    DWORD dwNumWritten = 0;
    FillConsoleOutputCharacter(stdConsole_hOutput, ' ', 2000u, startCoords, &dwNumWritten);
    return stdConsole_SetConsoleTextAttribute(stdConsole_wAttributes);
}

int J3DAPI stdConsole_WriteConsole(const char* pText, uint32_t textAttribute)
{
    if ( (uint16_t)stdConsole_textAttribute != (uint16_t)textAttribute )
    {
        stdConsole_SetConsoleTextAttribute((uint16_t)textAttribute);
    }

    DWORD nWritten = 0;
    return WriteConsole(stdConsole_hOutput, pText, strlen(pText), &nWritten, NULL);
}
