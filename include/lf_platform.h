#ifndef __LF_PLATFORM_H__
#define __LF_PLATFORM_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#	pragma once
#endif

#include "lf_arch.h"
#include "lf_stdint.h"

#if defined(H_OS_WINDOWS)
#   if defined(__cplusplus)
#	    ifndef NOMINMAX
#		    define NOMINMAX
#	    endif
#   endif // __cplusplus
#endif

#ifndef container_of
#	ifdef CONTAINING_RECORD
#		define container_of(ptr, type, member) CONTAINING_RECORD(ptr, type, member)
#	else
#		define container_of(ptr, type, member) (type*)((char*)(ptr) - offsetof(type, member))
#	endif // CONTAINING_RECORD
#endif

#ifndef _countof
#	define _countof(x) (sizeof(x) / sizeof(x[0]))
#endif

#ifndef MIN
#	define MIN(x, y) (((x) < (y)) ? (x) : (y))
#endif

#ifndef MAX
#	define MAX(x, y) (((x) > (y)) ? (x) : (y))
#endif

#if defined(H_OS_WINDOWS)
#   include <winsock2.h>
#   include <ws2tcpip.h>
#   include <ws2def.h>
#   include <in6addr.h>
#   include <windows.h>
#	include <dbghelp.h>
#   include <io.h>
#   include <direct.h>
#else
#   include <unistd.h>
#   include <dirent.h>
#   include <unistd.h>
#   include <netdb.h>
#   include <netinet/in.h>
#   include <netinet/tcp.h>
#   include <sys/socket.h>
#   include <sys/types.h>
#   include <arpa/inet.h>
#endif

#if defined(H_OS_WINDOWS)
#	pragma comment(lib, "ws2_32.lib")
#	pragma comment(lib, "iphlpapi.lib")
#	pragma comment(lib, "userenv.lib")
#	pragma comment(lib, "ntdll.lib")
#	pragma comment(lib, "dbghelp.lib")
#   pragma comment(lib, "crypt32.lib")
#endif

#if defined(H_OS_WINDOWS)
#	pragma warning(disable: 4996)
#	pragma warning(disable: 4819)
#endif

#include "lf_utils.h"

#endif	// __LF_PLATFORM_H__