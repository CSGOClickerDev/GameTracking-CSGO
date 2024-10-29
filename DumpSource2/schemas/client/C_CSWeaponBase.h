class C_CSWeaponBase : public C_BasePlayerWeapon
{
	float32 m_flFireSequenceStartTime;
	int32 m_nFireSequenceStartTimeChange;
	int32 m_nFireSequenceStartTimeAck;
	PlayerAnimEvent_t m_ePlayerFireEvent;
	WeaponAttackType_t m_ePlayerFireEventAttackType;
	HSequence m_seqIdle;
	HSequence m_seqFirePrimary;
	HSequence m_seqFireSecondary;
	CUtlVector< HSequence > m_thirdPersonFireSequences;
	HSequence m_hCurrentThirdPersonSequence;
	int32 m_nSilencerBoneIndex;
	HSequence[7] m_thirdPersonSequences;
	CSWeaponState_t m_ClientPreviousWeaponState;
	CSWeaponState_t m_iState;
	float32 m_flCrosshairDistance;
	int32 m_iAmmoLastCheck;
	int32 m_iAlpha;
	int32 m_iScopeTextureID;
	int32 m_iCrosshairTextureID;
	float32 m_flGunAccuracyPositionDeprecated;
	int32 m_nLastEmptySoundCmdNum;
	uint32 m_nViewModelIndex;
	bool m_bReloadsWithClips;
	GameTime_t m_flTimeWeaponIdle;
	bool m_bFireOnEmpty;
	CEntityIOOutput m_OnPlayerPickup;
	CSWeaponMode m_weaponMode;
	float32 m_flTurningInaccuracyDelta;
	Vector m_vecTurningInaccuracyEyeDirLast;
	float32 m_flTurningInaccuracy;
	float32 m_fAccuracyPenalty;
	GameTime_t m_flLastAccuracyUpdateTime;
	float32 m_fAccuracySmoothedForZoom;
	GameTime_t m_fScopeZoomEndTime;
	int32 m_iRecoilIndex;
	float32 m_flRecoilIndex;
	bool m_bBurstMode;
	GameTime_t m_flLastBurstModeChangeTime;
	GameTick_t m_nPostponeFireReadyTicks;
	float32 m_flPostponeFireReadyFrac;
	bool m_bInReload;
	bool m_bReloadVisuallyComplete;
	GameTime_t m_flDroppedAtTime;
	bool m_bIsHauledBack;
	bool m_bSilencerOn;
	GameTime_t m_flTimeSilencerSwitchComplete;
	int32 m_iOriginalTeamNumber;
	int32 m_iMostRecentTeamNumber;
	bool m_bDroppedNearBuyZone;
	float32 m_flNextAttackRenderTimeOffset;
	bool m_bClearWeaponIdentifyingUGC;
	bool m_bVisualsDataSet;
	bool m_bOldFirstPersonSpectatedState;
	bool m_bUIWeapon;
	int32 m_nCustomEconReloadEventId;
	GameTime_t m_nextPrevOwnerUseTime;
	CHandle< C_CSPlayerPawn > m_hPrevOwner;
	GameTick_t m_nDropTick;
	bool m_donated;
	GameTime_t m_fLastShotTime;
	bool m_bWasOwnedByCT;
	bool m_bWasOwnedByTerrorist;
	float32 m_gunHeat;
	uint32 m_smokeAttachments;
	GameTime_t m_lastSmokeTime;
	float32 m_flNextClientFireBulletTime;
	float32 m_flNextClientFireBulletTime_Repredict;
	C_IronSightController m_IronSightController;
	int32 m_iIronSightMode;
	GameTime_t m_flLastLOSTraceFailureTime;
	int32 m_iNumEmptyAttacks;
	GameTime_t m_flLastMagDropRequestTime;
	float32 m_flWatTickOffset;
};
