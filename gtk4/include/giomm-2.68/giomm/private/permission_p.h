// Generated by gmmproc 2.84.0 -- DO NOT MODIFY!
#ifndef _GIOMM_PERMISSION_P_H
#define _GIOMM_PERMISSION_P_H


#include <glibmm/private/object_p.h>
#include <gio/gio.h>

#include <glibmm/class.h>

namespace Gio
{

class GIOMM_API Permission_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = Permission;
  using BaseObjectType = GPermission;
  using BaseClassType = GPermissionClass;
  using CppClassParent = Glib::Object_Class;
  using BaseClassParent = GObjectClass;

  friend class Permission;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
  static gboolean acquire_vfunc_callback(GPermission* self, GCancellable* cancellable, GError** error);
  static void acquire_async_vfunc_callback(GPermission* self, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
  static gboolean acquire_finish_vfunc_callback(GPermission* self, GAsyncResult* result, GError** error);
  static gboolean release_vfunc_callback(GPermission* self, GCancellable* cancellable, GError** error);
  static void release_async_vfunc_callback(GPermission* self, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
  static gboolean release_finish_vfunc_callback(GPermission* self, GAsyncResult* result, GError** error);
};


} // namespace Gio


#endif /* _GIOMM_PERMISSION_P_H */

