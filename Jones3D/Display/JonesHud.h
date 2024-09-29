#ifndef JONES3D_JONESHUD_H
#define JONES3D_JONESHUD_H
#include <Jones3D/types.h>
#include <Jones3D/RTI/addresses.h>
#include <j3dcore/j3d.h>
#include <rdroid/types.h>
#include <sith/types.h>
#include <std/types.h>

J3D_EXTERN_C_START

int JonesHud_Startup(void);
void JonesHud_Shutdown(void);
int J3DAPI JonesHud_Open();
void JonesHud_Close(void);
// TODO: Add function that will discard current state i.e. current item change animation, when loading game

void J3DAPI JonesHud_ToggleMenu();
void J3DAPI JonesHud_EnableMenu(int bEnable);
int J3DAPI JonesHud_IsMenuEnabled();

void J3DAPI JonesHud_Render();
void J3DAPI JonesHud_Update(const SithWorld* pWorld);
int J3DAPI JonesHud_SetCanvasSize(int width, int height);
void J3DAPI JonesHud_UpdateSinCosTable();
void J3DAPI JonesHud_UpdateHUDLayout(uint32_t width, uint32_t height);

void J3DAPI JonesHud_MenuOpen();
void JonesHud_MenuClose(void);

void J3DAPI JonesHud_StartItemTranslation(JonesHudMenuItem* pItem, uint32_t msecDuration, float moveRate, int bMoveUp);
int J3DAPI JonesHud_HasTimeElapsed(unsigned int msecDuration, unsigned int msecDeltaTime, unsigned int msecTime);
void J3DAPI JonesHud_RenderEnduranceIndicator(float enduranceState);
void J3DAPI JonesHud_DrawEnduranceIndicator(float state, float alpha);
void J3DAPI JonesHud_SetFadeHealthHUD(int bShow, int bFade);

int J3DAPI JonesHud_RenderFadeHealthIndicator(int bFade);
void J3DAPI JonesHud_DrawHealthIndicator(float hitDelta, float health, float alpha);
void J3DAPI JonesHud_DrawHealthHitOverlay(float hitDelta, float z, float rhw);
void J3DAPI JonesHud_RenderHealthIndicator(float healthState);
void J3DAPI JonesHud_DrawHealthIndicatorBase(float state, float alpha, float z, float w);
void J3DAPI JonesHud_DrawHealthIndicatorBar(float health, float alpha, float z, float w);
void J3DAPI JonesHud_DrawIndicatorBar(const rdVector4* pPos, float scale, const rdVector4* pColor, float angle, int bArc); // Note, pos is in screen coords
void J3DAPI JonesHud_Draw(const rdMaterial* pMaterial, const JonesHudRect* rect, float z, float rhw, const rdVector4* pColor, int celNum, int bAlpha);

void J3DAPI JonesHud_ProcessMenuItems();
void J3DAPI JonesHud_MenuMoveLeft();
void J3DAPI JonesHud_MenuMoveRight();
void J3DAPI JonesHud_MenuMoveDown();
void J3DAPI JonesHud_SetSelectedMenuItem(int menuId, JonesHudMenuItem* pItem);
void J3DAPI JonesHud_MenuMoveUp();

void J3DAPI JonesHud_BindActivateControlKeys(int* aKeyIds, int numKeys);
int J3DAPI JonesHud_GetKey(unsigned int keyId);
int JonesHud_InitializeMenu(void);
void JonesHud_InitializeMenuSounds(void);

JonesHudMenuItem* J3DAPI JonesHud_NewMenuItem(rdModel3* pItemIcon3);
void J3DAPI JonesHud_FreeMenuItem(JonesHudMenuItem* pItem);
void J3DAPI JonesHud_UpdateItem(JonesHudMenuItem* pItem);
void J3DAPI JonesHud_RenderMenuItems(JonesHudMenuItem* pItem);
// Function formats and displays inventory items and its text
void J3DAPI JonesHud_RenderMenuItem(JonesHudMenuItem* pItem);
void J3DAPI JonesHud_MenuActivateItem();
void J3DAPI JonesHud_ResetMenuItems();
void J3DAPI JonesHud_SetLeftRightItems(JonesHudMenuItem* pItem1, JonesHudMenuItem* pItem2);
void J3DAPI JonesHud_SetDownUpItems(JonesHudMenuItem* pItem1, JonesHudMenuItem* pItem2);
void J3DAPI JonesHud_sub_4198E0(JonesHudMenuItem* pItem);
void J3DAPI JonesHud_sub_419B50(JonesHudMenuItem* pItem);
void J3DAPI JonesHud_InventoryItemChanged(int typeId);
void J3DAPI JonesHud_RenderInventoryItemChange();
void J3DAPI JonesHud_DrawMenuItemIcon(const JonesHudMenuItem* pItem, float scale);

// Returns 1 when bonus map was bought
int JonesHud_ShowLevelCompleted(void);
HANDLE J3DAPI JonesHud_OpenHelp(HANDLE process);
void J3DAPI JonesHud_ShowGameOverDialog(int bPlayDiedMusic);

float J3DAPI JonesHud_GetHealthBarAlpha();
void J3DAPI JonesHud_SetHealthBarAlpha(float a1);

void J3DAPI JonesHud_CutsceneStart(int a1);
int J3DAPI JonesHud_EnableInterface(int bEnable);

int J3DAPI JonesHud_DrawCredits(int bEndCredits, tSoundChannelHandle hSndChannel);

void J3DAPI JonesHud_InitializeGameStatistics();
void J3DAPI JonesHud_RestoreGameStatistics();
void J3DAPI JonesHud_RestoreTreasuresStatistics();

// Helper hooking functions
void JonesHud_InstallHooks(void);
void JonesHud_ResetGlobals(void);

J3D_EXTERN_C_END
#endif // JONES3D_JONESHUD_H
