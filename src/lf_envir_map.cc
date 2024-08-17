#include "lf_envir_map.h"

namespace LF
{
	namespace Map
	{
		struct TEnvirnoment* FindMap(struct TMapManagerFunc* self)
		{
			if (self == nullptr) {
				return nullptr;
			}

			return wrap_call<struct TEnvirnoment*>(self->FindMap);
		}

		struct TList* GetMapList(struct TMapManagerFunc* self)
		{
			if (self == nullptr) {
				return nullptr;
			}

			return wrap_call<struct TList*>(self->GetMapList);
		}
	}

	EnvirMap::EnvirMap(struct TEnvirnomentFunc* self)
		: self(self)
	{

	}

	EnvirMap::~EnvirMap()
	{

	}

	bool EnvirMap::GetMapName(struct TEnvirnoment* envir, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetMapName == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (envir == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetMapName, envir, dest, destLen);
	}

	bool EnvirMap::GetMapDesc(struct TEnvirnoment* envir, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetMapDesc == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (envir == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetMapDesc, envir, dest, destLen);
	}

	i32 EnvirMap::GetWidth(struct TEnvirnoment* envir)
	{
		if (self == nullptr || self->GetWidth == nullptr) {
			return 0;
		}

		if (envir == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetWidth, envir);
	}

	i32 EnvirMap::GetHeight(struct TEnvirnoment* envir)
	{
		if (self == nullptr || self->GetHeight == nullptr) {
			return 0;
		}

		if (envir == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetHeight, envir);
	}

	i32 EnvirMap::GetMinMap(struct TEnvirnoment* envir)
	{
		if (self == nullptr || self->GetMinMap == nullptr) {
			return 0;
		}

		if (envir == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetMinMap, envir);
	}

	bool EnvirMap::IsMainMap(struct TEnvirnoment* envir)
	{
		if (self == nullptr || self->IsMainMap == nullptr) {
			return false;
		}

		if (envir == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsMainMap, envir);
	}

	bool EnvirMap::GetMainMapName(struct TEnvirnoment* envir, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetMainMapName == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (envir == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetMainMapName, envir, dest, destLen);
	}

	bool EnvirMap::IsMirrMap(struct TEnvirnoment* envir)
	{
		if (self == nullptr || self->IsMirrMap == nullptr) {
			return false;
		}

		if (envir == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsMirrMap, envir);
	}

	u32 EnvirMap::GetMirrMapCreateTick(struct TEnvirnoment* envir)
	{
		if (self == nullptr || self->GetMirrMapCreateTick == nullptr) {
			return 0;
		}

		if (envir == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetMirrMapCreateTick, envir);
	}

	u32 EnvirMap::GetMirrMapSurvivalTime(struct TEnvirnoment* envir)
	{
		if (self == nullptr || self->GetMirrMapSurvivalTime == nullptr) {
			return 0;
		}

		if (envir == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetMirrMapSurvivalTime, envir);
	}

	bool EnvirMap::GetMirrMapExitToMap(struct TEnvirnoment* envir, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetMirrMapExitToMap == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (envir == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetMirrMapExitToMap, envir, dest, destLen);
	}

	i32 EnvirMap::GetMirrMapMinMap(struct TEnvirnoment* envir)
	{
		if (self == nullptr || self->GetMirrMapMinMap == nullptr) {
			return 0;
		}

		if (envir == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetMirrMapMinMap, envir);
	}

	bool EnvirMap::GetAlwaysShowTime(struct TEnvirnoment* envir)
	{
		if (self == nullptr || self->GetAlwaysShowTime == nullptr) {
			return false;
		}

		if (envir == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetAlwaysShowTime, envir);
	}

	bool EnvirMap::IsFBMap(struct TEnvirnoment* envir)
	{
		if (self == nullptr || self->IsFBMap == nullptr) {
			return false;
		}

		if (envir == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsFBMap, envir);
	}

	bool EnvirMap::GetFBMapName(struct TEnvirnoment* envir, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetFBMapName == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (envir == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetFBMapName, envir, dest, destLen);
	}

	i32 EnvirMap::GetFBEnterLimit(struct TEnvirnoment* envir)
	{
		if (self == nullptr || self->GetFBEnterLimit == nullptr) {
			return 0;
		}

		if (envir == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetFBEnterLimit, envir);
	}

	bool EnvirMap::GetFBCreated(struct TEnvirnoment* envir)
	{
		if (self == nullptr || self->GetFBCreated == nullptr) {
			return false;
		}

		if (envir == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetFBCreated, envir);
	}

	u32 EnvirMap::GetFBCreateTime(struct TEnvirnoment* envir)
	{
		if (self == nullptr || self->GetFBCreateTime == nullptr) {
			return 0;
		}

		if (envir == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetFBCreateTime, envir);
	}

	bool EnvirMap::GetMapParam(struct TEnvirnoment* envir, const char* param)
	{
		if (self == nullptr || self->GetMapParam == nullptr || param == nullptr) {
			return false;
		}

		if (envir == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetMapParam, envir, param);
	}

	bool EnvirMap::GetMapParamValue(struct TEnvirnoment* envir, const char* param, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetMapParamValue == nullptr || param == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (envir == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetMapParamValue, envir, param, dest, destLen);
	}

	bool EnvirMap::CheckCanMove(struct TEnvirnoment* envir, i32 nX, i32 nY, bool boFlag)
	{
		if (self == nullptr || self->CheckCanMove == nullptr) {
			return false;
		}

		if (envir == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->CheckCanMove, envir, nX, nY, boFlag);
	}

	bool EnvirMap::IsValidObject(struct TEnvirnoment* envir, i32 nX, i32 nY, i32 nRange, struct TObject* aObject)
	{
		if (self == nullptr || self->IsValidObject == nullptr) {
			return false;
		}

		if (envir == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsValidObject, envir, nX, nY, nRange, aObject);
	}

	i32 EnvirMap::GetItemObjects(struct TEnvirnoment* envir, i32 nX, i32 nY, struct TList* objectList)
	{
		if (self == nullptr || self->GetItemObjects == nullptr || objectList == nullptr) {
			return 0;
		}

		if (envir == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetItemObjects, envir, nX, nY, objectList);
	}

	i32 EnvirMap::GetBaseObjects(struct TEnvirnoment* envir, i32 nX, i32 nY, bool incDeathObject, struct TList* objectList)
	{
		if (self == nullptr || self->GetBaseObjects == nullptr || objectList == nullptr) {
			return 0;
		}

		if (envir == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetBaseObjects, envir, nX, nY, incDeathObject, objectList);
	}

	i32 EnvirMap::GetPlayObjects(struct TEnvirnoment* envir, i32 nX, i32 nY, bool incDeathObject, struct TList* objectList)
	{
		if (self == nullptr || self->GetPlayObjects == nullptr || objectList == nullptr) {
			return 0;
		}

		if (envir == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetPlayObjects, envir, nX, nY, incDeathObject, objectList);
	}
}