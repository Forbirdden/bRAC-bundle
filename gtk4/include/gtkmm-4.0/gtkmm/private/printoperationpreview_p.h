// Generated by gmmproc 2.82.0 -- DO NOT MODIFY!
#ifndef _GTKMM_PRINTOPERATIONPREVIEW_P_H
#define _GTKMM_PRINTOPERATIONPREVIEW_P_H


#include <glibmm/private/interface_p.h>

#include <glibmm/private/interface_p.h>

namespace Gtk
{

class GTKMM_API PrintOperationPreview_Class : public Glib::Interface_Class
{
public:
  using CppObjectType = PrintOperationPreview;
  using BaseObjectType = GtkPrintOperationPreview;
  using BaseClassType = GtkPrintOperationPreviewIface;
  using CppClassParent = Glib::Interface_Class;

  friend class PrintOperationPreview;

  const Glib::Interface_Class& init();

  static void iface_init_function(void* g_iface, void* iface_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void ready_callback(GtkPrintOperationPreview* self, GtkPrintContext* p0);
  static void got_page_size_callback(GtkPrintOperationPreview* self, GtkPrintContext* p0, GtkPageSetup* p1);

  //Callbacks (virtual functions):
  static void render_page_vfunc_callback(GtkPrintOperationPreview* self, gint page_nr);
  static void end_preview_vfunc_callback(GtkPrintOperationPreview* self);
  static gboolean is_selected_vfunc_callback(GtkPrintOperationPreview* self, gint page_nr);
};


} // namespace Gtk


#endif /* _GTKMM_PRINTOPERATIONPREVIEW_P_H */

