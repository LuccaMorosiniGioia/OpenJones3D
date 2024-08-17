#ifndef SITH_SITHPLAYERCONTROLS_H
#define SITH_SITHPLAYERCONTROLS_H
#include <j3dcore/j3d.h>
#include <rdroid/types.h>
#include <sith/types.h>
#include <sith/Main/sithMain.h>
#include <sith/RTI/addresses.h>
#include <std/types.h>

J3D_EXTERN_C_START

#define sithPlayerControls_g_bCutsceneMode J3D_DECL_FAR_VAR(sithPlayerControls_g_bCutsceneMode, int)
// extern int sithPlayerControls_g_bCutsceneMode;

void J3DAPI sithPlayerControls_PuppetCallback(SithThing* pThing, int track, rdKeyMarkerType markerType);
int J3DAPI sithPlayerControls_Process(SithThing* pPlayerThing, float secDeltaTime);
int J3DAPI sithPlayerControls_ProcessPlayerDebugControls(SithThing* pThing);
void J3DAPI sithPlayerControls_ProcessLookControls(SithThing* pThing, float a2);
void J3DAPI sithPlayerControls_ProcessGeneralMove(SithThing* pThing, float secDeltaTime);
void J3DAPI sithPlayerControls_ProcessClimbMove(SithThing* pThing);
void J3DAPI sithPlayerControls_ProcessJewelFlyMove(SithThing* pThing);
void J3DAPI sithPlayerControls_ProcessFlyAndUnderwaterMove(SithThing* pThing);
void J3DAPI sithPlayerControls_ProcessGeneralControls(SithThing* pThing);
int J3DAPI sithPlayerControls_ProcessEditorDebugControls(SithThing* pThing, float secDeltaTime);
int J3DAPI sithPlayerControls_ProcessDeadPlayer(SithThing* pThing, float secDeltaTime);
void J3DAPI sithPlayerControls_ProcessJumpForwardMove(SithThing* pThing);
void J3DAPI sithPlayerControls_ProcessSwimMove(SithThing* pThing);
void J3DAPI sithPlayerControls_ProcessHangMove(SithThing* pThing);
void J3DAPI sithPlayerControls_ProcessWeaponAim(SithThing* pThing, float secDeltaTime);
int J3DAPI sithPlayerControls_CanAimAtPos(SithThing* pThing, const rdVector3* pStartPost, const rdVector3* pAimPos, float cos1, float cos2, float cos3, float maxDist);
int J3DAPI sithPlayerControls_GetPushPullMoveNorm(rdVector3* moveNorm, const rdVector3* pLVect, float angle);
int J3DAPI sithPlayerControls_CheckWaterLedge(SithThing* pThing);
int J3DAPI sithPlayerControls_SearchForCollisions(SithThing* pThing, rdVector3* moveNorm, SithSurface** ppHitSurf, SithThing** ppHitThing, rdModel3** ppHitModel, rdFace** ppHitFace, rdModel3Mesh** ppHitMesh, int someType);
SithSurface* J3DAPI sithPlayerControls_SearchForClimbSurface(SithThing* pThing, const rdVector3* moveNorm, int climbDir, int* pbHitNonClimbSurface);
int J3DAPI sithPlayerControls_TryBoardVehicle(SithThing* pThing, int bBoard);
void J3DAPI sithPlayerControls_ExitVehicle(SithThing* pThing);
void J3DAPI sithPlayerControls_RotateAimJoints(SithThing* pThing, float pitch, float yaw);
void J3DAPI sithPlayerControls_CenterActorOrientation(SithThing* pThing);
SithThing* sithPlayerControls_GetTargetThing(void);
SithThing* J3DAPI sithPlayerControls_GetVehicleBoardedThing();
void J3DAPI sithPlayerControls_SetVehicleBoardedThing(SithThing* pThing);
signed int J3DAPI sithPlayerControls_CanStrafeMove(SithThing* pThing, int bMoveRight);

// Helper hooking functions
void sithPlayerControls_InstallHooks(void);
void sithPlayerControls_ResetGlobals(void);

J3D_EXTERN_C_END
#endif // SITH_SITHPLAYERCONTROLS_H
