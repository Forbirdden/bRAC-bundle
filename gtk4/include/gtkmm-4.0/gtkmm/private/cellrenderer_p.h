// Generated by gmmproc 2.82.0 -- DO NOT MODIFY!
#ifndef _GTKMM_CELLRENDERER_P_H
#define _GTKMM_CELLRENDERER_P_H
#ifndef GTKMM_DISABLE_DEPRECATED


#include <gtkmm/private/object_p.h>
#include <gtk/gtk.h>

#include <glibmm/class.h>

namespace Gtk
{

class GTKMM_API CellRenderer_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = CellRenderer;
  using BaseObjectType = GtkCellRenderer;
  using BaseClassType = GtkCellRendererClass;
  using CppClassParent = Gtk::Object_Class;
  using BaseClassParent = GObjectClass;

  friend class CellRenderer;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void editing_canceled_callback(GtkCellRenderer* self);
  static void editing_started_callback(GtkCellRenderer* self, GtkCellEditable* p0, const gchar* p1);

  //Callbacks (virtual functions):
  static GtkSizeRequestMode get_request_mode_vfunc_callback(GtkCellRenderer* self);
  static void get_preferred_width_vfunc_callback(GtkCellRenderer* self, GtkWidget* widget, gint* minimum_width, gint* natural_width);
  static void get_preferred_height_for_width_vfunc_callback(GtkCellRenderer* self, GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
  static void get_preferred_height_vfunc_callback(GtkCellRenderer* self, GtkWidget* widget, gint* minimum_height, gint* natural_height);
  static void get_preferred_width_for_height_vfunc_callback(GtkCellRenderer* self, GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
  static void snapshot_vfunc_callback(GtkCellRenderer* self, GtkSnapshot* snapshot, GtkWidget* widget, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags);
  static gboolean activate_vfunc_callback(GtkCellRenderer* self, GdkEvent* event, GtkWidget* widget, const gchar* path, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags);
  static GtkCellEditable* start_editing_vfunc_callback(GtkCellRenderer* self, GdkEvent* event, GtkWidget* widget, const gchar* path, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags);
};


} // namespace Gtk

#endif // GTKMM_DISABLE_DEPRECATED


#endif /* _GTKMM_CELLRENDERER_P_H */

