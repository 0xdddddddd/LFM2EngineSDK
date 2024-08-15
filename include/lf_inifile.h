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
		void Free();
		bool SectionExists(const char* section);
		bool ValueExists(const char* section, const char* ident);
		bool ReadString(const char* section, const char* ident, const char* default_, char* dest, u32* destLen);
		void WriteString(const char* section, const char* ident, const char* value);
		i32 ReadInteger(const char* section, const char* ident, i32 default_);
		void WriteInteger(const char* section, const char* ident, i32 value);
		bool ReadBool(const char* section, const char* ident, bool default_);
		void WriteBool(const char* section, const char* ident, bool value);
	private:
		struct TIniFileFunc* self;
		struct TIniFile*	 object;
	};
}

#endif // __LF_INIFILE_H__