// Generated by gmmproc 2.82.0 -- DO NOT MODIFY!
#ifndef _GTKMM_GESTURESWIPE_H
#define _GTKMM_GESTURESWIPE_H


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
using GtkGestureSwipe = struct _GtkGestureSwipe;
using GtkGestureSwipeClass = struct _GtkGestureSwipeClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API GestureSwipe_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{
/** Swipe gesture.
 *
 * This is a Gesture implementation able to recognize
 * swipes. After a press/move/.../move/release sequence happens,
 * signal_swipe() will be emitted, providing the velocity
 * and directionality of the sequence at the time it was lifted.
 *
 * If the velocity is desired in intermediate points,
 * get_velocity() can be called on eg. a
 * Gesture::signal_update() handler.
 *
 * All velocities are reported in pixels/sec units.
 *
 * @newin{3,14}
 *
 * @ingroup Gestures
 */

class GTKMM_API GestureSwipe : public GestureSingle
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = GestureSwipe;
  using CppClassType = GestureSwipe_Class;
  using BaseObjectType = GtkGestureSwipe;
  using BaseClassType = GtkGestureSwipeClass;

  // noncopyable
  GestureSwipe(const GestureSwipe&) = delete;
  GestureSwipe& operator=(const GestureSwipe&) = delete;

private:  friend class GestureSwipe_Class;
  static CppClassType gestureswipe_class_;

protected:
  explicit GestureSwipe(const Glib::ConstructParams& construct_params);
  explicit GestureSwipe(GtkGestureSwipe* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  GestureSwipe(GestureSwipe&& src) noexcept;
  GestureSwipe& operator=(GestureSwipe&& src) noexcept;

  ~GestureSwipe() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkGestureSwipe*       gobj()       { return reinterpret_cast<GtkGestureSwipe*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkGestureSwipe* gobj() const { return reinterpret_cast<GtkGestureSwipe*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkGestureSwipe* gobj_copy();

private:


protected:
  /** Constructs a Gesture that recognizes swipes.
   */
  GestureSwipe();

public:
  /** Creates a Gesture that recognizes swipes.
   *
   * @newin{3,14}
   *
   * @return A RefPtr to a new GestureSwipe.
   */
  
  static Glib::RefPtr<GestureSwipe> create();


  /** Gets the current velocity.
   * 
   * If the gesture is recognized, this function returns <tt>true</tt> and fills
   * in @a velocity_x and @a velocity_y with the recorded velocity, as per the
   * last events processed.
   * 
   * @param velocity_x Return value for the velocity in the X axis, in pixels/sec.
   * @param velocity_y Return value for the velocity in the Y axis, in pixels/sec.
   * @return Whether velocity could be calculated.
   */
  bool get_velocity(double& velocity_x, double& velocity_y) const;

  // no_default_handler because GtkGestureSwipeClass is private.
  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%swipe(double velocity_x, double velocity_y)</tt>
   *
   * Flags: Run Last
   *
   * Emitted when the recognized gesture is finished.
   * 
   * Velocity and direction are a product of previously recorded events.
   * 
   * @param velocity_x Velocity in the X axis, in pixels/sec.
   * @param velocity_y Velocity in the Y axis, in pixels/sec.
   */

  Glib::SignalProxy<void(double, double)> signal_swipe();


  // GestureSwipe has no properties


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
   * @relates Gtk::GestureSwipe
   */
  GTKMM_API
  Glib::RefPtr<Gtk::GestureSwipe> wrap(GtkGestureSwipe* object, bool take_copy = false);
}


#endif /* _GTKMM_GESTURESWIPE_H */

