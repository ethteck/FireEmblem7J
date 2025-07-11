#pragma once

#include "global.h"

int GetPlayerLeaderUnitId(void);
int GetItemIndex(int item);
void UnitHideIfUnderRoof(struct Unit * unit);
void CharStoreAI(struct Unit * unit, const struct UnitDefinition * uDef);
int GetAutoleveledStatIncrease(int growth, int levelCount);
int GetCurrentPromotedLevelBonus(void);
int GetStatIncrease(int growth);
void ClearUnitSupports(struct Unit * unit);
void sub_802A21C(void);
void PidStatsAddMove(u8 pid, int amount);
void PidStatsSubFavval08(u8 pid);
void BeginTargetList(int x, int y);
void EnlistTarget(int x, int y, int uid, int extra);
void RenderMap(void);
void RenderMapForFade(void);
void RefreshEntityMaps(void);
void StartMapFade(bool locksGame);
void RefreshUnitSprites(void);
void sub_807B32C(void);
void sub_80799E4(void);
char * DecodeMsg(int id);
void EnableAllLightRunes(void);
void DisableAllLightRunes(void);
void PidStatsRecordBattleRes(void);
void PidStatsAddBattleAmt(struct Unit * unit);
int GetBallistaItemAt(int xPos, int yPos);
int GetUnitSupportBonuses(struct Unit * unit, struct SupportBonuses * bonuses);
bool sub_8028620(struct Unit * unit);
void PidStatsAddExpGained(u8 pid, int expGain);
int GetMapChangeIdAt(int x, int y);
void StartBattleManim(void);
void WriteSuspendSave(int slot);
void StartBgmVolumeChange(int volume_from, int volume_to, int duration, ProcPtr parent);
void FadeBgmOut(int volume);
void PutUiHand(int x, int y);
void DisplayBmTextShadow(int x, int y);
void TryLockParentProc(ProcPtr);
void TryUnlockParentProc(ProcPtr);

/* sprite-anim.h */
/* game-ctrl.h */

// DecodeMsg
// DecodeMsgInBuffer
// sub_8013374
// sub_8013488

/* util.h */
/* bm.h */

void nullsub_38(void);

void DecayTraps(void);

int GetTextPrintDelay();
int IsFirstPlaythrough(void);
void InitPlayConfig(int);
// ResetBmSt
void StartBattleMap(/* TODO */);
// RestartBattleMap
void ResumeChapterFromSuspend(/* TODO */);
// RefreshBMapDisplay_FromBattle
// BMapDispResume_FromBattleDelayed
// InitMoreBMapGraphics
// RefreshBMapGraphics
// StartMapMain
// EndMapMain
void CleanupUnitsBeforeChapter(void);
// ResumeMapMainDuringPhase
// ResumeMapMainDuringAction
// ResumeMapMainDuringBerserk
// ResumeMapMainDuringArena
// ResumeMapMainDuringPhaseChange
void sub_802EB7C(/* TODO */);
void sub_802EBA0(/* TODO */);
char *GetTacticianName();
void SetTacticianName(const char *name);
// sub_802EBCC
// sub_802EBD4
// sub_802EBF8
// GetConvoyItemCount
// AddItemToConvoy
// RemoveItemFromConvoy
// GetConvoyItemSlot
// sub_802ECE4
// sub_802ED30
// GetSupplyUnit
// InitUnitStack
// PushUnit
// LoadPlayerUnitsFromUnitStack
// LoadPlayerUnitsFromUnitStack2
// sub_802EE6C
// sub_802EF4C
// sub_802EF68
// sub_802EF8C
// sub_802EFB8
// sub_802EFE4
// sub_802F0B0
// sub_802F0C8
// sub_802F0E4
// sub_802F154
// sub_802F240
// sub_802F290
// sub_802F2E0
// sub_802F428
// sub_802F578
// sub_802F5A0
// sub_802F5AC
// sub_802F5B8
// sub_802F5C4
// sub_802F624
// sub_802F64C
// sub_802F6A0
// sub_802F6C4
// sub_802F6D4
// sub_802F6E4
// sub_802F7F4
// sub_802F848
// sub_802F858
// sub_802F870
// sub_802F900
// sub_802F92C
// sub_802F97C
// sub_802F990
// sub_802F9E0
// sub_802FA0C
// sub_802FAB4
// sub_802FB5C
// sub_802FC04
// sub_802FC10
// sub_802FC20
// sub_802FCD4
// sub_802FD04
// sub_802FD28
// sub_802FD68
// sub_802FD88
// sub_802FE20
// sub_802FE2C
// sub_802FE70
// sub_802FE90
// sub_802FF34
// sub_802FF60
// sub_802FF80
// sub_802FF94
// sub_8030038
// sub_80300BC
// sub_803012C
// sub_803022C
// sub_80302D0
// sub_8030314
// sub_8030340
// sub_80303BC
// sub_8030448
// sub_8030600
// sub_8030664
// sub_80306D4
// sub_8030718
// sub_80307D4
// GetPlayerLeaderUnitId
// sub_8030814
// sub_8030870
// sub_803087C
// sub_8030890
// PrepMapMenu_OnStartPress
// PrepMapMenu_OnBPress
// sub_80308E8
// sub_8030948
// sub_8030958
// sub_8030988
// sub_8030998
// sub_80309BC
// PrepScreenProc_InitMapMenu
// sub_8030A14
// sub_8030A30
// sub_8030A5C
// sub_8030A90
// sub_8030AB8
// StartPrepHelpPrompt
// PrepMapMenu_OnEnd
// PrepScreenProc_StartMapMenu
// sub_8030C68
// sub_8030C88
// sub_8030CB0
// sub_8030CCC
// sub_8030CEC
// sub_8030D08
// sub_8030D88
// sub_8030DFC
// sub_8030E48
// sub_8030E80
// sub_80310FC
// sub_8031114
// sub_8031198
// sub_80312E8
// sub_8031318
// sub_80313A0
// sub_80313B8
// sub_80313D4
// sub_80313E8
// sub_8031440
// sub_803157C
// sub_8031594
// sub_8031610
// sub_8031634
// sub_8031648
// sub_8031664
// EndPrepScreen
// PrepScreenExists
// sub_8031758
// sub_80317EC
// sub_803186C
// sub_80318B4
// sub_80318D0
// sub_80318EC
// sub_803192C
// sub_8031958
// sub_8031994
// GetChapterInfo
// GetChapterMapPointer
// sub_8031AC0
struct ChapterEventGroup * GetChapterEventInfo(u32);
// sub_8031B1C
// sub_8031B40
// sub_8031B54
// sub_8031B6C
// sub_8031BF8
// sub_8031C24
// sub_8031C6C
// sub_8031D9C
// sub_8031DC4
// sub_8031E18
// sub_8031E58
// sub_8031E8C
// sub_8031EC0
// sub_8031EF4
// sub_8031F4C
// sub_8031F80
// sub_8031FAC
// sub_8031FD0
// sub_80320D8
// sub_80321EC
// sub_803232C
// sub_8032340
// sub_803238C
// sub_80323AC
// sub_8032420
// sub_8032434
// sub_803248C
// sub_80324AC
// sub_803252C
// sub_803255C
// sub_8032594
// sub_803264C
// sub_8032710
// sub_8032748
// sub_803280C
// InitSubtitleHelpText
// sub_803293C
// sub_80329A0
// sub_80329BC
// sub_80329D4
// sub_8032A00
// sub_8032A20
// sub_8032A44
// StartSubtitleHelp
// sub_8032AD0
// sub_8032B4C
// sub_8032C40
// sub_8032CA0
void sub_8032CCC(void);
bool sub_8032CDC(void);
void sub_8032CF4(ProcPtr proc, const char *str);
// ApplyHazardHealing
// sub_8032D68
// BeginUnitHealAnim
// sub_8032DD0
// BeginUnitCritDamageAnim
// sub_8032EA0
// sub_8032EF8
// sub_8032F90
// sub_8032FF8
// sub_8033030
// sub_80330DC
// sub_8033134
// sub_8033148
// sub_803315C
// sub_8033170
// sub_80331C8
// sub_8033224
// sub_8033254
// sub_8033280
// sub_80332AC
// StartStatusHealEffect
// TerrainHealDisplay_Init
// MassEffectDisplay_Check
// MassEffectDisplay_Watch
// TerrainHealDisplay_Display
// FinishDamageDisplay
// TerrainHealDisplay_Next
// PoisonDamageDisplay_Init
// sub_8033518
// sub_8033544
// sub_80335B4
// sub_80335D8
// sub_8033624
// sub_8033648
// sub_8033650
// sub_80336E0
// sub_8033710
// sub_8033820
// GetBattleForecastPanelSide
// sub_80338B8
// sub_8033940
// sub_803397C
// sub_80339C0
// sub_8033A04
// sub_8033A38
// DrawBattleForecastContentsStandard
// sub_8033D60
// DrawBattleForecastContents
// sub_8033FE8
// InitBattleForecastFramePalettes
// sub_8034070
// sub_8034100
// PutBattleForecastTilemaps
// PutBattleForecastWeaponTriangleArrows
// PutBattleForecastMultipliers
// UpdateBattleForecastEffectivenessPalettes
// BattleForecast_LoopDisplay
// BattleForecast_OnNewBattle
// BattleForecast_LoopSlideIn
// BattleForecast_LoopSlideOut
// Bksel_WaitMapEventEngine
// NewBattleForecast
// UpdateBattleForecastContents
// CloseBattleForecast
// StartBattleForecastHelpBox
// GetBkselHelpBoxMsg
// HbPopulate_BkselWTriEffA
// HbPopulate_BkselWTriEffB
// RegisterTrapDeathBWL
// ExecFireTileTrapAnim1
// ExecFireTileTrapAnim2
// ApplyTrapDamageAnim
// ApplyTrapDamageReal
// GetPickTrapType
// ExecTrap
// HandlePostActionTraps
// ExecTrapAfterWarp
// ExecTrapAfterDropAction
// ExecTrapAfterDeathDrop
// LoadChapterTraps
// sub_8034B70
// GetBallistaItemAt
// sub_8034BE8
// sub_8034C18
// sub_8034C48
// sub_8034C80
// sub_8034CBC
// sub_8034CD0
// sub_8034CF8
// sub_8034D14
// sub_8034D34
// sub_8034D3C
// GetCurrentPromotedLevelBonus
// sub_8034D5C

/* ai.h */
/* sio.h */
/* banim.h */

// sub_806BFD0
// sub_806BFE4
// sub_806C044
// sub_806C064
// sub_806C0C8
// sub_806C0D4
// sub_806C0E8
// sub_806C114
// sub_806C178
// sub_806C1A4
// GetWeaponAnimActorCount
// sub_806C1E8
// GetWeaponAnimManimSpecialScr
// sub_806C208
// sub_806C218
// sub_806C228

/*mu.h */

// sub_806E630
// sub_806E678
// sub_806E698
// sub_806E6DC
// sub_806E730
// sub_806E76C
// sub_806E7EC
// sub_806E840
// sub_806E8DC
// sub_806E930
// sub_806E94C
// sub_806E974
// sub_806EA0C
// sub_806EA64
// GetUnitMu

/* mapanim.h */
/* scanline.h */
/* eventcall.h */
/* statscreen.h */

void LoadHelpBoxGfx(void * vram, int palId);
// sub_8083000
void PutSpriteTalkBox(int x, int y, int w, int h, int unk);
// sub_8083268
// sub_80832E0
// sub_808335C
// sub_80833B4
// sub_808341C
// sub_80834D8
// sub_808356C
// sub_80835D8
// sub_808364C
// sub_808368C
void StartHelpBoxTextInit(int msg, int item);
void ClearHelpBoxText(void);
// sub_80837E0
// sub_8083808
// sub_8083838
// sub_8083860
// sub_8083880
// sub_8083950
// sub_8083980
// sub_80839A4
// sub_80839C4
// sub_80839D8
// sub_80839F0
// sub_8083A08
// sub_8083A48
// sub_8083AC0
// sub_8083AC8
// sub_8083AD8
// sub_8083B28
// sub_8083B48
// sub_8083B80
void SetDialogueBoxConfig(int a);
// GetDialogueBoxConfig
// sub_8083BB4
// InitBoxDialogue
// sub_8083DAC
// sub_8083E34
// sub_8083E44
// sub_8083E78
// sub_8083EA8
// sub_8083EE0
// sub_8083F70
// sub_8083F98
// sub_8083FBC
// EndMergeBoxDialogue
// StartBoxDialogueSimple
void StartBoxDialogueExt(int x, int y, int msgId, u16* unkA, int unkB, ProcPtr parent);
// GetBoxDialogueSize
// DialogBoxGetGlyphLen
// DrawBoxDialogueText
// sub_80842F8
// sub_8084608
// sub_8084640
// sub_8084664
// sub_8084688
// sub_80846E4
// sub_8084CEC
// sub_8084D1C
// sub_8084D68
// sub_8084DA8
// sub_8084DD4
// sub_8084E68
// sub_8084E8C
// sub_8084FC4
// sub_8085008
// sub_80850A8
// sub_80850BC
// sub_80850D8
// sub_8085110
// sub_808512C
// PutMapUiHpBarLeft
// PutMapUiHpBarMid
// PutMapUiHpBarRight
// PutMapUiHpBar
// sub_8085254
// sub_80853CC
// sub_8085530
// sub_8085658
// sub_808578C
// sub_80857E0
// sub_8085824
// sub_808586C
// sub_808588C
// sub_80858B0
// sub_80858D8
// sub_80859B0
// sub_8085B0C
// sub_8085C4C
// sub_8085C8C
// sub_8085DF4
// sub_8085E6C
// sub_8086044
// sub_808606C
// sub_8086110
// sub_80861B4
// sub_80861DC
// sub_8086288
// sub_8086368
// sub_80863B4
// sub_80863E0
// sub_80864DC
// sub_8086668
// EndPlayerPhaseSideWindows
// sub_80866DC
// sub_80866FC
// sub_8086748
// sub_80867D8
// sub_8086960
// sub_80869F8
// sub_8086BB8
// sub_8086C00
// nullsub_71
// nullsub_72
// nullsub_73
// sub_8086C68
// sub_8086CFC
// sub_8086D58
// sub_8086D88
// sub_8086E0C
// sub_8086E98
// sub_8086ED4
// sub_8086F18
// sub_8086FC0
// OnVBlank_SioError
// OnMain_SioErrorWait
// PutSioErrorMessage
// OnMain_SioError
// StartSioErrorScreen
// StartChapterStatusHelpBox
// sub_8087208
// sub_8087230
// sub_808726C
// sub_80872A4
// sub_80872E4
// sub_808734C
// sub_8087380
// sub_80873B4
// sub_80875FC
// sub_80877FC
// sub_808781C
// sub_8087864
// sub_80878A8
// sub_80879E4
// sub_8087B00
// sub_8087B2C
// NewChapterStatusScreen
// sub_8087B80
// sub_8087B98
// sub_8087C6C
// SetCgTextFlags
// SetCgTextFlag
// ClearCgTextFlag
// GetCgTextFlags
// SetCgTextBlendControl
// GetCgTextBlendControl
// sub_8087EC8
// sub_8087EE0
// sub_8087EEC
// sub_8087F60
// sub_8088024
// sub_80883C0
// sub_80883C8
// sub_8088404
// sub_8088464
// sub_80884A8
// sub_80884E0
// sub_8088520
// sub_8088548
// StartCgText
// EndCgText
bool sub_80886E0(void);
// sub_80886FC
// sub_8088718
// sub_8088768
// sub_80887B4
// sub_8088834
// sub_8088884
// sub_8088A20
// sub_8088C78
// sub_8088D08
// sub_808929C
// sub_8089308
// sub_8089310
// sub_8089394
// sub_80893BC
// sub_80893E0
// sub_80893F4
// sub_808940C
// StartYesNoChoice
// sub_808954C
// sub_80895BC
// sub_8089638
// sub_80896EC
// sub_8089720
// sub_80897E0
// sub_808989C
// sub_8089998
// sub_8089AA8
// sub_8089B34
// sub_8089B60
// sub_8089B80
// sub_8089BDC
// nullsub_21
// sub_8089EBC
// sub_8089FCC
// sub_808A074
// sub_808A0F4
// sub_808A4F8
// sub_808A55C
// sub_808A604
// sub_808A6AC
// sub_808A730
// sub_808A7CC
// sub_808AB70
// sub_808AE64
// sub_808AF78
// sub_808B038
// sub_808B0CC
// sub_808B288
// sub_808B450
// sub_808B468
// sub_808B4C0
// sub_808B4F0
// sub_808B520
// sub_808B5E4
// sub_808B654
// sub_808BF14
// SortUnitList

/* prepscreen.h */

// GetSupportScreenUnitCount
// GetNextSupportScreenUnit
// GetPreviousSupportScreenUnit
// GetSupportScreenPartnerSupportLevel
// sub_809BA60
// sub_809BA78
// sub_809BA94
// sub_809BAB8
// GetSupportScreenClassIdAt
// GetSupportClassForCharId
// sub_809BB30
// sub_809BB58
// sub_809BB98
// sub_809BE18
// sub_809BE88
// sub_809BEC4
// sub_809BF40
// sub_809BFB8
// sub_809BFCC
// sub_809C038
// sub_809C0C8
// sub_809C3EC
// sub_809C410
// sub_809C448
// sub_809C7B4
// sub_809C7CC
// StartSupportScreenFromPrepScreen
// StartSupportScreen
// sub_809C838
// sub_809C92C
// UiSupport_GetSupportTalkSong
// sub_809C980
// sub_809C9F8
// sub_809CAFC
// sub_809CB24
// sub_809CD78
// sub_809CDA0
// sub_809CDD0
// sub_809CE20
// sub_809CEA8
// sub_809CEC8
// sub_809CFD8
// sub_809D1C8
// InitSupportSubScreenPartners
// sub_809D420
// sub_809D450
// sub_809D4D0
// sub_809D528
// sub_809D5A4
// sub_809D5F0
// sub_809D648
// sub_809D850
// sub_809DA10
// sub_809DAD4
// sub_809DB74
// sub_809DC44
// sub_809DCEC
// sub_809DD98
// sub_809DE40
// sub_809DEEC
// sub_809DFE8
// sub_809E0C0
// SupportSubScreen_PrepareSupportConvo
// sub_809E134
// StartSupportUnitSubScreen
// sub_809E190
// sub_809E1A8
// sub_809E1B8
// sub_809E1CC
// sub_809E218
// sub_809E244
// sub_809E25C
// sub_809E298
// sub_809E32C
// sub_809E3BC
// sub_809E3FC
// sub_809E4D0
// sub_809E5F0
// sub_809E6C0
// sub_809E794
// sub_809E7C4
// sub_809E7FC
// sub_809E8F0
// sub_809E9DC
// sub_809EAAC
// sub_809EB74
// sub_809EC74
// nullsub_80
// sub_809EDC0
// sub_809EDF0
// sub_809EE0C
// nullsub_81

/* save.h */
/* chapter-title.h */
/* cursor_hand.h */

// sub_80AB970
// sub_80ABAAC
// sub_80ABAE0
// sub_80ABAEC
// sub_80ABB08
// sub_80ABB24
// sub_80ABB50
// sub_80ABB94
// sub_80ABBB4
// sub_80ABC04
// sub_80ABC28
// sub_80ABC4C
// sub_80ABC5C
// sub_80ABC60
// sub_80ABC78
// sub_80ABCB0
// sub_80ABCD0
// sub_80ABD24
// nullsub_86
// sub_80ABE84
// sub_80ABEA8
// sub_80ABEF0
// sub_80ABF30
// sub_80AC0AC
// sub_80AC10C
// sub_80AC16C
// sub_80AC1A4
// sub_80AC1EC
// nullsub_87
// sub_80AC1F8
// sub_80AC304
// sub_80AC324
// sub_80AC3D0
// sub_80AC42C
// sub_80AC490
// sub_80AC4C0
// sub_80AC4E8
// sub_80AC538
// sub_80AC640
// sub_80AC670
// sub_80AC680
// sub_80AC998
// sub_80AC9E4
// sub_80ACA1C
// sub_80ACA44
// sub_80ACC30
// sub_80ACC60
// sub_80ACC74
// sub_80ACDD8
// sub_80ACEAC
// sub_80ACEE4
// sub_80ACF54
// sub_80ACF68
// sub_80ACFB4
// sub_80ACFC8
// sub_80AD058
// sub_80AD100
// sub_80AD190
// sub_80AD1A4
// sub_80AD260
// sub_80AD2D0
// sub_80AD39C
// sub_80AD424
// sub_80AD460
// sub_80AD53C
// sub_80AD544
// sub_80AD664
// sub_80AD678
// sub_80AD688
// sub_80AD6C0
// sub_80AD704
// sub_80AD738
// sub_80AD754
// sub_80AD778
// sub_80AD7DC
// sub_80AD818
// sub_80AD914
// sub_80AD920
// sub_80AD968
// sub_80AD97C
// sub_80AD994
// sub_80AD9D0
// sub_80ADA3C
// sub_80ADAA0
// sub_80ADBCC
// sub_80ADD5C
// sub_80ADD88
// sub_80ADE30
// sub_80ADE84
// sub_80AE0D4
// sub_80AE33C
// sub_80AE3AC
// sub_80AE3C4
// sub_80AE584
// sub_80AE608
// sub_80AE6D4
// sub_80AE740
// sub_80AE970
// sub_80AE9A8
// sub_80AE9F4
// sub_80AEA10
// sub_80AEA24
// sub_80AEA50
// sub_80AEA60
// sub_80AEA94
// sub_80AEAA4
// sub_80AEB3C
// sub_80AEBDC
// sub_80AEC4C
// sub_80AECCC
// sub_80AEDA8
// sub_80AEDC0
// sub_80AEEB8
// sub_80AF114
// sub_80AF130
// sub_80AF194
// sub_80AF278
// sub_80AF3F4
// sub_80AF608
// sub_80AF68C
// sub_80AF8F8
// sub_80AF93C
// sub_80AF944
// nullsub_88
// sub_80AF984
// sub_80AFA70
// sub_80AFB94
// sub_80AFBE8

/* lord-select.h */

// sub_80AFE38
// sub_80AFF74
// sub_80B0048
// sub_80B00A0
// sub_80B0100
// sub_80B0160
void sub_80B0170(ProcPtr parent, int);
// sub_80B018C
// sub_80B01BC
// sub_80B0300
// sub_80B0330
// sub_80B03B4
// sub_80B03D4
// sub_80B03E0
// sub_80B044C
// sub_80B04EC
// sub_80B05B8
// sub_80B05F0
// sub_80B0634
// sub_80B065C
// sub_80B0694
// sub_80B06B4
// sub_80B0714
// sub_80B07EC
// sub_80B0BF4
// sub_80B0C30
// sub_80B0D64
// sub_80B0DF8
// sub_80B0E7C
void sub_80B0EBC(ProcPtr parent, int);
// sub_80B0EDC
// sub_80B0F5C
// sub_80B10B8
// sub_80B10CC
int sub_80B10D4(int, int);
// sub_80B1110
// sub_80B1148
// sub_80B1174
// sub_80B11DC
// sub_80B11FC
// sub_80B121C
// sub_80B123C
// sub_80B125C
// sub_80B127C
// sub_80B1348
// sub_80B13B0
// sub_80B13E4
// sub_80B1418
// sub_80B1428
// sub_80B1454
// sub_80B14B8
// sub_80B14D0
// sub_80B1560
// sub_80B15F0
// sub_80B1630
// sub_80B18D4
// sub_80B1908
// sub_80B1978
// sub_80B19AC
// sub_80B19DC
// sub_80B1A0C
// sub_80B1A24
// sub_80B1A44
// sub_80B1A5C
// sub_80B1A74
// sub_80B1A8C
// sub_80B1AC4
// sub_80B1D44
// sub_80B1E0C
// sub_80B1E24
// sub_80B1E4C
// sub_80B1E64
// sub_80B1E90
// sub_80B1EBC
// sub_80B1ED4
// sub_80B2108
// sub_80B2140
// sub_80B217C
// sub_80B25C8
// sub_80B266C
// sub_80B26A4
// sub_80B26DC
// sub_80B2714
// sub_80B27D8
// sub_80B28D8
// sub_80B2904
// sub_80B29AC
// sub_80B2A70
// sub_80B2A9C
// sub_80B2AF8
// sub_80B2B64
// sub_80B2BB4
// sub_80B2BDC
// sub_80B2C14
// sub_80B2C4C
// sub_80B2D3C
// sub_80B2D50
// sub_80B2D90
// sub_80B2DD4
// sub_80B2E44
// sub_80B2EC0
// sub_80B2FC8
// sub_80B2FE4
// sub_80B3070
// sub_80B30E0
// sub_80B31DC
// sub_80B3310
// sub_80B332C
// sub_80B3350
// sub_80B336C
// sub_80B3398
// sub_80B33C4
// sub_80B33F4
// sub_80B3418
// sub_80B3448
// sub_80B34A0
// sub_80B34C8
// sub_80B34E8
// sub_80B3874
// sub_80B38AC
// sub_80B38E4
// sub_80B3908
// sub_80B3968
// sub_80B39BC
// sub_80B39D4
// sub_80B39EC
// sub_80B3A08
// sub_80B3A84
// sub_80B3A9C
// sub_80B3AB4
// sub_80B3B44
// sub_80B3BA4
// sub_80B3BD0
// sub_80B3C1C
// sub_80B3CD4
// sub_80B3D30
// sub_80B3D4C
// sub_80B3D64
// sub_80B3D98
// sub_80B3DB8
// sub_80B3DD4
// sub_80B3DE4
// sub_80B3DF0
// sub_80B3E60
// sub_80B3E94
// sub_80B3F48
// sub_80B4050
// sub_80B40D8
// sub_80B4104
// sub_80B4170
// sub_80B41F0
// sub_80B41FC
// sub_80B4208
// sub_80B44D8
// sub_80B4534
// sub_80B4558
// sub_80B45DC
// sub_80B45FC
// sub_80B4690
// sub_80B4750
// sub_80B4778
// sub_80B4810
// sub_80B4934
// sub_80B49A8
// sub_80B4A20
// sub_80B4A3C
// sub_80B4A50
// sub_80B4A90
// sub_80B4AC8
// sub_80B4B08
// sub_80B4B58
// sub_80B4BB0
// sub_80B4BDC
// sub_80B4BF0
// sub_80B4C34
// sub_80B4C58
// sub_80B4CB0
// sub_80B4CD0
// sub_80B4CEC
// sub_80B50F4
// sub_80B511C
// sub_80B5130
// sub_80B5148
// sub_80B519C
// sub_80B520C
// sub_80B5330
// sub_80B5430
// sub_80B549C
// sub_80B5558
// sub_80B5600
// sub_80B5648
// sub_80B56B0
// sub_80B5724
// sub_80B58FC
// sub_80B5934
// sub_80B5970
// sub_80B59AC
// sub_80B5A48
// sub_80B5A80
// sub_80B5B34
// sub_80B5B6C
// sub_80B5CA8
// sub_80B5D64
// sub_80B5D78
// nullsub_5
// nullsub_6
// nullsub_4
// nullsub_3
// sub_80B5D98
// sub_80B5DBC
// sub_80B5E04
// sub_80B5E50
// sub_80B5EE4
// sub_80B60A0
// nullsub_89
// sub_80B60F0
// sub_80B6170
// sub_80B6240
// sub_80B6250
// sub_80B6374
// sub_80B63AC
// sub_80B63DC
// StartWorldMapEvent
// sub_80B6444
// sub_80B6450
// sub_80B6464
// sub_80B647C
// sub_80B6580
// sub_80B65CC
// sub_80B6664
// sub_80B66C0
// sub_80B6754
// sub_80B67B0
// sub_80B68A4
// sub_80B6920
// sub_80B6964
// sub_80B698C
// sub_80B69A0
// sub_80B6A1C
// sub_80B6B60
// sub_80B6BBC
// sub_80B6C8C
// sub_80B6DCC
// sub_80B6DEC
// sub_80B6E40
// WorldFlushInit
// WorldFlushOut
// sub_80B7018
// sub_80B7070
// sub_80B7084
// sub_80B7094
// sub_80B70A4
// sub_80B70D0
// sub_80B7100
// sub_80B71F8
// sub_80B7230
// sub_80B7328
// sub_80B735C
// sub_80B73FC
// sub_80B7448
// sub_80B7480
// sub_80B74C0
// sub_80B7540
// sub_80B7578
// sub_80B75A4
// sub_80B75DC
// sub_80B75FC
// nullsub_90
// sub_80B7654
// sub_80B76D0
// sub_80B776C
// sub_80B77A0
void ComputeChapterRankings(void);
// sub_80B7968
// nullsub_91
void sub_80B7980(u16 *, int, int, int, int);
// sub_80B79FC
// sub_80B7A74
// sub_80B7B30
// sub_80B7B4C
// sub_80B7BBC
// sub_80B7BCC
// sub_80B7C10
// sub_80B7C40
// sub_80B7C6C
// sub_80B7CB0
// sub_80B7D64
// sub_80B7E60
// sub_80B7F54
// sub_80B7FA0
// sub_80B7FC8
// sub_80B8010
// sub_80B8054
// sub_80B8084
// sub_80B80E0
// sub_80B812C
// sub_80B8198
// sub_80B81B4
// sub_80B8260
// sub_80B82DC
// sub_80B8384
// sub_80B8418
// sub_80B8464
// sub_80B8484
// sub_80B84A4
// sub_80B84C0
// sub_80B8588
// sub_80B85C0
// sub_80B85F4
// sub_80B86C0
// sub_80B87F0
// sub_80B8808
// sub_80B88FC
// sub_80B8958
// sub_80B89AC
// sub_80B89C0
// sub_80B8A0C
// sub_80B8A20
// sub_80B8A38
// sub_80B8A40
// sub_80B8AB4
// sub_80B8AF0
// sub_80B8B64
// sub_80B8B88
// sub_80B8BF8
// sub_80B8C14
// sub_80B8C38
// sub_80B8C5C
// sub_80B8D64
// sub_80B8D8C
// sub_80B8DFC
// sub_80B8E80
// sub_80B8ECC
// sub_80B8F48
// sub_80B8F84
// sub_80B8FC0
// sub_80B8FF4
// sub_80B9038
// sub_80B916C
// sub_80B91C4
// sub_80B91D8
// sub_80B9244
// sub_80B9250
// sub_80B9270
// sub_80B9284
// sub_80B92E8
// sub_80B94A0
// sub_80B94EC
// sub_80B950C
// sub_80B96F0
// sub_80B9750
// sub_80B97A0
// sub_80B97EC
// sub_80B980C
// sub_80B98F8
// sub_80B99D8
// sub_80B99F8
// DrawFinImage
// sub_80B9A4C
// sub_80B9AC4
// sub_80B9B1C
// sub_80B9B80
// sub_80B9BD4
void sub_80B9C0C(/* TODO */);
// sub_80B9C20
// sub_80B9C88
// sub_80B9CBC
// sub_80B9DAC
// sub_80B9EA0
// sub_80BA15C
// sub_80BA204
// sub_80BA640
// sub_80BA85C
// sub_80BA8DC
// sub_80BA918
// sub_80BA948
// sub_80BA960
// sub_80BAA54
// sub_80BAA80
// sub_80BAA8C
void sub_80BAAB8(/* TODO */);
// sub_80BAACC
// sub_80BAAE0
// sub_80BAC14
// sub_80BAD64
// sub_80BAE14
// sub_80BAE58
// sub_80BAE6C
// sub_80BAEA8

/* titlescreen.h */
