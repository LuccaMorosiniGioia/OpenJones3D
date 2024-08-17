#ifndef RDROID_RDCAMERA_H
#define RDROID_RDCAMERA_H
#include <j3dcore/j3d.h>
#include <rdroid/types.h>
#include <rdroid/RTI/addresses.h>
#include <std/types.h>

J3D_EXTERN_C_START

#define rdCamera_g_camPYR J3D_DECL_FAR_VAR(rdCamera_g_camPYR, rdVector3)
// extern rdVector3 rdCamera_g_camPYR;

#define rdCamera_g_pCurCamera J3D_DECL_FAR_VAR(rdCamera_g_pCurCamera, rdCamera*)
// extern rdCamera *rdCamera_g_pCurCamera;

#define rdCamera_g_camMatrix J3D_DECL_FAR_VAR(rdCamera_g_camMatrix, rdMatrix34)
// extern rdMatrix34 rdCamera_g_camMatrix;

rdCamera* J3DAPI rdCamera_New(float fov, int bFarClip, float nearPlane, float farPlane, float aspectRatio);
int J3DAPI rdCamera_NewEntry(rdCamera* pCamera, float fov, int bClipFar, float nearPlane, float farPlane, float aspectRatio);
void J3DAPI rdCamera_Free(rdCamera* pCamera);
void J3DAPI rdCamera_FreeEntry(rdCamera* pCamera);
void J3DAPI rdCamera_SetCanvas(rdCamera* pCamera, rdCanvas* pCanvas);
void J3DAPI rdCamera_SetCurrent(rdCamera* pCamera);
void J3DAPI rdCamera_SetFOV(rdCamera* pCamera, float fov);
void J3DAPI rdCamera_SetProjectType(rdCamera* pCamera, rdCameraProjType type);
void J3DAPI rdCamera_SetAspectRatio(rdCamera* pCamera, float ratio);
void J3DAPI rdCamera_BuildFOV(rdCamera* pCamera);
void J3DAPI rdCamera_BuildClipFrustrum(rdCamera* pCamera, rdClipFrustum* pFrustum, float width, float height);
int J3DAPI rdCamera_SetFrustrum(rdCamera* pCamera, rdClipFrustum* pFrustrum, int left, int top, int right, int bottom);
void J3DAPI rdCamera_Update(const rdMatrix34* orient);
// Function does ortho projection from view space (camera space ) to intermediante projection space. (2D projection in intermediante space between camera space and clip space) 
void J3DAPI rdCamera_OrthoProject(rdVector3* pDestVertex, const rdVector3* pSrcVertex);
// Function does ortho projection from view space (camera space ) to intermediante projection space. (2D projection in intermediante space between camera space and clip space) 
void J3DAPI rdCamera_OrthoProjectLst(rdVector3* pDestVerts, const rdVector3* pSrcVerts, size_t numVerts);
// Function does ortho projection from view space (camera space ) to intermediante projection space. (2D projection in intermediante space between camera space and clip space) 
void J3DAPI rdCamera_OrthoProjectSquare(rdVector3* pDestVertex, const rdVector3* pSrcVertex);
// Function does ortho projection from view space (camera space ) to intermediante projection space. (2D projection in intermediante space between camera space and clip space) 
void J3DAPI rdCamera_OrthoProjectSquareLst(rdVector3* pDestVerts, const rdVector3* pSrcVerts, size_t numVerts);
// Function does perspective projection from view space (camera space ) to intermediante projection space. (2D projection in intermediante space between camera space and clip space) 
void J3DAPI rdCamera_PerspProject(rdVector3* pDestVertex, const rdVector3* pSrcVertex);
// Function does perspective projection from view space (camera space ) to intermediante projection space. (2D projection in intermediante space between camera space and clip space) 
void J3DAPI rdCamera_PerspProjectLst(rdVector3* pDestVerts, const rdVector3* pSrcVerts, size_t numVerts);
// Function does perspective projection from view space (camera space ) to intermediante projection space. (2D projection in intermediante space between camera space and clip space) 
void J3DAPI rdCamera_PerspProjectSquare(rdVector3* pDestVertex, const rdVector3* pSrcVertex);
// Function does perspective projection from view space (camera space ) to intermediante projection space. (2D projection in intermediante space between camera space and clip space) 
void J3DAPI rdCamera_PerspProjectSquareLst(rdVector3* pDestVerts, const rdVector3* pSrcVerts, size_t numVerts);
void J3DAPI rdCamera_SetAmbientLight(rdCamera* pCamera, const rdVector4* pLight);
void J3DAPI rdCamera_SetAttenuation(rdCamera* pCamera, float min, float max);
int J3DAPI rdCamera_AddLight(rdCamera* pCamera, rdLight* pLight, const rdVector3* pPos);
int J3DAPI rdCamera_ClearLights(rdCamera* pCamera);
void J3DAPI rdCamera_sub_4C60B0(int bEnable);

// Helper hooking functions
void rdCamera_InstallHooks(void);
void rdCamera_ResetGlobals(void);

J3D_EXTERN_C_END
#endif // RDROID_RDCAMERA_H
