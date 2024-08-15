#include "lf_guild.h"

namespace LF
{
	namespace GuildManger
	{
		struct TGuild* FindGuild(struct TGuildManagerFunc* self, const char* GuildName)
		{
			if (self == nullptr || self->FindGuild == nullptr || GuildName == nullptr) {
				return nullptr;
			}
			return wrap_call<struct TGuild*>(self->FindGuild, GuildName);
		}

		struct TGuild* GetPlayerGuild(struct TGuildManagerFunc* self, const char* CharName)
		{
			if (self == nullptr || self->GetPlayerGuild == nullptr || CharName == nullptr) {
				return nullptr;
			}
			return wrap_call<struct TGuild*>(self->GetPlayerGuild, CharName);
		}

		bool AddGuild(struct TGuildManagerFunc* self, const char* GuildName, const char* GuildMaster)
		{
			if (self == nullptr || self->AddGuild == nullptr || GuildName == nullptr || GuildMaster == nullptr) {
				return false;
			}
			return wrap_call<bool>(self->AddGuild, GuildName, GuildMaster);
		}

		bool DelGuild(struct TGuildManagerFunc* self, const char* GuildName, bool IsFoundGuild)
		{
			if (self == nullptr || self->DelGuild == nullptr || GuildName == nullptr) {
				return false;
			}
			return wrap_call<bool>(self->DelGuild, GuildName, static_cast<u32>(IsFoundGuild));
		}
	}

	Guild::Guild(struct TGuildFunc* self, struct TGuild* object)
		: self(self), object(object)
	{
	}

	Guild::~Guild() {}

	bool Guild::GetGuildName(char* Dest, u32* DestLen)
	{
		if (self == nullptr || self->GetGuildName == nullptr || Dest == nullptr || DestLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetGuildName, object, Dest, DestLen);
	}

	i32 Guild::GetJoinJob()
	{
		if (self == nullptr || self->GetJoinJob == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetJoinJob, object);
	}

	u32 Guild::GetJoinLevel()
	{
		if (self == nullptr || self->GetJoinLevel == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetJoinLevel, object);
	}

	bool Guild::GetJoinMsg(char* Dest, u32* DestLen)
	{
		if (self == nullptr || self->GetJoinMsg == nullptr || Dest == nullptr || DestLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetJoinMsg, object, Dest, DestLen);
	}

	i32 Guild::GetBuildPoint()
	{
		if (self == nullptr || self->GetBuildPoint == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetBuildPoint, object);
	}

	i32 Guild::GetAurae()
	{
		if (self == nullptr || self->GetAurae == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetAurae, object);
	}

	i32 Guild::GetStability()
	{
		if (self == nullptr || self->GetStability == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetStability, object);
	}

	i32 Guild::GetFlourishing()
	{
		if (self == nullptr || self->GetFlourishing == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetFlourishing, object);
	}

	i32 Guild::GetChiefItemCount()
	{
		if (self == nullptr || self->GetChiefItemCount == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetChiefItemCount, object);
	}

	i32 Guild::GetMemberCount()
	{
		if (self == nullptr || self->GetMemberCount == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetMemberCount, object);
	}

	i32 Guild::GetOnlineMemeberCount()
	{
		if (self == nullptr || self->GetOnlineMemeberCount == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetOnlineMemeberCount, object);
	}

	i32 Guild::GetMasterCount()
	{
		if (self == nullptr || self->GetMasterCount == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetMasterCount, object);
	}

	void Guild::GetMaster(struct TPlayObject** Master1, struct TPlayObject** Master2)
	{
		if (self == nullptr || self->GetMaster == nullptr || Master1 == nullptr || Master2 == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->GetMaster, object, Master1, Master2);
	}

	bool Guild::GetMasterName(char* Master1, u32* Master1Size, char* Master2, u32* Master2Size)
	{
		if (self == nullptr || self->GetMasterName == nullptr || Master1 == nullptr || Master1Size == nullptr || Master2 == nullptr || Master2Size == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetMasterName, object, Master1, Master1Size, Master2, Master2Size);
	}

	bool Guild::CheckMemberIsFull()
	{
		if (self == nullptr || self->CheckMemberIsFull == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->CheckMemberIsFull, object);
	}

	bool Guild::IsMemeber(const char* CharName)
	{
		if (self == nullptr || self->IsMemeber == nullptr || CharName == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsMemeber, object, CharName);
	}

	bool Guild::AddMember(struct TPlayObject* Player)
	{
		if (self == nullptr || self->AddMember == nullptr || Player == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->AddMember, object, Player);
	}

	bool Guild::AddMemberEx(const char* CharName)
	{
		if (self == nullptr || self->AddMemberEx == nullptr || CharName == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->AddMemberEx, object, CharName);
	}

	bool Guild::DelMemeber(struct TPlayObject* Player)
	{
		if (self == nullptr || self->DelMemeber == nullptr || Player == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->DelMemeber, object, Player);
	}

	bool Guild::DelMemeberEx(const char* CharName)
	{
		if (self == nullptr || self->DelMemeberEx == nullptr || CharName == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->DelMemeberEx, object, CharName);
	}

	bool Guild::IsAllianceGuild(struct TGuild* CheckGuild)
	{
		if (self == nullptr || self->IsAllianceGuild == nullptr || CheckGuild == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsAllianceGuild, object, CheckGuild);
	}

	bool Guild::IsWarGuild(struct TGuild* CheckGuild)
	{
		if (self == nullptr || self->IsWarGuild == nullptr || CheckGuild == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsWarGuild, object, CheckGuild);
	}

	bool Guild::IsAttentionGuild(struct TGuild* CheckGuild)
	{
		if (self == nullptr || self->IsAttentionGuild == nullptr || CheckGuild == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsAttentionGuild, object, CheckGuild);
	}

	bool Guild::AddAlliance(struct TGuild* AddGuild)
	{
		if (self == nullptr || self->AddAlliance == nullptr || AddGuild == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->AddAlliance, object, AddGuild);
	}

	bool Guild::AddWarGuild(struct TGuild* AddGuild)
	{
		if (self == nullptr || self->AddWarGuild == nullptr || AddGuild == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->AddWarGuild, object, AddGuild);
	}

	bool Guild::AddAttentionGuild(struct TGuild* AddGuild)
	{
		if (self == nullptr || self->AddAttentionGuild == nullptr || AddGuild == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->AddAttentionGuild, object, AddGuild);
	}

	bool Guild::DelAllianceGuild(struct TGuild* DelGuild)
	{
		if (self == nullptr || self->DelAllianceGuild == nullptr || DelGuild == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->DelAllianceGuild, object, DelGuild);
	}

	bool Guild::DelAttentionGuild(struct TGuild* DelGuild)
	{
		if (self == nullptr || self->DelAttentionGuild == nullptr || DelGuild == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->DelAttentionGuild, object, DelGuild);
	}

	bool Guild::GetRandNameByName(const char* CharName, i32* nRankNo, char* Dest, u32* DestLen)
	{
		if (self == nullptr || self->GetRandNameByName == nullptr || CharName == nullptr || nRankNo == nullptr || Dest == nullptr || DestLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetRandNameByName, object, CharName, nRankNo, Dest, DestLen);
	}

	bool Guild::GetRandNameByPlayer(struct TPlayObject* Player, i32* nRankNo, char* Dest, u32* DestLen)
	{
		if (self == nullptr || self->GetRandNameByPlayer == nullptr || Player == nullptr || nRankNo == nullptr || Dest == nullptr || DestLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetRandNameByPlayer, object, Player, nRankNo, Dest, DestLen);
	}

	void Guild::SendGuildMsg(const char* Msg)
	{
		if (self == nullptr || self->SendGuildMsg == nullptr || Msg == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SendGuildMsg, object, Msg);
	}
}