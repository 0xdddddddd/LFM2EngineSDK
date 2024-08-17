#ifndef __LF_MEMSTREAM_H__
#define __LF_MEMSTREAM_H__

#include "lf_platform.h"
#include "lf_struct.h"

namespace LF
{
	class MemStream
	{
	public:
		explicit MemStream(struct TMemoryStreamFunc* self);
		virtual ~MemStream();
	public:
		struct TMemoryStream* Create();
		void Free();
		i64 GetSize();
		void SetSize(i32 newSize);
		void Clear();
		i32 Read(char* buffer, i32 count);
		i32 Write(const char* buffer, i32 count);
		i32 Seek(i32 offset, u16 seekOrigin);
		void* Memory();
		i64 GetPosition();
		void SetPosition(i64 position);
		void LoadFromFile(const char* fileName);
		void SaveToFile(const char* fileName);
	private:
		struct TMemoryStreamFunc* self;
		struct TMemoryStream* stream;
	};
}

#endif // __LF_MEMSTREAM_H__