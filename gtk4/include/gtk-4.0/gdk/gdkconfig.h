#ifndef __GDKCONFIG_H__
#define __GDKCONFIG_H__

#if !defined (__GDK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gdk/gdk.h> can be included directly."
#endif

#include <glib.h>

G_BEGIN_DECLS


#undef GDK_WINDOWING_X11
#undef GDK_WINDOWING_ANDROID
#undef GDK_WINDOWING_BROADWAY
#undef GDK_WINDOWING_MACOS
#undef GDK_WINDOWING_WAYLAND
#define GDK_WINDOWING_WIN32

#define GDK_RENDERING_CAIRO
#define GDK_RENDERING_GL
#undef GDK_RENDERING_VULKAN

G_END_DECLS

#endif  /* __GDKCONFIG_H__ */
