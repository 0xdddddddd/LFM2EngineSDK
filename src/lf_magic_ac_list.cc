#include "lf_magic_ac_list.h"

namespace LF
{
	MagicACList::MagicACList(struct TMagicACListFunc* self, struct TMagicACList* obj)
		: self(self)
		, object(obj)
	{
	}

	MagicACList::~MagicACList()
	{
	}

	i32 MagicACList::Count()
	{
		if (self == nullptr || self->Count == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->Count, object);
	}

	struct TMagicACInfo* MagicACList::GetItem(i32 index)
	{
		if (self == nullptr || self->GetItem == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TMagicACInfo*>(self->GetItem, object, index);
	}

	struct TMagicACInfo* MagicACList::FindByMagIdx(i32 magIdx)
	{
		if (self == nullptr || self->FindByMagIdx == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TMagicACInfo*>(self->FindByMagIdx, object, magIdx);
	}
}