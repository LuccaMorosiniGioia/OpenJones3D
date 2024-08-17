#ifndef RDROID_RDMATRIX_H
#define RDROID_RDMATRIX_H
#include <j3dcore/j3d.h>
#include <rdroid/types.h>
#include <rdroid/RTI/addresses.h>
#include <std/types.h>

J3D_EXTERN_C_START

void J3DAPI rdMatrix_Build34(rdMatrix34* mat, const rdVector3* pyr, const rdVector3* pos);
void J3DAPI rdMatrix_BuildFromLook34(rdMatrix34* mat, const rdVector3* look);
void J3DAPI rdMatrix_InvertOrtho34(rdMatrix34* dest, const rdMatrix34* src);
void J3DAPI rdMatrix_BuildRotate34(rdMatrix34* mat, const rdVector3* pyr);
void J3DAPI rdMatrix_BuildTranslate34(rdMatrix34* mat, const rdVector3* vec);
void J3DAPI rdMatrix_BuildScale34(rdMatrix34* mat, const rdVector3* scale);
void J3DAPI rdMatrix_BuildFromVectorAngle34(rdMatrix34* mat, const rdVector3* vec, float angle);
void J3DAPI rdMatrix_LookAt(rdMatrix34* mat, const rdVector3* eyePos, const rdVector3* lookPos, float angle);
void J3DAPI rdMatrix_ExtractAngles34(const rdMatrix34* mat, rdVector3* pyr);
void J3DAPI rdMatrix_Normalize34(rdMatrix34* mat);
void J3DAPI rdMatrix_Copy34(rdMatrix34* dest, const rdMatrix34* src);
void J3DAPI rdMatrix_Multiply34(rdMatrix34* dest, const rdMatrix34* a, const rdMatrix34* b);
void J3DAPI rdMatrix_PreMultiply34(rdMatrix34* a, const rdMatrix34* b);
void J3DAPI rdMatrix_PostMultiply34(rdMatrix34* a, const rdMatrix34* b);
void J3DAPI rdMatrix_PreRotate34(rdMatrix34* mat, const rdVector3* pyr);
void J3DAPI rdMatrix_PostRotate34(rdMatrix34* mat, const rdVector3* vecPYR);
void J3DAPI rdMatrix_PreTranslate34(rdMatrix34* mat, const rdVector3* vec);
void J3DAPI rdMatrix_PostTranslate34(rdMatrix34* pMat, const rdVector3* pVec);
void J3DAPI rdMatrix_PostScale34(rdMatrix34* mat, const rdVector3* vec);
void J3DAPI rdMatrix_TransformVector34(rdVector3* dest, const rdVector3* src, const rdMatrix34* mat);
void J3DAPI rdMatrix_TransformVectorOrtho34(rdVector3* dest, const rdVector3* src, const rdMatrix34* mat);
void J3DAPI rdMatrix_TransformVector34Acc(rdVector3* dest, const rdMatrix34* mat);
void J3DAPI rdMatrix_TransformPoint34(rdVector3* dest, const rdVector3* src, const rdMatrix34* mat);
void J3DAPI rdMatrix_TransformPoint34Acc(rdVector3* dest, const rdMatrix34* mat);
void J3DAPI rdMatrix_TransformPointList34(const rdMatrix34* mat, const rdVector3* aSrc, rdVector3* aDest, size_t size);

// Helper hooking functions
void rdMatrix_InstallHooks(void);
void rdMatrix_ResetGlobals(void);

J3D_EXTERN_C_END
#endif // RDROID_RDMATRIX_H
