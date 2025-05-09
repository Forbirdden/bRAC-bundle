#ifndef _GIOMM_CONFIG_H
#define _GIOMM_CONFIG_H

#include <glibmmconfig.h>

/* Define to omit deprecated API from the library. */
/* #undef GIOMM_DISABLE_DEPRECATED */

/* Major version number of giomm. */
#define GIOMM_MAJOR_VERSION 2

/* Minor version number of giomm. */
#define GIOMM_MINOR_VERSION 84

/* Micro version number of giomm. */
#define GIOMM_MICRO_VERSION 0

/* Define if giomm is built as a static library */
/* #undef GIOMM_STATIC_LIB */

// Enable DLL-specific stuff only when not building a static library
#if !defined(__CYGWIN__) && (defined(__MINGW32__) || defined(_MSC_VER)) && !defined(GIOMM_STATIC_LIB)
# define GIOMM_DLL 1
#endif

#ifdef GIOMM_DLL
# if defined(GIOMM_BUILD)
#  define GIOMM_API __declspec(dllexport)
# elif !defined (__GNUC__)
#  define GIOMM_API __declspec(dllimport)
# else /* don't dllimport classes/methods on GCC/MinGW */
#  define GIOMM_API
# endif
/* Build a static library or non-native-Windows library */
#else
# define GIOMM_API
#endif /* GIOMM_DLL */

#endif /* _GIOMM_CONFIG_H */
