// Generated by gmmproc 2.82.0 -- DO NOT MODIFY!
#ifndef _GTKMM_COLORDIALOG_H
#define _GTKMM_COLORDIALOG_H

#include <gtkmmconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2022 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */


#include <glibmm/object.h>
#include <giomm/asyncresult.h>
#include <giomm/cancellable.h>
#include <gdkmm/rgba.h>
#include <gtk/gtk.h>

#ifndef DOXYGEN_SHOULD_SKIP_THIS
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API ColorDialog_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{
class Window;

/** A %Gtk::ColorDialog object collects the arguments that
 * are needed to present a color chooser dialog to the
 * user, such as a title for the dialog and whether it
 * should be modal.
 *
 * The dialog is shown with the choose_rgba() method.
 * This API follows the GIO async pattern, and the
 * result can be obtained by calling choose_rgba_finish().
 *
 * See Gtk::ColorDialogButton for a convenient control
 * that uses %Gtk::ColorDialog and presents the results.
 *
 * @ingroup Dialogs
 * @newin{4,10}
 */

class GTKMM_API ColorDialog : public Glib::Object
{
   
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = ColorDialog;
  using CppClassType = ColorDialog_Class;
  using BaseObjectType = GtkColorDialog;
  using BaseClassType = GtkColorDialogClass;

  // noncopyable
  ColorDialog(const ColorDialog&) = delete;
  ColorDialog& operator=(const ColorDialog&) = delete;

private:  friend class ColorDialog_Class;
  static CppClassType colordialog_class_;

protected:
  explicit ColorDialog(const Glib::ConstructParams& construct_params);
  explicit ColorDialog(GtkColorDialog* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  ColorDialog(ColorDialog&& src) noexcept;
  ColorDialog& operator=(ColorDialog&& src) noexcept;

  ~ColorDialog() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkColorDialog*       gobj()       { return reinterpret_cast<GtkColorDialog*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkColorDialog* gobj() const { return reinterpret_cast<GtkColorDialog*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkColorDialog* gobj_copy();

private:

     
protected:
  ColorDialog();

public:
  
  static Glib::RefPtr<ColorDialog> create();


  /** Returns the title that will be shown on the
   * color chooser dialog.
   * 
   * @newin{4,10}
   * 
   * @return The title.
   */
  Glib::ustring get_title() const;
  
  /** Sets the title that will be shown on the
   * color chooser dialog.
   * 
   * @newin{4,10}
   * 
   * @param title The new title.
   */
  void set_title(const Glib::ustring& title);
  
  /** Returns whether the color chooser dialog
   * blocks interaction with the parent window
   * while it is presented.
   * 
   * @newin{4,10}
   * 
   * @return True if the color chooser dialog is modal.
   */
  bool get_modal() const;
  
  /** Sets whether the color chooser dialog
   * blocks interaction with the parent window
   * while it is presented.
   * 
   * @newin{4,10}
   * 
   * @param modal The new value.
   */
  void set_modal(bool modal =  true);
  
  /** Returns whether colors may have alpha.
   * 
   * @newin{4,10}
   * 
   * @return True if colors may have alpha.
   */
  bool get_with_alpha() const;
  
  /** Sets whether colors may have alpha.
   * 
   * @newin{4,10}
   * 
   * @param with_alpha The new value.
   */
  void set_with_alpha(bool with_alpha =  true);

  
  /** Presents a color chooser dialog to the user.
   * 
   * @newin{4,10}
   * 
   * @param parent The parent window.
   * @param initial_color The color to select initially.
   * @param cancellable A cancellable to cancel the operation.
   * @param slot A callback to call
   * when the operation is complete.
   */
  void choose_rgba(Window& parent, const Gdk::RGBA& initial_color, const Gio::SlotAsyncReady& slot, const Glib::RefPtr<Gio::Cancellable>& cancellable =  {}) const;

  /// A choose_rgba() convenience overload.
  void choose_rgba(Window& parent, const Gio::SlotAsyncReady& slot, const Glib::RefPtr<Gio::Cancellable>& cancellable =  {}) const;

  /// A choose_rgba() convenience overload.
  void choose_rgba(const Gdk::RGBA& initial_color, const Gio::SlotAsyncReady& slot, const Glib::RefPtr<Gio::Cancellable>& cancellable =  {}) const;

  /// A choose_rgba() convenience overload.
  void choose_rgba(const Gio::SlotAsyncReady& slot, const Glib::RefPtr<Gio::Cancellable>& cancellable =  {}) const;
 

  /** Finishes the choose_rgba() call
   * 
   * @newin{4,10}
   * 
   * @param result The result.
   * @return The selected color.
   * 
   * @throws Gtk::DialogError
   */
  Gdk::RGBA choose_rgba_finish(const Glib::RefPtr<Gio::AsyncResult>& result) const;

  /** A title that may be shown on the color chooser dialog.
   * 
   * @newin{4,10}
   *
   * Default value: ""
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_title() ;

/** A title that may be shown on the color chooser dialog.
   * 
   * @newin{4,10}
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_title() const;

  /** Whether the color chooser dialog is modal.
   * 
   * @newin{4,10}
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_modal() ;

/** Whether the color chooser dialog is modal.
   * 
   * @newin{4,10}
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_modal() const;

  /** Whether colors may have alpha (translucency).
   * 
   * When with-alpha is false, the color that is selected
   * will be forced to have alpha == 1.
   * 
   * @newin{4,10}
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_with_alpha() ;

/** Whether colors may have alpha (translucency).
   * 
   * When with-alpha is false, the color that is selected
   * will be forced to have alpha == 1.
   * 
   * @newin{4,10}
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_with_alpha() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::ColorDialog
   */
  GTKMM_API
  Glib::RefPtr<Gtk::ColorDialog> wrap(GtkColorDialog* object, bool take_copy = false);
}


#endif /* _GTKMM_COLORDIALOG_H */

