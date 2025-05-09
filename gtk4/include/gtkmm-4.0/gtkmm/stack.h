// Generated by gmmproc 2.82.0 -- DO NOT MODIFY!
#ifndef _GTKMM_STACK_H
#define _GTKMM_STACK_H


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
#include <gtkmm/stackpage.h>
#include <gtkmm/enums.h>
#include <gtkmm/selectionmodel.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkStack = struct _GtkStack;
using GtkStackClass = struct _GtkStackClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API Stack_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{


/** A container that shows only one child at a time.
 *
 * %Gtk::Stack does not provide a means for users to change the visible
 * child. Instead, the Gtk::StackSwitcher or Gtk::StackSidebar widget can be used with
 * %Gtk::Stack to provide this functionality.
 *
 * %Gtk::Stack maintains a Gtk::StackPage object for each added
 * child, which holds additional per-child properties. You
 * obtain the Gtk::StackPage for a child with get_page().
 *
 * @ingroup Widgets
 * @ingroup Containers
 * @newin{3,10}
 */

class GTKMM_API Stack
  : public Widget
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Stack CppObjectType;
  typedef Stack_Class CppClassType;
  typedef GtkStack BaseObjectType;
  typedef GtkStackClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  Stack(Stack&& src) noexcept;
  Stack& operator=(Stack&& src) noexcept;

  // noncopyable
  Stack(const Stack&) = delete;
  Stack& operator=(const Stack&) = delete;

  ~Stack() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend GTKMM_API class Stack_Class;
  static CppClassType stack_class_;

protected:
  explicit Stack(const Glib::ConstructParams& construct_params);
  explicit Stack(GtkStack* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkStack*       gobj()       { return reinterpret_cast<GtkStack*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkStack* gobj() const { return reinterpret_cast<GtkStack*>(gobject_); }

private:

public:
  Stack();

  
  /** Adds a child to @a stack.
   * 
   * @param child The widget to add.
   * @return The `Gtk::StackPage` for @a child.
   */
  Glib::RefPtr<StackPage> add(Widget& child);
  
  /** Adds a child to @a stack.
   * 
   * The child is identified by the @a name.
   * 
   * @param child The widget to add.
   * @param name The name for @a child.
   * @return The `Gtk::StackPage` for @a child.
   */
  Glib::RefPtr<StackPage> add(Widget& child, const Glib::ustring& name);
  
  /** Adds a child to @a stack.
   * 
   * The child is identified by the @a name. The @a title
   * will be used by `Gtk::StackSwitcher` to represent
   *  @a child in a tab bar, so it should be short.
   * 
   * @param child The widget to add.
   * @param name The name for @a child.
   * @param title A human-readable title for @a child.
   * @return The `Gtk::StackPage` for @a child.
   */
  Glib::RefPtr<StackPage> add(Widget& child, const Glib::ustring& name, const Glib::ustring& title);

  
  /** Removes a child widget from @a stack.
   * 
   * @param child The child to remove.
   */
  void remove(Widget& child);

  
  /** Returns the `Gtk::StackPage` object for @a child.
   * 
   * @param child A child of @a stack.
   * @return The `Gtk::StackPage` for @a child.
   */
  Glib::RefPtr<StackPage> get_page(Widget& child);
  
  /** Returns the `Gtk::StackPage` object for @a child.
   * 
   * @param child A child of @a stack.
   * @return The `Gtk::StackPage` for @a child.
   */
  Glib::RefPtr<const StackPage> get_page(const Widget& child) const;

  
  /** Makes @a child the visible child of @a stack.
   * 
   * If @a child is different from the currently visible child,
   * the transition between the two will be animated with the
   * current transition type of @a stack.
   * 
   * Note that the @a child widget has to be visible itself
   * (see Gtk::Widget::show()) in order to become the visible
   * child of @a stack.
   * 
   * @param child A child of @a stack.
   */
  void set_visible_child(Widget& child);
  
  /** Gets the currently visible child of @a stack.
   * 
   * @return The visible child of the `Gtk::Stack`.
   */
  Widget* get_visible_child();
  
  /** Gets the currently visible child of @a stack.
   * 
   * @return The visible child of the `Gtk::Stack`.
   */
  const Widget* get_visible_child() const;

  
  /** Makes the child with the given name visible.
   * 
   * If @a child is different from the currently visible child,
   * the transition between the two will be animated with the
   * current transition type of @a stack.
   * 
   * Note that the child widget has to be visible itself
   * (see Gtk::Widget::show()) in order to become the visible
   * child of @a stack.
   * 
   * @param name The name of the child to make visible.
   */
  void set_visible_child(const Glib::ustring& name);
  
  /** Makes the child with the given name visible.
   * 
   * Note that the child widget has to be visible itself
   * (see Gtk::Widget::show()) in order to become the visible
   * child of @a stack.
   * 
   * @param name The name of the child to make visible.
   * @param transition The transition type to use.
   */
  void set_visible_child(const Glib::ustring& name, StackTransitionType transition);
  
  /** Returns the name of the currently visible child of @a stack.
   * 
   * @return The name of the visible child
   * of the `Gtk::Stack`.
   */
  Glib::ustring get_visible_child_name() const;

  
  /** Sets the `Gtk::Stack` to be horizontally homogeneous or not.
   * 
   * If it is homogeneous, the `Gtk::Stack` will request the same
   * width for all its children. If it isn't, the stack
   * may change width when a different child becomes visible.
   * 
   * @param hhomogeneous <tt>true</tt> to make @a stack horizontally homogeneous.
   */
  void set_hhomogeneous(bool hhomogeneous =  true);
  
  /** Gets whether @a stack is horizontally homogeneous.
   * 
   * @return Whether @a stack is horizontally homogeneous.
   */
  bool get_hhomogeneous() const;

  
  /** Sets the `Gtk::Stack` to be vertically homogeneous or not.
   * 
   * If it is homogeneous, the `Gtk::Stack` will request the same
   * height for all its children. If it isn't, the stack
   * may change height when a different child becomes visible.
   * 
   * @param vhomogeneous <tt>true</tt> to make @a stack vertically homogeneous.
   */
  void set_vhomogeneous(bool vhomogeneous =  true);
  
  /** Gets whether @a stack is vertically homogeneous.
   * 
   * @return Whether @a stack is vertically homogeneous.
   */
  bool get_vhomogeneous() const;

  
  /** Sets the duration that transitions between pages in @a stack
   * will take.
   * 
   * @param duration The new duration, in milliseconds.
   */
  void set_transition_duration(guint duration);
  
  /** Returns the amount of time (in milliseconds) that
   * transitions between pages in @a stack will take.
   * 
   * @return The transition duration.
   */
  guint get_transition_duration() const;

  
  /** Sets the type of animation that will be used for
   * transitions between pages in @a stack.
   * 
   * Available types include various kinds of fades and slides.
   * 
   * The transition type can be changed without problems
   * at runtime, so it is possible to change the animation
   * based on the page that is about to become current.
   * 
   * @param transition The new transition type.
   */
  void set_transition_type(StackTransitionType transition);
  
  /** Gets the type of animation that will be used
   * for transitions between pages in @a stack.
   * 
   * @return The current transition type of @a stack.
   */
  StackTransitionType get_transition_type() const;

  
  /** Returns whether the @a stack is currently in a transition from one page to
   * another.
   * 
   * @return <tt>true</tt> if the transition is currently running, <tt>false</tt> otherwise.
   */
  bool get_transition_running() const;

  
  /** Finds the child with the name given as the argument.
   * 
   * @param name The name of the child to find.
   * @return The requested child
   * of the `Gtk::Stack`.
   */
  Widget* get_child_by_name(const Glib::ustring& name);
  
  /** Finds the child with the name given as the argument.
   * 
   * @param name The name of the child to find.
   * @return The requested child
   * of the `Gtk::Stack`.
   */
  const Widget* get_child_by_name(const Glib::ustring& name) const;

  
  /** Sets whether or not @a stack will interpolate its size when
   * changing the visible child.
   * 
   * If the property_interpolate_size() property is set
   * to <tt>true</tt>, @a stack will interpolate its size between the current
   * one and the one it'll take after changing the visible child,
   * according to the set transition duration.
   * 
   * @newin{3,20}
   * 
   * @param interpolate_size The new value.
   */
  void set_interpolate_size(bool interpolate_size);
  
  /** Returns whether the `Gtk::Stack` is set up to interpolate between
   * the sizes of children on page switch.
   * 
   * @newin{3,20}
   * 
   * @return <tt>true</tt> if child sizes are interpolated.
   */
  bool get_interpolate_size() const;

  /** Returns a Gio::ListModel that contains the pages of the stack.
   *
   * It can be used to keep an up-to-date view. The model also
   * implements Gtk::SelectionModel and can be used to track and
   * modify the visible page.
   *
   * To use Gio::ListModel API, do something like
   * @code
   * auto pages = stack->get_pages();
   * auto list_model = std::dynamic_pointer_cast<Gio::ListModel>(pages);
   * if (list_model)
   *   list_model->do_something();
   * @endcode
   *
   * @return A Gtk::SelectionModel for the stack's children. The caller becomes
   * the owner of the returned instance. When the caller's reference is dropped,
   * the instance is deleted.
   */
  Glib::RefPtr<SelectionModel> get_pages();

  
  /** See the non-const version.
   */
  Glib::RefPtr<const SelectionModel> get_pages() const;

  /** <tt>true</tt> if the stack allocates the same width for all children.
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_hhomogeneous() ;

/** <tt>true</tt> if the stack allocates the same width for all children.
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_hhomogeneous() const;

  /** The animation duration, in milliseconds.
   *
   * Default value: 200
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< unsigned int > property_transition_duration() ;

/** The animation duration, in milliseconds.
   *
   * Default value: 200
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< unsigned int > property_transition_duration() const;

  /** Whether or not the transition is currently running.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_transition_running() const;


  /** The type of animation used to transition.
   *
   * Default value: Gtk::StackTransitionType::NONE
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< StackTransitionType > property_transition_type() ;

/** The type of animation used to transition.
   *
   * Default value: Gtk::StackTransitionType::NONE
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< StackTransitionType > property_transition_type() const;

  /** <tt>true</tt> if the stack allocates the same height for all children.
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_vhomogeneous() ;

/** <tt>true</tt> if the stack allocates the same height for all children.
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_vhomogeneous() const;

  /** The widget currently visible in the stack.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Widget* > property_visible_child() ;

/** The widget currently visible in the stack.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Widget* > property_visible_child() const;

  /** The name of the widget currently visible in the stack.
   *
   * Default value: ""
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_visible_child_name() ;

/** The name of the widget currently visible in the stack.
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_visible_child_name() const;

  /** Whether or not the size should smoothly change during the transition.
   * 
   * @newin{3,20}
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_interpolate_size() ;

/** Whether or not the size should smoothly change during the transition.
   * 
   * @newin{3,20}
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_interpolate_size() const;

  /** A selection model with the stack pages.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<SelectionModel> > property_pages() const;


  // There are no signals or vfuncs.


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} //namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Stack
   */
  GTKMM_API
  Gtk::Stack* wrap(GtkStack* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_STACK_H */

