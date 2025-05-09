// Generated by gmmproc 2.82.0 -- DO NOT MODIFY!
#ifndef _GTKMM_POPOVER_H
#define _GTKMM_POPOVER_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 2013 The gtkmm Development Team
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

#include <gtkmm/widget.h>
#include <gtkmm/native.h>
#include <gtkmm/shortcutmanager.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkPopover = struct _GtkPopover;
using GtkPopoverClass = struct _GtkPopoverClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API Popover_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** Context dependent bubbles.
 *
 * %Gtk::Popover is a bubble-like context window, primarily meant to
 * provide context-dependent information or options. Popovers are
 * attached to a widget, set with Gtk::Widget::set_parent(). By
 * default they will point to the whole widget area, although this
 * behavior can be changed through Gtk::Popover::set_pointing_to().
 *
 * The position of a popover relative to the widget it is attached to
 * can also be changed through Gtk::Popover::set_position().
 *
 * By default, %Gtk::Popover performs a GTK grab, in order to ensure
 * input events get redirected to it while it is shown, and also so
 * the popover is dismissed in the expected situations (clicks outside
 * the popover, or the Esc key being pressed). If no such modal behavior
 * is desired on a popover, Gtk::Popover::set_autohide() may be called on it
 * to tweak its behavior.
 *
 * @ingroup Widgets
 * @newin{3,12}
 */

class GTKMM_API Popover : public Widget, public ShortcutManager, public Native
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Popover CppObjectType;
  typedef Popover_Class CppClassType;
  typedef GtkPopover BaseObjectType;
  typedef GtkPopoverClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  Popover(Popover&& src) noexcept;
  Popover& operator=(Popover&& src) noexcept;

  // noncopyable
  Popover(const Popover&) = delete;
  Popover& operator=(const Popover&) = delete;

  ~Popover() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend GTKMM_API class Popover_Class;
  static CppClassType popover_class_;

protected:
  explicit Popover(const Glib::ConstructParams& construct_params);
  explicit Popover(GtkPopover* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkPopover*       gobj()       { return reinterpret_cast<GtkPopover*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkPopover* gobj() const { return reinterpret_cast<GtkPopover*>(gobject_); }

private:

  
public:
  Popover();

  
  /** Sets the child widget of @a popover.
   * 
   * @param child The child widget.
   */
  void set_child(Widget& child);
  void unset_child();
  
  /** Gets the child widget of @a popover.
   * 
   * @return The child widget of @a popover.
   */
  Widget* get_child();
  
  /** Gets the child widget of @a popover.
   * 
   * @return The child widget of @a popover.
   */
  const Widget* get_child() const;

  //This cannot take NULL to mean unset.
 

  /** Sets the rectangle that @a popover points to.
   * 
   * This is in the coordinate space of the @a popover parent.
   * 
   * @param rect Rectangle to point to.
   */
  void set_pointing_to(const Gdk::Rectangle& rect);
 

  /** Gets the rectangle that the popover points to.
   * 
   * If a rectangle to point to has been set, this function will
   * return <tt>true</tt> and fill in @a rect with such rectangle, otherwise
   * it will return <tt>false</tt> and fill in @a rect with the parent
   * widget coordinates.
   * 
   * @param rect Location to store the rectangle.
   * @return <tt>true</tt> if a rectangle to point to was set.
   */
  bool get_pointing_to(Gdk::Rectangle& rect) const;

  
  /** Sets the preferred position for @a popover to appear.
   * 
   * If the @a popover is currently visible, it will be immediately
   * updated.
   * 
   * This preference will be respected where possible, although
   * on lack of space (eg. if close to the window edges), the
   * `Gtk::Popover` may choose to appear on the opposite side.
   * 
   * @param position Preferred popover position.
   */
  void set_position(PositionType position =  PositionType::TOP);
  
  /** Returns the preferred position of @a popover.
   * 
   * @return The preferred position.
   */
  PositionType get_position() const;

  
  /** Sets whether @a popover is modal.
   * 
   * A modal popover will grab the keyboard focus on it when being
   * displayed. Focus will wrap around within the popover. Clicking
   * outside the popover area or pressing Esc will dismiss the popover.
   * 
   * Called this function on an already showing popup with a new
   * autohide value different from the current one, will cause the
   * popup to be hidden.
   * 
   * @param autohide <tt>true</tt> to dismiss the popover on outside clicks.
   */
  void set_autohide(bool autohide =  true);
  
  /** Returns whether the popover is modal.
   * 
   * See set_autohide() for the
   * implications of this.
   * 
   * @return <tt>true</tt> if @a popover is modal.
   */
  bool get_autohide() const;

  
  /** Sets whether this popover should draw an arrow
   * pointing at the widget it is relative to.
   * 
   * @param has_arrow <tt>true</tt> to draw an arrow.
   */
  void set_has_arrow(bool has_arrow =  true);
  
  /** Gets whether this popover is showing an arrow
   * pointing at the widget that it is relative to.
   * 
   * @return Whether the popover has an arrow.
   */
  bool get_has_arrow() const;

  
  /** Sets whether mnemonics should be visible.
   * 
   * @param mnemonics_visible The new value.
   */
  void set_mnemonics_visible(bool mnemonics_visible =  true);
  
  /** Gets whether mnemonics are visible.
   * 
   * @return <tt>true</tt> if mnemonics are supposed to be visible
   * in this popover.
   */
  bool get_mnemonics_visible() const;

  
  /** Pops @a popover up.
   */
  void popup();
  
  /** Pops @a popover down.
   * 
   * This may have the side-effect of closing a parent popover
   * as well. See property_cascade_popdown().
   */
  void popdown();

  
  /** Sets the offset to use when calculating the position
   * of the popover.
   * 
   * These values are used when preparing the Gdk::PopupLayout
   * for positioning the popover.
   * 
   * @param x_offset The x offset to adjust the position by.
   * @param y_offset The y offset to adjust the position by.
   */
  void set_offset(int x_offset, int y_offset);
  
  /** Gets the offset previous set with [method@Gtk.Popover.set_offset()].
   * 
   * @param x_offset A location for the x_offset.
   * @param y_offset A location for the y_offset.
   */
  void get_offset(int& x_offset, int& y_offset) const;

  
  /** If @a cascade_popdown is <tt>true</tt>, the popover will be
   * closed when a child modal popover is closed.
   * 
   * If <tt>false</tt>, @a popover will stay visible.
   * 
   * @param cascade_popdown <tt>true</tt> if the popover should follow a child closing.
   */
  void set_cascade_popdown(bool cascade_popdown =  true);
  
  /** Returns whether the popover will close after a modal child is closed.
   * 
   * @return <tt>true</tt> if @a popover will close after a modal child.
   */
  bool get_cascade_popdown() const;

  
  /** Sets the default widget of a `Gtk::Popover`.
   * 
   * The default widget is the widget that’s activated when the user
   * presses Enter in a dialog (for example). This function sets or
   * unsets the default widget for a `Gtk::Popover`.
   * 
   * @param widget A child widget of @a popover to set as
   * the default, or <tt>nullptr</tt> to unset the default widget for the popover.
   */
  void set_default_widget(Widget& widget);

  
  /** Allocate a size for the `Gtk::Popover`.
   * 
   * This function needs to be called in size-allocate by widgets
   * who have a `Gtk::Popover` as child. When using a layout manager,
   * this is happening automatically.
   * 
   * To make a popover appear on screen, use popup().
   */
  void present();

  /** Rectangle in the parent widget that the popover points to.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gdk::Rectangle > property_pointing_to() ;

/** Rectangle in the parent widget that the popover points to.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gdk::Rectangle > property_pointing_to() const;

  /** How to place the popover, relative to its parent.
   *
   * Default value: Gtk::PositionType::BOTTOM
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< PositionType > property_position() ;

/** How to place the popover, relative to its parent.
   *
   * Default value: Gtk::PositionType::BOTTOM
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< PositionType > property_position() const;

  /** Whether to dismiss the popover on outside clicks.
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_autohide() ;

/** Whether to dismiss the popover on outside clicks.
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_autohide() const;

  /** Whether to draw an arrow.
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_has_arrow() ;

/** Whether to draw an arrow.
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_has_arrow() const;

  /** The default widget inside the popover.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Widget* > property_default_widget() ;

/** The default widget inside the popover.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Widget* > property_default_widget() const;

  /** Whether mnemonics are currently visible in this popover.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_mnemonics_visible() ;

/** Whether mnemonics are currently visible in this popover.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_mnemonics_visible() const;

  /** The child widget.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Widget* > property_child() ;

/** The child widget.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Widget* > property_child() const;

  /** Whether the popover pops down after a child popover.
   * 
   * This is used to implement the expected behavior of submenus.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_cascade_popdown() ;

/** Whether the popover pops down after a child popover.
   * 
   * This is used to implement the expected behavior of submenus.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_cascade_popdown() const;


  /**
   * @par Slot Prototype:
   * <tt>void on_my_%closed()</tt>
   *
   * Flags: Run Last
   *
   * Emitted when the popover is closed.
   */

  Glib::SignalProxy<void()> signal_closed();

  
public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_closed().
  virtual void on_closed();


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
   * @relates Gtk::Popover
   */
  GTKMM_API
  Gtk::Popover* wrap(GtkPopover* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_POPOVER_H */

