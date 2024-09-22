#ifndef SITH_SITHTHING_H
#define SITH_SITHTHING_H
#include <j3dcore/j3d.h>
#include <rdroid/types.h>
#include <sith/types.h>
#include <sith/Main/sithMain.h>
#include <sith/RTI/addresses.h>

#include <std/types.h>
#include <std/General/stdConffile.h>

J3D_EXTERN_C_START

// Macro generates bitmask from provided thing type
#define SITHTHING_TYPE2MASK(type) (1 << (type)) 

// Type mask helper macros
#define SITHTHING_TYPEMASK_BIT_OR_1(x) (SITHTHING_TYPE2MASK(x))
#define SITHTHING_TYPEMASK_BIT_OR_2(x, y) (SITHTHING_TYPE2MASK(x) | SITHTHING_TYPE2MASK(y))
#define SITHTHING_TYPEMASK_BIT_OR_3(x, y, z) (SITHTHING_TYPE2MASK(x) | SITHTHING_TYPE2MASK(y) | SITHTHING_TYPE2MASK(z))
#define SITHTHING_TYPEMASK_BIT_OR_4(x, y, z, w) (SITHTHING_TYPE2MASK(x) | SITHTHING_TYPE2MASK(y) | SITHTHING_TYPE2MASK(z) | SITHTHING_TYPE2MASK(w))
#define SITHTHING_TYPEMASK_BIT_OR_5(x, y, z, w, v) (SITHTHING_TYPE2MASK(x) | SITHTHING_TYPE2MASK(y) | SITHTHING_TYPE2MASK(z) | SITHTHING_TYPE2MASK(w) | SITHTHING_TYPE2MASK(v))
#define SITHTHING_TYPEMASK_BIT_OR_6(x, y, z, w, v, u) (SITHTHING_TYPE2MASK(x) | SITHTHING_TYPE2MASK(y) | SITHTHING_TYPE2MASK(z) | SITHTHING_TYPE2MASK(w) | SITHTHING_TYPE2MASK(v) | SITHTHING_TYPE2MASK(u))
#define SITHTHING_TYPEMASK_BIT_OR_7(x, y, z, w, v, u, t) (SITHTHING_TYPE2MASK(x) | SITHTHING_TYPE2MASK(y) | SITHTHING_TYPE2MASK(z) | SITHTHING_TYPE2MASK(w) | SITHTHING_TYPE2MASK(v) | SITHTHING_TYPE2MASK(u) | SITHTHING_TYPE2MASK(t))
#define SITHTHING_TYPEMASK_BIT_OR_8(x, y, z, w, v, u, t, s) (SITHTHING_TYPE2MASK(x) | SITHTHING_TYPE2MASK(y) | SITHTHING_TYPE2MASK(z) | SITHTHING_TYPE2MASK(w) | SITHTHING_TYPE2MASK(v) | SITHTHING_TYPE2MASK(u) | SITHTHING_TYPE2MASK(t) | SITHTHING_TYPE2MASK(s))
#define SITHTHING_TYPEMASK_BIT_OR_9(x, y, z, w, v, u, t, s, r) (SITHTHING_TYPEMASK_BIT_OR_8(x, y, z, w, v, u, t, s) | SITHTHING_TYPE2MASK(r))
#define SITHTHING_TYPEMASK_BIT_OR_10(x, y, z, w, v, u, t, s, r, q) (SITHTHING_TYPEMASK_BIT_OR_9(x, y, z, w, v, u, t, s, r) | SITHTHING_TYPE2MASK(q))
#define SITHTHING_TYPEMASK_BIT_OR_11(x, y, z, w, v, u, t, s, r, q, p) (SITHTHING_TYPEMASK_BIT_OR_10(x, y, z, w, v, u, t, s, r, q) | SITHTHING_TYPE2MASK(p))
#define SITHTHING_TYPEMASK_BIT_OR_12(x, y, z, w, v, u, t, s, r, q, p, o) (SITHTHING_TYPEMASK_BIT_OR_11(x, y, z, w, v, u, t, s, r, q, p) | SITHTHING_TYPE2MASK(o))
#define SITHTHING_TYPEMASK_BIT_OR_13(x, y, z, w, v, u, t, s, r, q, p, o, n) (SITHTHING_TYPEMASK_BIT_OR_12(x, y, z, w, v, u, t, s, r, q, p, o) | SITHTHING_TYPE2MASK(n))
#define SITHTHING_TYPEMASK_BIT_OR_14(x, y, z, w, v, u, t, s, r, q, p, o, n, m) (SITHTHING_TYPEMASK_BIT_OR_13(x, y, z, w, v, u, t, s, r, q, p, o, n) | SITHTHING_TYPE2MASK(m))
#define SITHTHING_TYPEMASK_BIT_OR_15(x, y, z, w, v, u, t, s, r, q, p, o, n, m, l) (SITHTHING_TYPEMASK_BIT_OR_14(x, y, z, w, v, u, t, s, r, q, p, o, n, m) | SITHTHING_TYPE2MASK(l))
#define SITHTHING_TYPEMASK_BIT_OR_NARG(...) SITHTHING_TYPEMASK_BIT_OR_NARG_(__VA_ARGS__, SITHTHING_TYPEMASK_BIT_OR_RSEQ_N())
#define SITHTHING_TYPEMASK_BIT_OR_NARG_(...) SITHTHING_TYPEMASK_BIT_OR_ARG_N(__VA_ARGS__)
#define SITHTHING_TYPEMASK_BIT_OR_ARG_N(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, N, ...) N
#define SITHTHING_TYPEMASK_BIT_OR_RSEQ_N() 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
#define SITHTHING_TYPEMASK_BIT_OR_(N, ...) SITHTHING_TYPEMASK_BIT_OR_##N(__VA_ARGS__)
#define SITHTHING_TYPEMASK_BIT_OR_X(N, ...) SITHTHING_TYPEMASK_BIT_OR_(N, __VA_ARGS__)


/*
* Macro generates thing type bitmask form provided types (SithThingType)
*
* Usage:
*    SITHTHING_TYPEMASK(SITH_THING_ACTOR, SITH_THING_PLAYER)
*/
#define SITHTHING_TYPEMASK(...) SITHTHING_TYPEMASK_BIT_OR_X(SITHTHING_TYPEMASK_BIT_OR_NARG(__VA_ARGS__), __VA_ARGS__)


#define sithThing_g_numFreeThings J3D_DECL_FAR_VAR(sithThing_g_numFreeThings, size_t)
// extern size_t sithThing_g_numFreeThings;

int J3DAPI sithThing_Startup();
int J3DAPI sithThing_Shutdown();
int J3DAPI sithThing_Draw(SithThing* pThing);
int J3DAPI sithThing_AddSwapEntry(SithThing* pThing, int meshNum, rdModel3* pSrcModel, int meshNumSrc);
int J3DAPI sithThing_RemoveSwapEntry(SithThing* pThing, int refnum);
void J3DAPI sithThing_ResetSwapList(SithThing* pThing);
void J3DAPI sithThing_Update(float secDeltaTime, int msecDeltaTime);
void J3DAPI sithThing_UpdatePhysics(SithThing* pThing, float secDeltaTime);
void J3DAPI sithThing_Remove(SithThing* pThing);
SithThing* J3DAPI sithThing_GetThingParent(const SithThing* pThing);
SithThing* J3DAPI sithThing_GetThingByIndex(int idx);
int J3DAPI sithThing_GetThingIndex(const SithThing* pThing);
SithThing* J3DAPI sithThing_GetGuidThing(int guid);
void J3DAPI sithThing_DestroyThing(SithThing* pThing);
float J3DAPI sithThing_DamageThing(SithThing* pVictim, const SithThing* pPurpetrator, float damage, SithDamageType hitType);
float J3DAPI sithThing_ScaleCombatDamage(const SithThing* pThing, SithThing* pHitThing);
void J3DAPI sithThing_PlayCogDamageSound(SithThing* pThing, SithDamageType hitType);
int J3DAPI sithThing_AllocWorldThings(SithWorld* pWorld, int numThings);
void J3DAPI sithThing_FreeWorldThings(SithWorld* pWorld);
void J3DAPI sithThing_RemoveAllThings(SithWorld* pWorld);
void J3DAPI sithThing_ResetAllThings(SithWorld* pWorld);
void J3DAPI sithThing_LoadPostProcess(SithWorld* pWorld);
int J3DAPI sithThing_RemoveThing(SithWorld* pWorld, SithThing* pThing);
void J3DAPI sithThing_FreeThing(SithWorld* pWorld, SithThing* pThing);
void J3DAPI sithThing_Initialize(const SithWorld* pWorld, SithThing* pThing, int bFindFloor);
void J3DAPI sithThing_Reset(SithThing* pThing);
void J3DAPI sithThing_MoveToSector(SithThing* pThing, SithSector* pSector, int bNotify);
void J3DAPI sithThing_ExitSector(SithThing* pThing);
void J3DAPI sithThing_EnterWater(SithThing* pThing, int bNoSplash);
void J3DAPI sithThing_ExitWater(SithThing* pThing, int bNoSplash);
SithThing* J3DAPI sithThing_Create(SithThingType type);
void J3DAPI sithThing_SetPositionAndOrient(SithThing* pThing, const rdVector3* pos, const rdMatrix34* pOrient);
int J3DAPI sithThing_SetThingModel(SithThing* pThing, rdModel3* pModel);
void J3DAPI sithThing_SetThingBasedOn(SithThing* pThing, const SithThing* pTemplate);
SithThing* J3DAPI sithThing_CreateThingAtPos(const SithThing* pTemplate, const rdVector3* pos, const rdMatrix34* orient, SithSector* pSector, SithThing* pParent);
SithThing* J3DAPI sithThing_CreateThing(const SithThing* pTemplate, SithThing* pThing);
void J3DAPI sithThing_AttachThingToSurface(SithThing* pThing, SithSurface* pSurf, int bNoThingStateUpdate);
void J3DAPI sithThing_AttachThingToClimbSurface(SithThing* pThing, SithSurface* pSurf);
void J3DAPI sithThing_AttachThingToThingFace(SithThing* pThing, SithThing* pAttachThing, rdFace* pFace, const rdVector3* aVertices, int bNoThingStateUpdate);
void J3DAPI sithThing_AddThingToAttachedThings(SithThing* pThing, SithThing* pAttachThing);
void J3DAPI sithThing_AttachThingToThing(SithThing* pThing, SithThing* pAttachThing);
void J3DAPI sithThing_AttachThingToThingMesh(SithThing* pThing, SithThing* pAttachThing, int meshNum);
void J3DAPI sithThing_DetachThing(SithThing* pThing);
void J3DAPI sithThing_DetachAttachedThings(SithThing* pThing);
void J3DAPI sithThing_PurgeGarbageThings(SithWorld* pWorld);
int J3DAPI sithThing_NDYReadThingSection(SithWorld* pWorld, int bSkip);
int J3DAPI sithThing_CNDWriteThingSection(tFileHandle fh, SithWorld* pWorld);
int J3DAPI sithThing_CNDReadThingSection(tFileHandle fh, SithWorld* pWorld);
int J3DAPI sithThing_CNDWriteThingList(tFileHandle fh, SithWorld* pWorld, unsigned int numThings, SithThing* aThings);
int J3DAPI sithThing_CNDReadThingList(tFileHandle fh, SithWorld* pWorld, unsigned int numThings, SithThing* aThings, void (J3DAPI* pfInitThingFunc)(SithThing*));
int J3DAPI sithThing_ParseArg(StdConffileArg* pArg, SithWorld* pWorld, SithThing* pThing);
int J3DAPI sithThing_ParseThingArg(StdConffileArg* pArg, SithWorld* pWorld, SithThing* pThing, int adjNum);
int J3DAPI sithThing_ParseType(const char* pType);
int J3DAPI sithThing_ValidateThingPointer(const SithWorld* pWorld, const SithThing* pThing);
void J3DAPI sithThing_SyncThing(SithThing* pThing, int syncFlags);
int J3DAPI sithThing_SyncThings();
int J3DAPI sithThing_CanSync(const SithThing* pThing);
int J3DAPI sithThing_GetThingMeshIndex(const SithThing* pThing, const char* meshName);
int J3DAPI sithThing_GetThingJointIndex(const SithThing* pThing, const char* pJointName);
int J3DAPI sithThing_FreeThingIndex(SithWorld* pWorld, size_t thingNum);
int J3DAPI sithThing_GetFreeThingIndex();
int J3DAPI sithThing_LoadEntry(SithWorld* pWorld);
int J3DAPI sithThing_CreateQuetzUserBlock(SithThing* pThing);
void J3DAPI sithThing_UpdateQuetzUserBlock(SithThing* pThing);

// Helper hooking functions
void sithThing_InstallHooks(void);
void sithThing_ResetGlobals(void);

J3D_EXTERN_C_END
#endif // SITH_SITHTHING_H
