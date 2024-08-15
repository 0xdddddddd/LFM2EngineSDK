#ifndef __LF_ARCH_H__
#define __LF_ARCH_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#	pragma once
#endif

#include <stdint.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#include <ctype.h>
#include <memory.h>
#include <assert.h>
#include <errno.h>
#include <time.h>
#include <math.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <signal.h>
#include <locale.h>


#ifdef __CYGWIN__
#   define H_OS_CYGWIN                                                                          1
#   elif defined(__MINGW__) || defined(__MINGW32__) || defined(__MINGW64__)
#       define H_OS_WINDOWS                                                                     1
#   elif defined(_MSC_VER) && (defined(_WIN32) || defined(__WIN32__) || defined(WIN32) || defined(_WIN64) || defined(_WIN64_) || defined(WIN64))
#       define H_OS_WINDOWS                                                                     1
#		define WIN32_LEAN_AND_MEAN
#   ifdef _WIN32_WCE
#       define H_OS_WINDOWS_MOBILE                                                              1
#   elif defined(WINAPI_FAMILY)
#       include <winapifamily.h>
#   if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#       define H_OS_WINDOWS_DESKTOP                                                             1
#   elif WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PHONE_APP)
#       define H_OS_WINDOWS_PHONE                                                               1
#   elif WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#       define H_OS_WINDOWS_RT                                                                  1
#   elif WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_TV_TITLE)
#       define H_OS_WINDOWS_PHONE                                                               1
#       define H_OS_WINDOWS_TV_TITLE                                                            1
#   else
#       define H_OS_WINDOWS_DESKTOP                                                             1
#   endif
#   else
#       define H_OS_WINDOWS_DESKTOP                                                             1
#   endif  // _WIN32_WCE
#   elif defined __OS2__
#       define H_OS_OS2                                                                         1
#   elif defined __APPLE__
#       define H_OS_MAC                                                                         1
#       include <TargetConditionals.h>
#   if TARGET_OS_IPHONE
#       define H_OS_IOS                                                                         1
#   endif
#   elif defined __DragonFly__
#       define H_OS_DRAGONFLY                                                                   1
#   elif defined __FreeBSD__
#       define H_OS_FREEBSD                                                                     1
#   elif defined __Fuchsia__
#       define H_OS_FUCHSIA                                                                     1
#   elif defined(__GLIBC__) && defined(__FreeBSD_kernel__)
#       define H_OS_GNU_KFREEBSD                                                                1
#   elif defined __linux__
#       if defined(__arm__) || defined(__thumb__) || defined(__aarch64__)
#           define H_OS_LINUX_ARM                                                               1
#       endif
#       define H_OS_LINUX                                                                       1
#       if defined __ANDROID__
#           define H_OS_LINUX_ANDROID                                                           1
#       endif
#   elif defined __MVS__
#       define H_OS_ZOS                                                                         1
#   elif defined(__sun) && defined(__SVR4)
#       define H_OS_SOLARIS                                                                     1
#   elif defined(_AIX)
#       define H_OS_AIX                                                                         1
#   elif defined(__hpux)
#       define H_OS_HPUX                                                                        1
#   elif defined __native_client__
#       define H_OS_NACL                                                                        1
#   elif defined __NetBSD__
#       define H_OS_NETBSD                                                                      1
#   elif defined __OpenBSD__
#       define H_OS_OPENBSD                                                                     1
#   elif defined __QNX__
#       define H_OS_QNX                                                                         1
#   elif defined(__HAIKU__)
#       define H_OS_HAIKU                                                                       1
#   elif defined ESP8266
#       define H_OS_ESP8266                                                                     1
#   elif defined ESP32
#       define H_OS_ESP32                                                                       1
#endif  // __CYGWIN__

#endif // __LF_ARCH_H__