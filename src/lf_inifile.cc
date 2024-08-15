#include "lf_inifile.h"

namespace LF
{
	IniFile::IniFile(struct TIniFileFunc* self)
		: self(self)
		, object(nullptr)
	{

	}

	IniFile::~IniFile()
	{

	}

	struct TIniFile* IniFile::Create(const char* sFileName)
	{
		if (self == nullptr || self->Create == nullptr || sFileName == nullptr) {
			return nullptr;
		}

		return wrap_call<struct TIniFile*>(self->Create, sFileName);
	}

	void IniFile::Free()
	{
		if (self == nullptr || self->Free == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->Free, object);
	}

	bool IniFile::SectionExists(const char* section)
	{
		if (self == nullptr || self->SectionExists == nullptr || section == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->SectionExists, object, section);
	}

	bool IniFile::ValueExists(const char* section, const char* ident)
	{
		if (self == nullptr || self->ValueExists == nullptr || section == nullptr || ident == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->ValueExists, object, section, ident);
	}

	bool IniFile::ReadString(const char* section, const char* ident, const char* default_, char* dest, u32* destLen)
	{
		if (self == nullptr || self->ReadString == nullptr || section == nullptr || ident == nullptr ||
			default_ == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (object == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->ReadString, object, section, ident, default_, dest, destLen);
	}

	void IniFile::WriteString(const char* section, const char* ident, const char* value)
	{
		if (self == nullptr || self->WriteString == nullptr || section == nullptr || ident == nullptr || value == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->WriteString, object, section, ident, value);
	}

	i32 IniFile::ReadInteger(const char* section, const char* ident, i32 default_)
	{
		if (self == nullptr || self->ReadInteger == nullptr || section == nullptr || ident == nullptr) {
			return default_;
		}

		if (object == nullptr) {
			return default_;
		}

		return wrap_call<i32>(self->ReadInteger, object, section, ident, default_);
	}

	void IniFile::WriteInteger(const char* section, const char* ident, i32 value)
	{
		if (self == nullptr || self->WriteInteger == nullptr || section == nullptr || ident == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->WriteInteger, object, section, ident, value);
	}

	bool IniFile::ReadBool(const char* section, const char* ident, bool default_)
	{
		if (self == nullptr || self->ReadBool == nullptr || section == nullptr || ident == nullptr) {
			return default_;
		}

		if (object == nullptr) {
			return default_;
		}

		return wrap_call<bool>(self->ReadBool, object, section, ident, default_);
	}

	void IniFile::WriteBool(const char* section, const char* ident, bool value)
	{
		if (self == nullptr || self->WriteBool == nullptr || section == nullptr || ident == nullptr) {
			return;
		}

		if (object == nullptr) {
			return;
		}

		wrap_call(self->WriteBool, object, section, ident, value);
	}
}