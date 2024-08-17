#ifndef STD_STDWIN95_H
#define STD_STDWIN95_H
#include <j3dcore/j3d.h>
#include <std/types.h>
#include <std/RTI/addresses.h>

J3D_EXTERN_C_START

void J3DAPI stdWin95_SetWindow(HWND hwnd);
HWND J3DAPI stdWin95_GetWindow();
void J3DAPI stdWin95_SetInstance(HINSTANCE hinstance);
HINSTANCE stdWin95_GetInstance(void);
void J3DAPI stdWin95_SetGuid(const GUID* pGuid);

// Helper hooking functions
void stdWin95_InstallHooks(void);
void stdWin95_ResetGlobals(void);

J3D_EXTERN_C_END
#endif // STD_STDWIN95_H
