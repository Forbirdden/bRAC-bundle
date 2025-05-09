// Generated by gmmproc 2.84.0 -- DO NOT MODIFY!
#ifndef _GIOMM_POLLABLEINPUTSTREAM_P_H
#define _GIOMM_POLLABLEINPUTSTREAM_P_H


#include <glibmm/private/interface_p.h>
#include <gio/gio.h>

#include <glibmm/private/interface_p.h>

namespace Gio
{

class GIOMM_API PollableInputStream_Class : public Glib::Interface_Class
{
public:
  using CppObjectType = PollableInputStream;
  using BaseObjectType = GPollableInputStream;
  using BaseClassType = GPollableInputStreamInterface;
  using CppClassParent = Glib::Interface_Class;

  friend class PollableInputStream;

  const Glib::Interface_Class& init();

  static void iface_init_function(void* g_iface, void* iface_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
  static gboolean can_poll_vfunc_callback(GPollableInputStream* self);
  static gboolean is_readable_vfunc_callback(GPollableInputStream* self);
  static gssize read_nonblocking_vfunc_callback(GPollableInputStream* self, void* buffer, gsize count, GError** error);
};


} // namespace Gio


#endif /* _GIOMM_POLLABLEINPUTSTREAM_P_H */

