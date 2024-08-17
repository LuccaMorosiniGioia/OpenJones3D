#ifndef SITH_SITHFX_H
#define SITH_SITHFX_H
#include <j3dcore/j3d.h>
#include <rdroid/types.h>
#include <sith/types.h>
#include <sith/Main/sithMain.h>
#include <sith/RTI/addresses.h>
#include <std/types.h>

J3D_EXTERN_C_START

#define sithFX_g_lastChalkMarkNum J3D_DECL_FAR_VAR(sithFX_g_lastChalkMarkNum, int)
// extern int sithFX_g_lastChalkMarkNum ;

#define sithFX_g_aChalkMarks J3D_DECL_FAR_ARRAYVAR(sithFX_g_aChalkMarks, SithThing*(*)[10])
// extern SithThing *sithFX_g_aChalkMarks[10];

void sithFX_Reset(void);
void sithFX_ClearChalkMarks(void);
void J3DAPI sithFX_DestroyFairyDustDeluxe(SithThing* pThing);
void J3DAPI sithFX_CreateFairyDust(rdVector3* pos, SithSector* pSector);
int J3DAPI sithFX_SetFairyDustSize(rdParticle* pParticle, int sizeFactor);
void J3DAPI sithFX_UpdateFairyDustUserBlock(SithThing* pThing);
void J3DAPI sithFX_CreateFairyDustDelux(SithThing* pThing, rdVector3* pPos);
int J3DAPI sithFX_CreateFairyDustDeluxDusts(SithThing* pThing, SithFairyDustUserBlock* pUserBlock);
void J3DAPI sithFX_CreateBubble(SithThing* pThing);
void J3DAPI sithFX_CreateWaterRipple(SithThing* pThing);
void J3DAPI sithFX_CreateRaftRipple(SithThing* pThing, int bCreateSplash);
void J3DAPI sithFX_CreateRaftWake(SithThing* pThing);
void J3DAPI sithFX_CreatePaddleSplash(SithThing* pThing, rdVector3* pos);
void J3DAPI sithFX_CreateRowWaterFx(SithThing* pThing, float secTime);
void J3DAPI sithFX_CreateRipple(SithThing* pThing, float size);
SithThing* J3DAPI sithFX_CreateMineCarSparks(SithThing* pThing, rdVector3* pSparkPos);
void J3DAPI sithFX_CreateChalkMark(rdVector3* pPos, SithSurface* pAttSurf, SithSector* pSector);
SithThing* J3DAPI sithFX_CreateThingOnSurface(SithThing* pTemplate, rdVector3* pPos, SithSurface* pAttSurf, SithSector* pSector);
void J3DAPI sithFX_UpdatePolyline(SithThing* pThing);
void J3DAPI sithFX_ResetPolylineTexVertOffset(SithThing* pThing);
SithThing* J3DAPI sithFX_CreateLaserThing(const SithThing* pSourceThing, const rdVector3* vecOffset, const rdVector3* vecEnd, float baseRadius, float tipRadius, float duration);
SithThing* J3DAPI sithFX_CreateLightningThing(const SithThing* pSourceThing, const rdVector3* offset, const rdVector3* endPos, float baseRadius, float tipRadius, float duration);
// Crates polyline from pStartThing to pEndThing or endPos if pEndThing is null
SithThing* J3DAPI sithFX_CreatePolylineThing(const SithThing* pSourceThing, SithThing* pEndThing, const rdVector3* endPos, rdMaterial* pMaterial, float baseRadius, float tipRadius, float duration);

// Helper hooking functions
void sithFX_InstallHooks(void);
void sithFX_ResetGlobals(void);

J3D_EXTERN_C_END
#endif // SITH_SITHFX_H
