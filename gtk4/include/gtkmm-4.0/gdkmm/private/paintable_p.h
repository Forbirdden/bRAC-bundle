// Generated by gmmproc 2.82.0 -- DO NOT MODIFY!
#ifndef _GDKMM_PAINTABLE_P_H
#define _GDKMM_PAINTABLE_P_H


#include <glibmm/private/interface_p.h>
#include <gdk/gdk.h>

#include <glibmm/private/interface_p.h>

namespace Gdk
{

class GDKMM_API Paintable_Class : public Glib::Interface_Class
{
public:
  using CppObjectType = Paintable;
  using BaseObjectType = GdkPaintable;
  using BaseClassType = GdkPaintableInterface;
  using CppClassParent = Glib::Interface_Class;

  friend class Paintable;

  const Glib::Interface_Class& init();

  static void iface_init_function(void* g_iface, void* iface_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
  static void snapshot_vfunc_callback(GdkPaintable* self, GdkSnapshot* snapshot, double width, double height);
  static GdkPaintable* get_current_image_vfunc_callback(GdkPaintable* self);
  static GdkPaintableFlags get_flags_vfunc_callback(GdkPaintable* self);
  static int get_intrinsic_width_vfunc_callback(GdkPaintable* self);
  static int get_intrinsic_height_vfunc_callback(GdkPaintable* self);
  static double get_intrinsic_aspect_ratio_vfunc_callback(GdkPaintable* self);
};


} // namespace Gdk


#endif /* _GDKMM_PAINTABLE_P_H */

