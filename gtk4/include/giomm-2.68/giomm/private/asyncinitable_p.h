// Generated by gmmproc 2.84.0 -- DO NOT MODIFY!
#ifndef _GIOMM_ASYNCINITABLE_P_H
#define _GIOMM_ASYNCINITABLE_P_H


#include <glibmm/private/interface_p.h>
#include <gio/gio.h>

#include <glibmm/private/interface_p.h>

namespace Gio
{

class GIOMM_API AsyncInitable_Class : public Glib::Interface_Class
{
public:
  using CppObjectType = AsyncInitable;
  using BaseObjectType = GAsyncInitable;
  using BaseClassType = GAsyncInitableIface;
  using CppClassParent = Glib::Interface_Class;

  friend class AsyncInitable;

  const Glib::Interface_Class& init();

  static void iface_init_function(void* g_iface, void* iface_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
  static void init_async_vfunc_callback(GAsyncInitable* self,
    int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback,
    gpointer user_data);
  static gboolean init_finish_vfunc_callback(GAsyncInitable* self,
    GAsyncResult* res, GError** error);
  };


} // namespace Gio


#endif /* _GIOMM_ASYNCINITABLE_P_H */

