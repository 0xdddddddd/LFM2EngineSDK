#ifndef __LF_STDINT_H__
#define __LF_STDINT_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#	pragma once
#endif

#include <stdint.h>
#include <stdbool.h>

typedef char                                i8;
typedef short                               i16;
typedef int                                 i32;
typedef long long                           i64;

typedef unsigned char                       u8;
typedef unsigned short                      u16;
typedef unsigned int                        u32;
typedef unsigned long long                  u64;

#endif // __LF_STDINT_H__