#ifndef RDROID_RTI_ADDRESSES_H
#define RDROID_RTI_ADDRESSES_H
#include <j3dcore/j3d.h>
#include <rdroid/types.h>
#include <std/types.h>

// Function addresses

#define rdSetServices_ADDR 0x004C60C0
#define rdClearServices_ADDR 0x004C60D0
#define rdStartup_ADDR 0x004C60E0
#define rdShutdown_ADDR 0x004C6130
#define rdOpen_ADDR 0x004C6150
#define rdClose_ADDR 0x004C61D0
#define rdSetRenderOptions_ADDR 0x004C6200
#define rdSetGeometryMode_ADDR 0x004C6210
#define rdSetLightingMode_ADDR 0x004C6220
#define rdGetRenterOptions_ADDR 0x004C6230
#define rdModel3_RegisterLoader_ADDR 0x004C9910
#define rdModel3_NewEntry_ADDR 0x004C9920
#define rdModel3_LoadEntry_ADDR 0x004C9950
#define rdModel3_FreeEntry_ADDR 0x004CAB70
#define rdModel3_FreeEntryGeometryOnly_ADDR 0x004CACF0
#define rdModel3_BuildExpandedRadius_ADDR 0x004CAE50
#define rdModel3_GetMeshMatrix_ADDR 0x004CAFD0
#define rdModel3_ReplaceMesh_ADDR 0x004CB0B0
#define rdModel3_SwapMesh_ADDR 0x004CB100
#define rdModel3_GetThingColor_ADDR 0x004CB1D0
#define rdModel3_SetModelColor_ADDR 0x004CB260
#define rdModel3_SetThingColor_ADDR 0x004CB280
#define rdModel3_SetNodeColor_ADDR 0x004CB2C0
#define rdModel3_SetNodeColorForNonAmputatedJoints_ADDR 0x004CB350
#define rdModel3_Draw_ADDR 0x004CB3F0
#define rdModel3_DrawHNode_ADDR 0x004CB530
#define rdModel3_DrawMesh_ADDR 0x004CB610
#define rdModel3_DrawFace_ADDR 0x004CB920
#define rdModel3_EnableFogRendering_ADDR 0x004CBB80
#define rdParticle_New_ADDR 0x004D9460
#define rdParticle_NewEntry_ADDR 0x004D94E0
#define rdParticle_Duplicate_ADDR 0x004D9630
#define rdParticle_Free_ADDR 0x004D9730
#define rdParticle_FreeEntry_ADDR 0x004D9780
#define rdParticle_LoadEntry_ADDR 0x004D97D0
#define rdParticle_Draw_ADDR 0x004D9C20
#define rdFont_Load_ADDR 0x004C4610
#define rdFont_LoadEntry_ADDR 0x004C4850
#define rdFont_LoadMaterial_ADDR 0x004C49A0
#define rdFont_Free_ADDR 0x004C4A00
#define rdFont_SetFontColor_ADDR 0x004C4A40
#define rdFont_GetTextEnd_ADDR 0x004C4A90
#define rdFont_GetTextWidth_ADDR 0x004C4B80
#define rdFont_DrawText_ADDR 0x004C4BF0
#define rdFont_DrawChar_ADDR 0x004C4E40
#define rdFont_DrawText2_ADDR 0x004C5090
#define rdFont_Startup_ADDR 0x004C5300
#define rdFont_Shutdown_ADDR 0x004C5340
#define rdFont_Open_ADDR 0x004C5390
#define rdFont_Close_ADDR 0x004C53E0
#define rdCamera_New_ADDR 0x004C5420
#define rdCamera_NewEntry_ADDR 0x004C5490
#define rdCamera_Free_ADDR 0x004C55B0
#define rdCamera_FreeEntry_ADDR 0x004C5600
#define rdCamera_SetCanvas_ADDR 0x004C5620
#define rdCamera_SetCurrent_ADDR 0x004C5680
#define rdCamera_SetFOV_ADDR 0x004C56A0
#define rdCamera_SetProjectType_ADDR 0x004C56F0
#define rdCamera_SetAspectRatio_ADDR 0x004C5770
#define rdCamera_BuildFOV_ADDR 0x004C5820
#define rdCamera_BuildClipFrustrum_ADDR 0x004C5A20
#define rdCamera_SetFrustrum_ADDR 0x004C5AC0
#define rdCamera_Update_ADDR 0x004C5C10
#define rdCamera_OrthoProject_ADDR 0x004C5C50
#define rdCamera_OrthoProjectLst_ADDR 0x004C5C90
#define rdCamera_OrthoProjectSquare_ADDR 0x004C5D10
#define rdCamera_OrthoProjectSquareLst_ADDR 0x004C5D50
#define rdCamera_PerspProject_ADDR 0x004C5DC0
#define rdCamera_PerspProjectLst_ADDR 0x004C5E00
#define rdCamera_PerspProjectSquare_ADDR 0x004C5E80
#define rdCamera_PerspProjectSquareLst_ADDR 0x004C5EC0
#define rdCamera_SetAmbientLight_ADDR 0x004C5F40
#define rdCamera_SetAttenuation_ADDR 0x004C5F70
#define rdCamera_AddLight_ADDR 0x004C5FF0
#define rdCamera_ClearLights_ADDR 0x004C6090
#define rdCamera_sub_4C60B0_ADDR 0x004C60B0
#define rdCache_Startup_ADDR 0x004C6D60
#define rdCache_AdvanceFrame_ADDR 0x004C6D80
#define rdCache_GetFrameNum_ADDR 0x004C6DB0
#define rdCache_GetProcEntry_ADDR 0x004C6DC0
#define rdCache_GetAlphaProcEntry_ADDR 0x004C6E10
#define rdCache_Flush_ADDR 0x004C6E60
#define rdCache_FlushAlpha_ADDR 0x004C6EE0
#define rdCache_AddProcFace_ADDR 0x004C6F60
#define rdCache_AddAlphaProcFace_ADDR 0x004C6F90
#define rdCache_SendFaceListToHardware_ADDR 0x004C7000
#define rdCache_SendWireframeFaceListToHardware_ADDR 0x004C7580
#define rdCache_AddToTextureCache_ADDR 0x004C7640
#define rdCache_ProcFaceDistanceCompare_ADDR 0x004C7670
#define rdCache_ProcFaceCompare_ADDR 0x004C7690
#define rdMaterial_RegisterLoader_ADDR 0x004C8D00
#define rdMaterial_Load_ADDR 0x004C8D10
#define rdMaterial_LoadEntry_ADDR 0x004C8DA0
#define rdMaterial_Free_ADDR 0x004C9240
#define rdMaterial_FreeEntry_ADDR 0x004C9290
#define rdMaterial_GetMaterialMemUsage_ADDR 0x004C9300
#define rdMaterial_GetMipSize_ADDR 0x004C9340
#define rdPrimit2_DrawClippedLine_ADDR 0x004CC040
#define rdPrimit2_Reset_ADDR 0x004CC2D0
#define rdPrimit2_DrawClippedLine2_ADDR 0x004CC2F0
#define rdPrimit2_DrawClippedCircle_ADDR 0x004CC360
#define rdPrimit2_DrawClippedCircle2_ADDR 0x004CC4B0
#define rdKeyframe_RegisterLoader_ADDR 0x004CE5F0
#define rdKeyframe_NewEntry_ADDR 0x004CE600
#define rdKeyframe_LoadEntry_ADDR 0x004CE630
#define rdKeyframe_FreeEntry_ADDR 0x004CEC10
#define rdClip_Line2_ADDR 0x004CEFF0
#define rdClip_CalcOutcode2_ADDR 0x004CF260
#define rdClip_Line2Ex_ADDR 0x004CF2A0
#define rdClip_CalcOutcode2Ex_ADDR 0x004CF570
#define rdClip_ClipFacePVS_ADDR 0x004CF5D0
#define rdClip_Face3WPVS_ADDR 0x004CF630
#define rdClip_Face3W_ADDR 0x004CFF50
#define rdClip_Face3WOrtho_ADDR 0x004D09C0
#define rdClip_Face3S_ADDR 0x004D11E0
#define rdClip_Face3SOrtho_ADDR 0x004D1C50
#define rdClip_Face3GS_ADDR 0x004D2470
#define rdClip_Face3GSOrtho_ADDR 0x004D33A0
#define rdClip_Face3GT_ADDR 0x004D4060
#define rdClip_Face3GTOrtho_ADDR 0x004D4E50
#define rdClip_Face3T_ADDR 0x004D59D0
#define rdClip_Face3TOrtho_ADDR 0x004D6E70
#define rdClip_SphereInFrustrum_ADDR 0x004D7E60
#define rdClip_QFace3W_ADDR 0x004D7FD0
#define rdClip_FaceToPlane_ADDR 0x004D8050
#define rdClip_VerticesToPlane_ADDR 0x004D84B0
#define rdPolyline_New_ADDR 0x004D8600
#define rdPolyline_NewEntry_ADDR 0x004D8680
#define rdPolyline_Free_ADDR 0x004D8830
#define rdPolyline_FreeEntry_ADDR 0x004D8880
#define rdPolyline_Draw_ADDR 0x004D88E0
#define rdPolyline_DrawFace_ADDR 0x004D8AD0
#define rdSprite_NewEntry_ADDR 0x004D8BC0
#define rdSprite_FreeEntry_ADDR 0x004D8DC0
#define rdSprite_Draw_ADDR 0x004D8E20
#define rdQClip_VerticesInFrustrum_ADDR 0x004D9F30
#define rdQClip_Face3W_ADDR 0x004DA0B0
#define rdCanvas_New_ADDR 0x004C6240
#define rdCanvas_NewEntry_ADDR 0x004C62B0
#define rdCanvas_Free_ADDR 0x004C6360
#define rdWallpaper_New_ADDR 0x004C63B0
#define rdWallpaper_Free_ADDR 0x004C6490
#define rdWallpaper_Draw_ADDR 0x004C64D0
#define rdWallpaper_NewWallLine_ADDR 0x004C6920
#define rdWallpaper_FreeWallLine_ADDR 0x004C6A30
#define rdWallpaper_DrawWallLine_ADDR 0x004C6A70
#define rdMatrix_Build34_ADDR 0x004C76D0
#define rdMatrix_BuildFromLook34_ADDR 0x004C77F0
#define rdMatrix_InvertOrtho34_ADDR 0x004C7990
#define rdMatrix_BuildRotate34_ADDR 0x004C7A50
#define rdMatrix_BuildTranslate34_ADDR 0x004C7B70
#define rdMatrix_BuildScale34_ADDR 0x004C7BA0
#define rdMatrix_BuildFromVectorAngle34_ADDR 0x004C7BE0
#define rdMatrix_LookAt_ADDR 0x004C7E00
#define rdMatrix_ExtractAngles34_ADDR 0x004C7FC0
#define rdMatrix_Normalize34_ADDR 0x004C81D0
#define rdMatrix_Copy34_ADDR 0x004C8280
#define rdMatrix_Multiply34_ADDR 0x004C82A0
#define rdMatrix_PreMultiply34_ADDR 0x004C84A0
#define rdMatrix_PostMultiply34_ADDR 0x004C8690
#define rdMatrix_PreRotate34_ADDR 0x004C8880
#define rdMatrix_PostRotate34_ADDR 0x004C88B0
#define rdMatrix_PreTranslate34_ADDR 0x004C88E0
#define rdMatrix_PostTranslate34_ADDR 0x004C8910
#define rdMatrix_PostScale34_ADDR 0x004C8940
#define rdMatrix_TransformVector34_ADDR 0x004C8970
#define rdMatrix_TransformVectorOrtho34_ADDR 0x004C8A00
#define rdMatrix_TransformVector34Acc_ADDR 0x004C8A90
#define rdMatrix_TransformPoint34_ADDR 0x004C8B30
#define rdMatrix_TransformPoint34Acc_ADDR 0x004C8BC0
#define rdMatrix_TransformPointList34_ADDR 0x004C8C60
#define rdThing_New_ADDR 0x004C9360
#define rdThing_NewEntry_ADDR 0x004C93B0
#define rdThing_Free_ADDR 0x004C93E0
#define rdThing_FreeEntry_ADDR 0x004C9430
#define rdThing_SetModel3_ADDR 0x004C94B0
#define rdThing_SetSprite3_ADDR 0x004C9650
#define rdThing_SetPolyline_ADDR 0x004C96B0
#define rdThing_SetParticleCloud_ADDR 0x004C9710
#define rdThing_Draw_ADDR 0x004C9770
#define rdThing_AccumulateMatrices_ADDR 0x004C9810
#define rdVector_Set3_ADDR 0x004CBBA0
#define rdVector_Set4_ADDR 0x004CBBC0
#define rdVector_Neg3_ADDR 0x004CBBE0
#define rdVector_Add3Acc_ADDR 0x004CBC00
#define rdVector_Dot3_ADDR 0x004CBC30
#define rdVector_Len3_ADDR 0x004CBC60
#define rdVector_Normalize3_ADDR 0x004CBCA0
#define rdVector_Normalize2Acc_ADDR 0x004CBD30
#define rdVector_Normalize3Acc_ADDR 0x004CBD80
#define rdVector_Normalize3QuickAcc_ADDR 0x004CBDF0
#define rdVector_InvScale3_ADDR 0x004CBFB0
#define rdVector_Rotate3_ADDR 0x004CBFE0
#define rdVector_Rotate3Acc_ADDR 0x004CC010
#define rdPuppet_New_ADDR 0x004CC5A0
#define rdPuppet_NewEntry_ADDR 0x004CC610
#define rdPuppet_Free_ADDR 0x004CC670
#define rdPuppet_AddTrack_ADDR 0x004CC6C0
#define rdPuppet_RemoveTrack_ADDR 0x004CC7A0
#define rdPuppet_SetStatus_ADDR 0x004CC860
#define rdPuppet_SetCallback_ADDR 0x004CC8D0
#define rdPuppet_PlayTrack_ADDR 0x004CC930
#define rdPuppet_FadeInTrack_ADDR 0x004CC9C0
#define rdPuppet_FadeOutTrack_ADDR 0x004CCA80
#define rdPuppet_SetTrackSpeed_ADDR 0x004CCB40
#define rdPuppet_AdvanceTrack_ADDR 0x004CCBA0
#define rdPuppet_UpdateTracks_ADDR 0x004CCF40
#define rdPuppet_ResetTrack_ADDR 0x004CD020
#define rdPuppet_BuildJointMatrices_ADDR 0x004CD090
#define rdMath_DistancePointToPlane_ADDR 0x004CD9B0
#define rdMath_DeltaAngleNormalized_ADDR 0x004CD9F0
#define rdPrimit3_DrawClippedCircle_ADDR 0x004CDB00
#define rdPrimit3_ClipFace_ADDR 0x004CDBD0
#define rdLight_NewEntry_ADDR 0x004CEC70
#define rdLight_CalcVertexIntensities_ADDR 0x004CECB0
#define rdLight_CalcFaceIntensity_ADDR 0x004CEE90
#define rdLight_GetIntensity_ADDR 0x004CEFD0
#define rdFace_NewEntry_ADDR 0x004D8580
#define rdFace_FreeEntry_ADDR 0x004D85D0

// Variable addresses

#define rdroid_g_zeroVector3_ADDR 0x00509A18
#define rdroid_g_xVector3_ADDR 0x00509A28
#define rdroid_g_yVector3_ADDR 0x00509A38
#define rdroid_g_zVector3_ADDR 0x00509A48
#define rdroid_g_identMatrix34_ADDR 0x00509AA8
#define rdroid_bRDroidStartup_ADDR 0x005E10EC
#define rdroid_bRDroidOpen_ADDR 0x005E10F0
#define rdroid_g_curLightingMode_ADDR 0x0183B9C4
#define rdroid_g_pHS_ADDR 0x0183B9C8
#define rdroid_g_curGeometryMode_ADDR 0x0183B9CC
#define rdroid_g_curRenderOptions_ADDR 0x0183B9D0
#define rdModel3_pfDrawFace_ADDR 0x0054AB2C
#define rdModel3_aView_ADDR 0x014DA928
#define rdModel3_pCurThing_ADDR 0x014DD928
#define rdModel3_bDrawMeshBounds_ADDR 0x014DD92C
#define rdModel3_pModel3Loader_ADDR 0x014DD930
#define rdModel3_g_numGeoLights_ADDR 0x014DD938
#define rdModel3_g_numMeshLights_ADDR 0x014DD93C
#define rdModel3_bCalcRadius_ADDR 0x014DD940
#define rdModel3_maxGeoRadius_ADDR 0x014DD944
#define rdModel3_extraFaceFlags_ADDR 0x014DD948
#define rdModel3_g_numDrawnFaces_ADDR 0x0183AF84
#define rdModel3_g_localCamera_ADDR 0x0183AF90
#define rdModel3_g_numDrawnAlphaFaces_ADDR 0x0183AF9C
#define rdModel3_g_apGeoLights_ADDR 0x0183AFA0
#define rdModel3_g_aLocalLightPos_ADDR 0x0183B1A0
#define rdModel3_g_pCurMesh_ADDR 0x0183B7A0
#define rdModel3_g_curLightingMode_ADDR 0x0183B7A4
#define rdModel3_apMeshLights_ADDR 0x0183B7C0
#define rdModel3_g_lightingMode_ADDR 0x0183B9C0
#define rdParticle_aFaceTexVerts_ADDR 0x0054B2B0
#define rdParticle_aFaceVerts_ADDR 0x014DFBF8
#define rdParticle_aTransformedVerts_ADDR 0x014DFFB8
#define rdFont_lightingMode_ADDR 0x005E1080
#define rdFont_aFontColors_ADDR 0x005E1088
#define rdFont_bStartup_ADDR 0x005E10C8
#define rdFont_bOpen_ADDR 0x005E10CC
#define rdFont_bFontColorSet_ADDR 0x005E10D0
#define rdCamera_g_camPYR_ADDR 0x005E10D8
#define rdCamera_g_pCurCamera_ADDR 0x005E10E4
#define rdCamera_dword_5E10E8_ADDR 0x005E10E8
#define rdCamera_g_camMatrix_ADDR 0x0183B9E0
#define rdCache_aProcFaces_ADDR 0x005E10F8
#define rdCache_aVertIntensities_ADDR 0x005E28F8
#define rdCache_aAlphaProcFaces_ADDR 0x006028F8
#define rdCache_numProcFaces_ADDR 0x0061A8F8
#define rdCache_aVertices_ADDR 0x0061A900
#define rdCache_aAlphaVertIntensities_ADDR 0x00A1A900
#define rdCache_aAlphaVertices_ADDR 0x00C1A900
#define rdCache_pCurCacheVertex_ADDR 0x0101A900
#define rdCache_totalVerts_ADDR 0x0101A904
#define rdCache_numAlphaProcFaces_ADDR 0x0101A908
#define rdCache_pCurInVert_ADDR 0x0101A90C
#define rdCache_aVertIndices_ADDR 0x0101A910
#define rdCache_aHWVertices_ADDR 0x010DA910
#define rdCache_drawnFaces_ADDR 0x014DA910
#define rdCache_frameNum_ADDR 0x014DA914
#define rdCache_numUsedVertices_ADDR 0x014DA918
#define rdCache_numUsedAlphaVertices_ADDR 0x014DA91C
#define rdMaterial_pfMaterialLoader_ADDR 0x014DA920
#define rdMaterial_pfMaterialUnloader_ADDR 0x014DA924
#define rdPrimit2_aD3DVertices_ADDR 0x014DD950
#define rdKeyframe_pKeyframeLoader_ADDR 0x014DD990
#define rdClip_pSourceTVert_ADDR 0x014DD998
#define rdClip_pDestTVert_ADDR 0x014DD99C
#define rdClip_pDestVertIntensity_ADDR 0x014DD9A0
#define rdClip_pDestVert_ADDR 0x014DD9A4
#define rdClip_aWorkTVerts_ADDR 0x014DD9A8
#define rdClip_pSourceVert_ADDR 0x014DDC28
#define rdClip_pSourceVertIntensity_ADDR 0x014DDC2C
#define rdClip_aWorkVerts_ADDR 0x014DDC30
#define rdClip_aWorkVertIntensities_ADDR 0x014DDFF0
#define rdClip_g_faceStatus_ADDR 0x014DE4F4
#define rdClip_aWorkFaceVerts_ADDR 0x014DE4F8
#define rdPolyline_aVerticesCache_ADDR 0x014DEBB8
#define rdSprite_aView_ADDR 0x014DF838
#define rdQClip_pDestVert_ADDR 0x014E0BCC
#define rdQClip_pSourceVert_ADDR 0x014E0E50
#define rdQClip_aWorkVerts_ADDR 0x014E0E58

#endif // RDROID_RTI_ADDRESSES_H
