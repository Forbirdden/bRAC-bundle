// Generated by gmmproc 2.82.0 -- DO NOT MODIFY!
#ifndef _GTKMM_DROPCONTROLLERMOTION_H
#define _GTKMM_DROPCONTROLLERMOTION_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2020 The gtkmm Development Team
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

#include <gtkmm/eventcontroller.h>
#include <gdkmm/drop.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkDropControllerMotion = struct _GtkDropControllerMotion;
using GtkDropControllerMotionClass = struct _GtkDropControllerMotionClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API DropControllerMotion_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{
/** Event controller for motion events during a drop.
 *
 * %Gtk::DropControllerMotion is an event controller meant for tracking
 * the pointer hovering over a widget during a drag and drop operation.
 *
 * It is modeled after Gtk::EventControllerMotion so if you have used
 * that, this should feel really familiar.
 *
 * The drop controller is not able to accept drops, use Gtk::DropTarget
 * for that purpose.
 * 
 * @newin{3,98}
 *
 * @see Gdk::Drop, Gtk::DropTarget
 * @ingroup Gestures
 */

class GTKMM_API DropControllerMotion : public EventController
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = DropControllerMotion;
  using CppClassType = DropControllerMotion_Class;
  using BaseObjectType = GtkDropControllerMotion;
  using BaseClassType = GtkDropControllerMotionClass;

  // noncopyable
  DropControllerMotion(const DropControllerMotion&) = delete;
  DropControllerMotion& operator=(const DropControllerMotion&) = delete;

private:  friend class DropControllerMotion_Class;
  static CppClassType dropcontrollermotion_class_;

protected:
  explicit DropControllerMotion(const Glib::ConstructParams& construct_params);
  explicit DropControllerMotion(GtkDropControllerMotion* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  DropControllerMotion(DropControllerMotion&& src) noexcept;
  DropControllerMotion& operator=(DropControllerMotion&& src) noexcept;

  ~DropControllerMotion() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkDropControllerMotion*       gobj()       { return reinterpret_cast<GtkDropControllerMotion*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkDropControllerMotion* gobj() const { return reinterpret_cast<GtkDropControllerMotion*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkDropControllerMotion* gobj_copy();

private:


protected:
  DropControllerMotion();

public:
  
  static Glib::RefPtr<DropControllerMotion> create();


  /** Returns if a Drag-and-Drop operation is within the widget
   *  @a self or one of its children.
   * 
   * @return <tt>true</tt> if a dragging pointer is within @a self or one of its children.
   */
  bool contains_pointer() const;
  
  /** Returns if a Drag-and-Drop operation is within the widget
   *  @a self, not one of its children.
   * 
   * @return <tt>true</tt> if a dragging pointer is within @a self but
   * not one of its children.
   */
  bool is_pointer() const;
  
  /** Returns the `Gdk::Drop` of a current Drag-and-Drop operation
   * over the widget of @a self.
   * 
   * @return The `Gdk::Drop` currently
   * happening within @a self.
   */
  Glib::RefPtr<Gdk::Drop> get_drop();
  
  /** Returns the `Gdk::Drop` of a current Drag-and-Drop operation
   * over the widget of @a self.
   * 
   * @return The `Gdk::Drop` currently
   * happening within @a self.
   */
  Glib::RefPtr<const Gdk::Drop> get_drop() const;

  // no_default_handler because GtkDropControllerMotionClass is private.
  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%enter(double x, double y)</tt>
   *
   * Flags: Run Last
   *
   * Signals that the pointer has entered the widget.
   * 
   * @param x Coordinates of pointer location.
   * @param y Coordinates of pointer location.
   */

  Glib::SignalProxy<void(double, double)> signal_enter();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%leave()</tt>
   *
   * Flags: Run Last
   *
   * Signals that the pointer has left the widget.
   */

  Glib::SignalProxy<void()> signal_leave();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%motion(double x, double y)</tt>
   *
   * Flags: Run First
   *
   * Emitted when the pointer moves inside the widget.
   * 
   * @param x The x coordinate.
   * @param y The y coordinate.
   */

  Glib::SignalProxy<void(double, double)> signal_motion();


  /** Whether the pointer of a Drag-and-Drop operation is in
   * the controller's widget or a descendant.
   * 
   * See also property_is_pointer().
   * 
   * When handling crossing events, this property is updated
   * before signal_enter(), but after
   * signal_leave() is emitted.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_contains_pointer() const;


  /** The ongoing drop operation over the controller's widget or
   * its descendant.
   * 
   * If no drop operation is going on, this property returns <tt>nullptr</tt>.
   * 
   * The event controller should not modify the @a drop, but it might
   * want to query its properties.
   * 
   * When handling crossing events, this property is updated
   * before signal_enter(), but after
   * signal_leave() is emitted.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Drop> > property_drop() const;


  /** Whether the pointer is in the controllers widget itself,
   * as opposed to in a descendent widget.
   * 
   * See also property_contains_pointer().
   * 
   * When handling crossing events, this property is updated
   * before signal_enter(), but after
   * signal_leave() is emitted.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_is_pointer() const;


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
   * @relates Gtk::DropControllerMotion
   */
  GTKMM_API
  Glib::RefPtr<Gtk::DropControllerMotion> wrap(GtkDropControllerMotion* object, bool take_copy = false);
}


#endif /* _GTKMM_DROPCONTROLLERMOTION_H */

