#ifndef RDROID_RDQCLIP_H
#define RDROID_RDQCLIP_H
#include <j3dcore/j3d.h>
#include <rdroid/types.h>
#include <rdroid/RTI/addresses.h>
#include <std/types.h>

J3D_EXTERN_C_START

size_t J3DAPI rdQClip_VerticesInFrustrum(const rdClipFrustum* pFrustrum, const rdVector3* aVertices, size_t numVertices);
// Function clips face vertices (max RDQCLIP_MAXWORKVERTS) based on their Y coord (aka forward) and clip frustum nearPlane
int J3DAPI rdQClip_Face3W(const rdClipFrustum* pFrustrum, rdVector3* aVertices, size_t numVertices);

// Helper hooking functions
void rdQClip_InstallHooks(void);
void rdQClip_ResetGlobals(void);

J3D_EXTERN_C_END
#endif // RDROID_RDQCLIP_H
