#include "lf_list.h"
#include "lf_utils.h"

namespace LF
{
	List::List(struct TListFunc* self)
		: self(self)
		, object(nullptr)
	{

	}

	List::~List()
	{

	}

	struct TList* List::Create()
	{
		if (self == nullptr || self->Create == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TList*>(self->Create);
	}

	void List::Free()
	{
		if (self == nullptr || self->Free == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->Free, object);
	}

	i32 List::Count()
	{
		if (self == nullptr || self->Count == nullptr) {
			return 0;
		}

		if (object == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->Count, object);
	}

	void List::Clear()
	{
		if (self == nullptr || self->Clear == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->Clear, object);
	}

	void List::Add(void* item)
	{
		if (self == nullptr || self->Add == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->Add, object, item);
	}

	void List::Insert(i32 index, void* item)
	{
		if (self == nullptr || self->Insert == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->Insert, object, index, item);
	}

	void List::Remove(void* item)
	{
		if (self == nullptr || self->Remove == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->Remove, object, item);
	}

	void List::Delete(i32 index)
	{
		if (self == nullptr || self->Delete == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->Delete, object, index);
	}

	void* List::GetItem(i32 index)
	{
		if (self == nullptr || self->GetItem == nullptr) {
			return nullptr;
		}

		if (object == nullptr) {
			return nullptr;
		}

		return wrap_call<void*>(self->GetItem, object, index);
	}

	void List::SetItem(i32 index, void* item)
	{
		if (self == nullptr || self->SetItem == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->SetItem, object, index, item);
	}

	i32 List::IndexOf(void* item)
	{
		if (self == nullptr || self->IndexOf == nullptr) {
			return -1;
		}

		if (object == nullptr) {
			return -1;
		}

		return wrap_call<i32>(self->IndexOf, object, item);
	}

	void List::Exchange(i32 index1, i32 index2)
	{
		if (self == nullptr || self->Exchange == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->Exchange, object, index1, index2);
	}

	void List::CopyTo(struct TList* dest)
	{
		if (self == nullptr || self->CopyTo == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		if (dest == nullptr) {
			return;
		}

		wrap_call(self->CopyTo, object, dest);
	}
}