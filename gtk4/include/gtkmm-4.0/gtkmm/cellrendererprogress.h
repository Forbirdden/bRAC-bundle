// Generated by gmmproc 2.82.0 -- DO NOT MODIFY!
#ifndef _GTKMM_CELLRENDERERPROGRESS_H
#define _GTKMM_CELLRENDERERPROGRESS_H


#ifndef GTKMM_DISABLE_DEPRECATED


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2004 The gtkmm Development Team
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
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <gtkmm/cellrenderer.h>
#include <gtkmm/orientable.h>


 // The entire file is deprecated.

#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkCellRendererProgress = struct _GtkCellRendererProgress;
using GtkCellRendererProgressClass = struct _GtkCellRendererProgressClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API CellRendererProgress_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** Renders numbers as progress bars.
 *
 * @ingroup TreeView
 * @deprecated 4.10: List views use widgets to display their contents.
 *   You should use Gtk::ProgressBar instead.
 */

class GTKMM_API CellRendererProgress
 : public CellRenderer,
   public Orientable
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef CellRendererProgress CppObjectType;
  typedef CellRendererProgress_Class CppClassType;
  typedef GtkCellRendererProgress BaseObjectType;
  typedef GtkCellRendererProgressClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  CellRendererProgress(CellRendererProgress&& src) noexcept;
  CellRendererProgress& operator=(CellRendererProgress&& src) noexcept;

  // noncopyable
  CellRendererProgress(const CellRendererProgress&) = delete;
  CellRendererProgress& operator=(const CellRendererProgress&) = delete;

  ~CellRendererProgress() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend GTKMM_API class CellRendererProgress_Class;
  static CppClassType cellrendererprogress_class_;

protected:
  explicit CellRendererProgress(const Glib::ConstructParams& construct_params);
  explicit CellRendererProgress(GtkCellRendererProgress* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkCellRendererProgress*       gobj()       { return reinterpret_cast<GtkCellRendererProgress*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkCellRendererProgress* gobj() const { return reinterpret_cast<GtkCellRendererProgress*>(gobject_); }

private:

  
public:
  CellRendererProgress();

  /** The "value" property determines the percentage to which the
   * progress bar will be "filled in".
   *
   * Default value: 0
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_value() ;

/** The "value" property determines the percentage to which the
   * progress bar will be "filled in".
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_value() const;

  /** The "text" property determines the label which will be drawn
   * over the progress bar. Setting this property to <tt>nullptr</tt> causes the default
   * label to be displayed. Setting this property to an empty string causes
   * no label to be displayed.
   *
   * Default value: ""
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_text() ;

/** The "text" property determines the label which will be drawn
   * over the progress bar. Setting this property to <tt>nullptr</tt> causes the default
   * label to be displayed. Setting this property to an empty string causes
   * no label to be displayed.
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_text() const;

  /** Setting this to a non-negative value causes the cell renderer to
   * enter "activity mode", where a block bounces back and forth to
   * indicate that some progress is made, without specifying exactly how
   * much.
   * 
   * Each increment of the property causes the block to move by a little
   * bit.
   * 
   * To indicate that the activity has not started yet, set the property
   * to zero. To indicate completion, set the property to G_MAXINT.
   *
   * Default value: -1
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_pulse() ;

/** Setting this to a non-negative value causes the cell renderer to
   * enter "activity mode", where a block bounces back and forth to
   * indicate that some progress is made, without specifying exactly how
   * much.
   * 
   * Each increment of the property causes the block to move by a little
   * bit.
   * 
   * To indicate that the activity has not started yet, set the property
   * to zero. To indicate completion, set the property to G_MAXINT.
   *
   * Default value: -1
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_pulse() const;

  /** The "text-xalign" property controls the horizontal alignment of the
   * text in the progress bar.  Valid values range from 0 (left) to 1
   * (right).  Reserved for RTL layouts.
   *
   * Default value: 0.5
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< float > property_text_xalign() ;

/** The "text-xalign" property controls the horizontal alignment of the
   * text in the progress bar.  Valid values range from 0 (left) to 1
   * (right).  Reserved for RTL layouts.
   *
   * Default value: 0.5
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< float > property_text_xalign() const;

  /** The "text-yalign" property controls the vertical alignment of the
   * text in the progress bar.  Valid values range from 0 (top) to 1
   * (bottom).
   *
   * Default value: 0.5
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< float > property_text_yalign() ;

/** The "text-yalign" property controls the vertical alignment of the
   * text in the progress bar.  Valid values range from 0 (top) to 1
   * (bottom).
   *
   * Default value: 0.5
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< float > property_text_yalign() const;

  /** Whether progess is inverted.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_inverted() ;

/** Whether progess is inverted.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_inverted() const;


  Glib::PropertyProxy_Base _property_renderable() override;


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
   * @relates Gtk::CellRendererProgress
   */
  GTKMM_API
  Gtk::CellRendererProgress* wrap(GtkCellRendererProgress* object, bool take_copy = false);
} //namespace Glib


#endif // GTKMM_DISABLE_DEPRECATED


#endif /* _GTKMM_CELLRENDERERPROGRESS_H */

