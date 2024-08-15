#ifndef __LF_DUMMY_OBJECT_H__
#define __LF_DUMMY_OBJECT_H__

#include "lf_platform.h"
#include "lf_struct.h"

namespace LF
{
	class DummyObject
	{
	public:
		explicit DummyObject(struct TDummyObjectFunc* self);
		virtual ~DummyObject();
	public:
		bool IsStart();
		void Start();
		void Stop();
	private:
		struct TDummyObjectFunc* self;
		struct TDummyObject*	 object;
	};
}

#endif // __LF_DUMMY_OBJECT_H__