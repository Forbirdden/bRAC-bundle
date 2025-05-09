// Generated by gmmproc 2.82.0 -- DO NOT MODIFY!
#ifndef _GTKMM_GESTUREDRAG_H
#define _GTKMM_GESTUREDRAG_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2014 The gtkmm Development Team
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

#include <gtkmm/gesturesingle.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkGestureDrag = struct _GtkGestureDrag;
using GtkGestureDragClass = struct _GtkGestureDragClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API GestureDrag_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{
/** Drag gesture.
 *
 * This is a Gesture implementation that recognizes drag
 * operations. The drag operation itself can be tracked through
 * signal_drag_begin(), signal_drag_update() and
 * signal_drag_end(), or the relevant coordinates be
 * extracted through get_offset() and get_start_point().
 *
 * @newin{3,14}
 *
 * @ingroup Gestures
 */

class GTKMM_API GestureDrag : public GestureSingle
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = GestureDrag;
  using CppClassType = GestureDrag_Class;
  using BaseObjectType = GtkGestureDrag;
  using BaseClassType = GtkGestureDragClass;

  // noncopyable
  GestureDrag(const GestureDrag&) = delete;
  GestureDrag& operator=(const GestureDrag&) = delete;

private:  friend class GestureDrag_Class;
  static CppClassType gesturedrag_class_;

protected:
  explicit GestureDrag(const Glib::ConstructParams& construct_params);
  explicit GestureDrag(GtkGestureDrag* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  GestureDrag(GestureDrag&& src) noexcept;
  GestureDrag& operator=(GestureDrag&& src) noexcept;

  ~GestureDrag() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkGestureDrag*       gobj()       { return reinterpret_cast<GtkGestureDrag*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkGestureDrag* gobj() const { return reinterpret_cast<GtkGestureDrag*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkGestureDrag* gobj_copy();

private:


protected:
  /** Constructs a Gesture that recognizes drags.
   */
  GestureDrag();

public:
  /** Creates a Gesture that recognizes drags.
   *
   * @newin{3,14}
   *
   * @return A RefPtr to a new GestureDrag.
   */
  
  static Glib::RefPtr<GestureDrag> create();


  /** Gets the point where the drag started.
   * 
   * If the @a gesture is active, this function returns <tt>true</tt>
   * and fills in @a x and @a y with the drag start coordinates,
   * in widget-relative coordinates.
   * 
   * @param x X coordinate for the drag start point.
   * @param y Y coordinate for the drag start point.
   * @return <tt>true</tt> if the gesture is active.
   */
  bool get_start_point(double& x, double& y) const;
  
  /** Gets the offset from the start point.
   * 
   * If the @a gesture is active, this function returns <tt>true</tt> and
   * fills in @a x and @a y with the coordinates of the current point,
   * as an offset to the starting drag point.
   * 
   * @param x X offset for the current point.
   * @param y Y offset for the current point.
   * @return <tt>true</tt> if the gesture is active.
   */
  bool get_offset(double& x, double& y) const;

  // no_default_handler because GtkGestureDragClass is private.
  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%drag_begin(double start_x, double start_y)</tt>
   *
   * Flags: Run Last
   *
   * Emitted whenever dragging starts.
   * 
   * @param start_x X coordinate, relative to the widget allocation.
   * @param start_y Y coordinate, relative to the widget allocation.
   */

  Glib::SignalProxy<void(double, double)> signal_drag_begin();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%drag_update(double offset_x, double offset_y)</tt>
   *
   * Flags: Run Last
   *
   * Emitted whenever the dragging point moves.
   * 
   * @param offset_x X offset, relative to the start point.
   * @param offset_y Y offset, relative to the start point.
   */

  Glib::SignalProxy<void(double, double)> signal_drag_update();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%drag_end(double offset_x, double offset_y)</tt>
   *
   * Flags: Run Last
   *
   * Emitted whenever the dragging is finished.
   * 
   * @param offset_x X offset, relative to the start point.
   * @param offset_y Y offset, relative to the start point.
   */

  Glib::SignalProxy<void(double, double)> signal_drag_end();


  // GestureDrag has no properties


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
   * @relates Gtk::GestureDrag
   */
  GTKMM_API
  Glib::RefPtr<Gtk::GestureDrag> wrap(GtkGestureDrag* object, bool take_copy = false);
}


#endif /* _GTKMM_GESTUREDRAG_H */

