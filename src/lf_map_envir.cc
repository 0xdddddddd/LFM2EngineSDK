#include "lf_map_envir.h"

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

	MapEnvir::MapEnvir(struct TEnvirnomentFunc* self, struct TEnvirnoment* object)
		: self(self)
		, object(object)
	{

	}

	MapEnvir::~MapEnvir()
	{

	}

	bool MapEnvir::GetMapName(char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetMapName == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetMapName, object, dest, destLen);
	}

	bool MapEnvir::GetMapDesc(char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetMapDesc == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetMapDesc, object, dest, destLen);
	}

	i32 MapEnvir::GetWidth()
	{
		if (self == nullptr || self->GetWidth == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetWidth, object);
	}

	i32 MapEnvir::GetHeight()
	{
		if (self == nullptr || self->GetHeight == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetHeight, object);
	}

	i32 MapEnvir::GetMinMap()
	{
		if (self == nullptr || self->GetMinMap == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetMinMap, object);
	}

	bool MapEnvir::IsMainMap()
	{
		if (self == nullptr || self->IsMainMap == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsMainMap, object);
	}

	bool MapEnvir::GetMainMapName(char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetMainMapName == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetMainMapName, object, dest, destLen);
	}

	bool MapEnvir::IsMirrMap()
	{
		if (self == nullptr || self->IsMirrMap == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsMirrMap, object);
	}

	u32 MapEnvir::GetMirrMapCreateTick()
	{
		if (self == nullptr || self->GetMirrMapCreateTick == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetMirrMapCreateTick, object);
	}

	u32 MapEnvir::GetMirrMapSurvivalTime()
	{
		if (self == nullptr || self->GetMirrMapSurvivalTime == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetMirrMapSurvivalTime, object);
	}

	bool MapEnvir::GetMirrMapExitToMap(char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetMirrMapExitToMap == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetMirrMapExitToMap, object, dest, destLen);
	}

	i32 MapEnvir::GetMirrMapMinMap()
	{
		if (self == nullptr || self->GetMirrMapMinMap == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetMirrMapMinMap, object);
	}

	bool MapEnvir::GetAlwaysShowTime()
	{
		if (self == nullptr || self->GetAlwaysShowTime == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetAlwaysShowTime, object);
	}

	bool MapEnvir::IsFBMap()
	{
		if (self == nullptr || self->IsFBMap == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsFBMap, object);
	}

	bool MapEnvir::GetFBMapName(char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetFBMapName == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetFBMapName, object, dest, destLen);
	}

	i32 MapEnvir::GetFBEnterLimit()
	{
		if (self == nullptr || self->GetFBEnterLimit == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetFBEnterLimit, object);
	}

	bool MapEnvir::GetFBCreated()
	{
		if (self == nullptr || self->GetFBCreated == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetFBCreated, object);
	}

	u32 MapEnvir::GetFBCreateTime()
	{
		if (self == nullptr || self->GetFBCreateTime == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<u32>(self->GetFBCreateTime, object);
	}

	bool MapEnvir::GetMapParam(const char* param)
	{
		if (self == nullptr || self->GetMapParam == nullptr || param == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetMapParam, object, param);
	}

	bool MapEnvir::GetMapParamValue(const char* param, char* dest, u32* destLen)
	{
		if (self == nullptr || self->GetMapParamValue == nullptr || param == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->GetMapParamValue, object, param, dest, destLen);
	}

	bool MapEnvir::CheckCanMove(i32 nX, i32 nY, bool boFlag)
	{
		if (self == nullptr || self->CheckCanMove == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->CheckCanMove, object, nX, nY, boFlag);
	}

	bool MapEnvir::IsValidObject(i32 nX, i32 nY, i32 nRange, struct TObject* aObject)
	{
		if (self == nullptr || self->IsValidObject == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsValidObject, object, nX, nY, nRange, aObject);
	}

	i32 MapEnvir::GetItemObjects(i32 nX, i32 nY, struct TList* objectList)
	{
		if (self == nullptr || self->GetItemObjects == nullptr || objectList == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetItemObjects, object, nX, nY, objectList);
	}

	i32 MapEnvir::GetBaseObjects(i32 nX, i32 nY, bool incDeathObject, struct TList* objectList)
	{
		if (self == nullptr || self->GetBaseObjects == nullptr || objectList == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetBaseObjects, object, nX, nY, incDeathObject, objectList);
	}

	i32 MapEnvir::GetPlayObjects(i32 nX, i32 nY, bool incDeathObject, struct TList* objectList)
	{
		if (self == nullptr || self->GetPlayObjects == nullptr || objectList == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->GetPlayObjects, object, nX, nY, incDeathObject, objectList);
	}
}