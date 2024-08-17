#include "lf_mem_stream.h"

namespace LF
{
	MemStream::MemStream(struct TMemoryStreamFunc* self)
		: self(self)
		, stream(Create())
	{

	}

	MemStream::~MemStream()
	{
		Free();
	}

	struct TMemoryStream* MemStream::Create()
	{
		if (self == nullptr || self->Create == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TMemoryStream*>(self->Create);
	}

	void MemStream::Free()
	{
		if (self == nullptr || self->Free == nullptr) {
			return;
		}

		if (stream == nullptr) {
			return;
		}

		wrap_call(self->Free, stream);
	}

	i64 MemStream::GetSize()
	{
		if (self == nullptr || self->GetSize == nullptr) {
			return 0;
		}

		if (stream == nullptr) {
			return 0;
		}

		return wrap_call<i64>(self->GetSize, stream);
	}

	void MemStream::SetSize(i32 newSize)
	{
		if (self == nullptr || self->SetSize == nullptr) {
			return;
		}

		if (stream == nullptr) {
			return;
		}

		wrap_call(self->SetSize, stream, newSize);
	}

	void MemStream::Clear()
	{
		if (self == nullptr || self->Clear == nullptr) {
			return;
		}

		if (stream == nullptr) {
			return;
		}

		wrap_call(self->Clear, stream);
	}

	i32 MemStream::Read(char* buffer, i32 count)
	{
		if (self == nullptr || self->Read == nullptr || buffer == nullptr) {
			return 0;
		}

		if (stream == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->Read, stream, buffer, count);
	}

	i32 MemStream::Write(const char* buffer, i32 count)
	{
		if (self == nullptr || self->Write == nullptr || buffer == nullptr) {
			return 0;
		}

		if (stream == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->Write, stream, buffer, count);
	}

	i32 MemStream::Seek(i32 offset, u16 seekOrigin)
	{
		if (self == nullptr || self->Seek == nullptr) {
			return 0;
		}

		if (stream == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->Seek, stream, offset, seekOrigin);
	}

	void* MemStream::Memory()
	{
		if (self == nullptr || self->Memory == nullptr) {
			return nullptr;
		}

		if (stream == nullptr) {
			return nullptr;
		}

		return wrap_call<void*>(self->Memory, stream);
	}

	i64 MemStream::GetPosition()
	{
		if (self == nullptr || self->GetPosition == nullptr) {
			return 0;
		}

		if (stream == nullptr) {
			return 0;
		}

		return wrap_call<i64>(self->GetPosition, stream);
	}

	void MemStream::SetPosition(i64 position)
	{
		if (self == nullptr || self->SetPosition == nullptr) {
			return;
		}

		if (stream == nullptr) {
			return;
		}

		wrap_call(self->SetPosition, stream, position);
	}

	void MemStream::LoadFromFile(const char* fileName)
	{
		if (self == nullptr || self->LoadFromFile == nullptr || fileName == nullptr) {
			return;
		}

		if (stream == nullptr) {
			return;
		}

		wrap_call(self->LoadFromFile, stream, fileName);
	}

	void MemStream::SaveToFile(const char* fileName)
	{
		if (self == nullptr || self->SaveToFile == nullptr || fileName == nullptr) {
			return;
		}

		if (stream == nullptr) {
			return;
		}

		wrap_call(self->SaveToFile, stream, fileName);
	}
}