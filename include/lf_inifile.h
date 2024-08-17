#ifndef __LF_INIFILE_H__
#define __LF_INIFILE_H__

#include "lf_platform.h"
#include "lf_struct.h"

namespace LF
{
	class IniFile
	{
	public:
		explicit IniFile(struct TIniFileFunc* self);
		virtual ~IniFile();
	public:
		struct TIniFile* Create(const char* sFileName);
		void Free(struct TIniFile* iniFile);
		bool SectionExists(struct TIniFile* iniFile, const char* section);
		bool ValueExists(struct TIniFile* iniFile, const char* section, const char* ident);
		bool ReadString(struct TIniFile* iniFile, const char* section, const char* ident, const char* _default, char* dest, u32* destLen);
		void WriteString(struct TIniFile* iniFile, const char* section, const char* ident, const char* value);
		i32 ReadInteger(struct TIniFile* iniFile, const char* section, const char* ident, i32 _default);
		void WriteInteger(struct TIniFile* iniFile, const char* section, const char* ident, i32 value);
		bool ReadBool(struct TIniFile* iniFile, const char* section, const char* ident, bool _default);
		void WriteBool(struct TIniFile* iniFile, const char* section, const char* ident, bool value);
	private:
		struct TIniFileFunc* self;
	};
}

#endif // __LF_INIFILE_H__