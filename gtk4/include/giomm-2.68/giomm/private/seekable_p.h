// Generated by gmmproc 2.84.0 -- DO NOT MODIFY!
#ifndef _GIOMM_SEEKABLE_P_H
#define _GIOMM_SEEKABLE_P_H


#include <glibmm/private/interface_p.h>

#include <glibmm/private/interface_p.h>

namespace Gio
{

class GIOMM_API Seekable_Class : public Glib::Interface_Class
{
public:
  using CppObjectType = Seekable;
  using BaseObjectType = GSeekable;
  using BaseClassType = GSeekableIface;
  using CppClassParent = Glib::Interface_Class;

  friend class Seekable;

  const Glib::Interface_Class& init();

  static void iface_init_function(void* g_iface, void* iface_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
};


} // namespace Gio


#endif /* _GIOMM_SEEKABLE_P_H */

