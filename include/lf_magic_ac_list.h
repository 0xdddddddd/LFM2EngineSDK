#ifndef __LF_MAGICACLIST_H__
#define __LF_MAGICACLIST_H__

#include "lf_platform.h"
#include "lf_struct.h"

namespace LF
{
	class MagicACList
	{
	public:
		explicit MagicACList(struct TMagicACListFunc* self, struct TMagicACList* obj);
		virtual ~MagicACList();
	public:
		i32 Count();
		struct TMagicACInfo* GetItem(i32 index);
		struct TMagicACInfo* FindByMagIdx(i32 magIdx);
	private:
		struct TMagicACListFunc* self;
		struct TMagicACList*	 object;
	};
}
#endif // __LF_MAGICACLIST_H__