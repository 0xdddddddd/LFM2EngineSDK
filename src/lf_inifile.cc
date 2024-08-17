#include "lf_inifile.h"

namespace LF
{
	IniFile::IniFile(struct TIniFileFunc* self)
		: self(self)
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

	void IniFile::Free(struct TIniFile* iniFile)
	{
		if (self == nullptr || self->Free == nullptr) {
			return;
		}

		if (iniFile == nullptr) {
			return;
		}

		wrap_call(self->Free, iniFile);
	}

	bool IniFile::SectionExists(struct TIniFile* iniFile, const char* section)
	{
		if (self == nullptr || self->SectionExists == nullptr || section == nullptr) {
			return false;
		}

		if (iniFile == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->SectionExists, iniFile, section);
	}

	bool IniFile::ValueExists(struct TIniFile* iniFile, const char* section, const char* ident)
	{
		if (self == nullptr || self->ValueExists == nullptr || section == nullptr || ident == nullptr) {
			return false;
		}

		if (iniFile == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->ValueExists, iniFile, section, ident);
	}

	bool IniFile::ReadString(struct TIniFile* iniFile, const char* section, const char* ident, const char* _default, char* dest, u32* destLen)
	{
		if (self == nullptr || self->ReadString == nullptr || section == nullptr || ident == nullptr || _default == nullptr || dest == nullptr || destLen == nullptr) {
			return false;
		}

		if (iniFile == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->ReadString, iniFile, section, ident, _default, dest, destLen);
	}

	void IniFile::WriteString(struct TIniFile* iniFile, const char* section, const char* ident, const char* value)
	{
		if (self == nullptr || self->WriteString == nullptr || section == nullptr || ident == nullptr || value == nullptr) {
			return;
		}

		if (iniFile == nullptr) {
			return;
		}

		wrap_call(self->WriteString, iniFile, section, ident, value);
	}

	i32 IniFile::ReadInteger(struct TIniFile* iniFile, const char* section, const char* ident, i32 _default)
	{
		if (self == nullptr || self->ReadInteger == nullptr || section == nullptr || ident == nullptr) {
			return 0;
		}

		if (iniFile == nullptr) {
			return 0;
		}

		return wrap_call<i32>(self->ReadInteger, iniFile, section, ident, _default);
	}

	void IniFile::WriteInteger(struct TIniFile* iniFile, const char* section, const char* ident, i32 value)
	{
		if (self == nullptr || self->WriteInteger == nullptr || section == nullptr || ident == nullptr) {
			return;
		}

		if (iniFile == nullptr) {
			return;
		}

		wrap_call(self->WriteInteger, iniFile, section, ident, value);
	}

	bool IniFile::ReadBool(struct TIniFile* iniFile, const char* section, const char* ident, bool _default)
	{
		if (self == nullptr || self->ReadBool == nullptr || section == nullptr || ident == nullptr) {
			return false;
		}

		if (iniFile == nullptr) {
			return false;
		}

		return wrap_call<bool>(self->ReadBool, iniFile, section, ident, _default);
	}

	void IniFile::WriteBool(struct TIniFile* iniFile, const char* section, const char* ident, bool value)
	{
		if (self == nullptr || self->WriteBool == nullptr || section == nullptr || ident == nullptr) {
			return;
		}

		if (iniFile == nullptr) {
			return;
		}

		wrap_call(self->WriteBool, iniFile, section, ident, value);
	}
}