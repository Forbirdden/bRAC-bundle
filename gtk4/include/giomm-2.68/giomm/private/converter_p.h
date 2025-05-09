// Generated by gmmproc 2.84.0 -- DO NOT MODIFY!
#ifndef _GIOMM_CONVERTER_P_H
#define _GIOMM_CONVERTER_P_H


#include <glibmm/private/interface_p.h>
#include <gio/gio.h>

#include <glibmm/private/interface_p.h>

namespace Gio
{

class GIOMM_API Converter_Class : public Glib::Interface_Class
{
public:
  using CppObjectType = Converter;
  using BaseObjectType = GConverter;
  using BaseClassType = GConverterIface;
  using CppClassParent = Glib::Interface_Class;

  friend class Converter;

  const Glib::Interface_Class& init();

  static void iface_init_function(void* g_iface, void* iface_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
  static GConverterResult convert_vfunc_callback(GConverter* self, const void* inbuf, gsize inbuf_size, void* outbuf, gsize outbuf_size, GConverterFlags flags, gsize* bytes_read, gsize* bytes_written, GError** error);
  static void reset_vfunc_callback(GConverter* self);
};


} // namespace Gio


#endif /* _GIOMM_CONVERTER_P_H */

