#ifndef SITH_SITHSOUND_H
#define SITH_SITHSOUND_H
#include <j3dcore/j3d.h>
#include <rdroid/types.h>
#include <sith/types.h>
#include <sith/Main/sithMain.h>
#include <sith/RTI/addresses.h>
#include <std/types.h>

J3D_EXTERN_C_START

int J3DAPI sithSound_InitializeSound(tHostServices* pHS);
void sithSound_UninitializeSound(void);

int J3DAPI sithSound_Startup(int bSound3D);
int sithSound_StartupSound(void);

void sithSound_Shutdown(void);
void sithSound_ShutdownSound(void);

int J3DAPI sithSound_NDYReadSoundSection(SithWorld* pWorld, int bSkip);
int J3DAPI sithSound_CNDWriteSoundSection(tFileHandle fh, SithWorld* pWorld);
int J3DAPI sithSound_CNDReadSoundSection(tFileHandle fh, SithWorld* pWorld);
void J3DAPI sithSound_FreeWorldSounds(SithWorld* pWorld);
tSoundHandle J3DAPI sithSound_Load(SithWorld* pWorld, const char* filename);
void J3DAPI sithSound_SetSkipRestoringSounds(int bSkip);

// Helper hooking functions
void sithSound_InstallHooks(void);
void sithSound_ResetGlobals(void);

J3D_EXTERN_C_END
#endif // SITH_SITHSOUND_H
