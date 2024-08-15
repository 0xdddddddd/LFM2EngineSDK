#include "lf_mem_stream.h"

namespace LF
{
	MemStream::MemStream(struct TMemoryStreamFunc* self)
		: self(self)
		, object(nullptr)
	{

	}

	MemStream::~MemStream()
	{

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

		if (object == nullptr) {
			return;
		}

		wrap_call(self->Free, object);
	}
	
	i64 MemStream::GetSize()
	{
		if (self == nullptr || self->GetSize == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i64>(self->GetSize, object);
	}

	void MemStream::SetSize(i32 newSize)
	{
		if (self == nullptr || self->SetSize == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetSize, object, newSize);
	}

	void MemStream::Clear()
	{
		if (self == nullptr || self->Clear == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->Clear, object);
	}

	i32 MemStream::Read(char* buffer, i32 count)
	{
		if (self == nullptr || self->Read == nullptr || buffer == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->Read, object, buffer, count);
	}

	i32 MemStream::Write(const char* buffer, i32 count)
	{
		if (self == nullptr || self->Write == nullptr || buffer == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->Write, object, buffer, count);
	}

	i32 MemStream::Seek(i32 offset, u16 seekOrigin)
	{
		if (self == nullptr || self->Seek == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->Seek, object, offset, seekOrigin);
	}

	void* MemStream::Memory()
	{
		if (self == nullptr || self->Memory == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<void*>(self->Memory, object);
	}

	i64 MemStream::GetPosition()
	{
		if (self == nullptr || self->GetPosition == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i64>(self->GetPosition, object);
	}

	void MemStream::SetPosition(i64 position)
	{
		if (self == nullptr || self->SetPosition == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetPosition, object, position);
	}

	void MemStream::LoadFromFile(const char* fileName)
	{
		if (self == nullptr || self->LoadFromFile == nullptr || fileName == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->LoadFromFile, object, fileName);
	}

	void MemStream::SaveToFile(const char* fileName)
	{
		if (self == nullptr || self->SaveToFile == nullptr || fileName == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SaveToFile, object, fileName);
	}
}