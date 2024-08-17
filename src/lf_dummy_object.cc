#include "lf_dummy_object.h"

namespace LF
{
	DummyObject::DummyObject(struct TDummyObjectFunc* self)
		: self(self)
		, object(nullptr)
	{
	}

	DummyObject::~DummyObject()
	{
	}

	bool DummyObject::IsStart()
	{
		if (self == nullptr || self->IsStart == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->IsStart, object);
	}

	void DummyObject::Start()
	{
		if (self == nullptr || self->Start == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->Start, object);
	}

	void DummyObject::Stop()
	{
		if (self == nullptr || self->Stop == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->Stop, object);
	}
}