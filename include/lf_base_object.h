#ifndef __LF_BASE_OBJECT_H__
#define __LF_BASE_OBJECT_H__

#include "lf_platform.h"
#include "lf_struct.h"

namespace LF
{
	class BaseObject
	{
	public:
		explicit BaseObject(struct TBaseObjectFunc* self, struct TBaseObject* object);
		virtual ~BaseObject();
	public:
		bool GetChrName(char* dest, u32* destLen);
		bool SetChrName(const char* newName);
		void RefShowName();
		void RefNameColor();
		void* GetGender();
		bool SetGender(void* gender);
		void* GetJob();
		bool SetJob(void* job);
		void* GetHair();
		void SetHair(void* hair);
		struct TEnvirnoment* GetEnvir();
		bool GetMapName(char* dest, u32* destLen);
		i32 GetCurrX();
		i32 GetCurrY();
		void* GetDirection();
		bool GetHomeMap(char* dest, u32* destLen);
		i32 GetHomeX();
		i32 GetHomeY();
		void* GetPermission();
		void SetPermission(void* value);
		bool GetDeath();
		u32 GetDeathTick();
		bool GetGhost();
		u32 GetGhostTick();
		void MakeGhost();
		void ReAlive();
		void* GetRaceServer();
		u16 GetAppr();
		void* GetRaceImg();
		i32 GetCharStatus();
		void SetCharStatus(i32 value);
		void StatusChanged();
		i32 GetHungerPoint();
		void SetHungerPoint(i32 value);
		bool IsNGMonster();
		bool IsDummyObject();
		i32 GetViewRange();
		void SetViewRange(i32 value);
		bool GetAbility(struct TAbility* dest);
		bool GetWAbility(struct TAbility* dest);
		void SetWAbility(struct TAbility* value);
		struct TList* GetSlaveList();
		struct TBaseObject* GetMaster();
		struct TBaseObject* GetMasterEx();
		bool GetSuperManMode();
		void SetSuperManMode(bool value);
		bool GetAdminMode();
		void SetAdminMode(bool value);
		bool GetTransparent();
		void SetTransparent(bool value);
		bool GetObMode();
		void SetObMode(bool value);
		bool GetStoneMode();
		void SetStoneMode(bool value);
		bool GetStickMode();
		void SetStickMode(bool value);
		bool GetIsAnimal();
		void SetIsAnimal(bool value);
		bool GetIsNoItem();
		void SetIsNoItem(bool value);
		bool GetCoolEye();
		void SetCoolEye(bool value);
		u16 GetHitPoint();
		void SetHitPoint(u16 value);
		u16 GetSpeedPoint();
		void SetSpeedPoint(u16 value);
		i8 GetHitSpeed();
		void SetHitSpeed(i8 value);
		i32 GetWalkSpeed();
		void SetWalkSpeed(i32 value);
		i8 GetHPRecover();
		void SetHPRecover(i8 value);
		i8 GetMPRecover();
		void SetMPRecover(i8 value);
		i8 GetPoisonRecover();
		void SetPoisonRecover(i8 value);
		void* GetAntiPoison();
		void SetAntiPoison(void* value);
		i8 GetAntiMagic();
		void SetAntiMagic(i8 value);
		i32 GetLuck();
		void SetLuck(i32 value);
		void* GetAttatckMode();
		void SetAttatckMode(void* value);
		void* GetNation();
		bool SetNation(void* nation);
		bool GetNationaName(char* dest, u32* destLen);
		struct TGuild* GetGuild();
		i32 GetGuildRankNo();
		bool GetGuildRankName(char* dest, u32* destLen);
		bool IsGuildMaster();
		bool GetHideMode();
		void SetHideMode(bool value);
		bool GetIsParalysis();
		void SetIsParalysis(bool value);
		u32 GetParalysisRate();
		void SetParalysisRate(u32 value);
		bool GetIsMDParalysis();
		void SetIsMDParalysis(bool value);
		u32 GetMDParalysisRate();
		void SetMDParalysisRate(u32 value);
		bool GetIsFrozen();
		void SetIsFrozen(bool value);
		u32 GetFrozenRate();
		void SetFrozenRate(u32 value);
		bool GetIsCobwebWinding();
		void SetIsCobwebWinding(bool value);
		u32 GetCobwebWindingRate();
		void SetCobwebWindingRate(u32 value);
		u32 GetUnParalysisValue();
		void SetUnParalysisValue(u32 value);
		bool GetIsUnParalysis();
		u32 GetUnMagicShieldValue();
		void SetUnMagicShieldValue(u32 value);
		bool GetIsUnMagicShield();
		u32 GetUnRevivalValue();
		void SetUnRevivalValue(u32 value);
		bool GetIsUnRevival();
		u32 GetUnPosionValue();
		void SetUnPosionValue(u32 value);
		bool GetIsUnPosion();
		u32 GetUnTammingValue();
		void SetUnTammingValue(u32 value);
		bool GetIsUnTamming();
		u32 GetUnFireCrossValue();
		void SetUnFireCrossValue(u32 value);
		bool GetIsUnFireCross();
		u32 GetUnFrozenValue();
		void SetUnFrozenValue(u32 value);
		bool GetIsUnFrozen();
		u32 GetUnCobwebWindingValue();
		void SetUnCobwebWindingValue(u32 value);
		bool GetIsUnCobwebWinding();
		struct TBaseObject* GetTargetCret();
		void SetTargetCret(struct TBaseObject* targetCret);
		void DelTargetCreat();
		struct TBaseObject* GetLastHiter();
		struct TBaseObject* GetExpHitter();
		struct TBaseObject* GetPoisonHitter();
		struct TBaseObject* GetPoseCreate();
		bool IsProperTarget(struct TBaseObject* target);
		bool IsProperFriend(struct TBaseObject* target);
		bool TargetInRange(struct TBaseObject* target, i32 nX, i32 nY, i32 nRange);
		void SendMsg(struct TBaseObject* target, i32 wIdent, i32 wParam, i32 nParam1, i32 nParam2, i32 nParam3, const char* sMsg);
		void SendDelayMsg(struct TBaseObject* target, i32 wIdent, i32 wParam, i32 nParam1, i32 nParam2, i32 nParam3, const char* sMsg, u32 dwDelay);
		void SendRefMsg(i32 wIdent, i32 wParam, i32 nParam1, i32 nParam2, i32 nParam3, const char* sMsg, u32 dwDelay);
		void SendUpdateMsg(struct TBaseObject* target, i32 wIdent, i32 wParam, i32 nParam1, i32 nParam2, i32 nParam3, const char* sMsg);
		bool SysMsg(const char* sMsg, void* fColor, void* bColor, i32 msgType);
		struct TList* GetBagItemList();
		bool IsEnoughBag();
		bool IsEnoughBagEx(i32 addCount);
		bool AddItemToBag(struct TUserItem* userItem);
		bool DelBagItemByIndex(i32 index);
		bool DelBagItemByMakeIdx(i32 makeIndex, const char* itemName);
		bool DelBagItemByUserItem(struct TUserItem* userItem);
		bool IsInSafeZone();
		bool IsPtInSafeZone(struct TEnvirnoment* envir, i32 nX, i32 nY);
		void RecalcLevelAbil(bool isSysDef);
		void RecalcAbil();
		i32 RecalcBagWeight();
		u32 GetLevelExp(i32 nLevel);
		void HasLevelUp(i32 nLevel);
		bool TrainSkill(struct TUserMagic* userMagic, i32 nTranPoint, bool isDoCheck);
		bool CheckMagicLevelup(struct TUserMagic* userMagic);
		void MagicTranPointChanged(struct TUserMagic* userMagic);
		void DamageHealth(i32 nDamage, struct TBaseObject* struckFrom);
		void DamageSpell(i32 nSpellPoint);
		void IncHealthSpell(i32 nHP, i32 nMP, bool sendChangedToClient);
		void HealthSpellChanged(u32 dwDelay);
		void FeatureChanged();
		void WeightChanged();
		i32 GetHitStruckDamage(struct TBaseObject* target, i32 nDamage, struct MagicACInfo* magicACInfo, i32 nType);
		i32 GetMagStruckDamage(struct TBaseObject* target, i32 nDamage);
		bool GetActorIcon(i32 index, struct TActorIcon* actorIcon);
		bool SetActorIcon(i32 index, struct TActorIcon* actorIcon);
		void RefUseIcons();
		void RefUseEffects();
		void SpaceMove(const char* sMapName, i32 nX, i32 nY, i32 nInt);
		void MapRandomMove(const char* sMapName, i32 nInt);
		bool CanMove();
		bool CanRun(i32 nCurrX, i32 nCurrY, i32 nX, i32 nY);
		void TurnTo(void* btDir);
		bool WalkTo(void* btDir, bool boFlag);
		bool RunTo(void* btDir, bool boFlag);
		struct TList* PluginList();
	private:
		struct TBaseObjectFunc* self;
		struct TBaseObject* object;
	};
}

#endif // __LF_BASE_OBJECT_H__