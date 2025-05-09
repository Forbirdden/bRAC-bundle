// Generated by gmmproc 2.82.0 -- DO NOT MODIFY!
#ifndef _GTKMM_GRIDVIEW_H
#define _GTKMM_GRIDVIEW_H


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

#include <gtkmm/listbase.h>
#include <gtkmm/selectionmodel.h>
#include <gtkmm/listitemfactory.h>
#include <gtkmm/scrollinfo.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkGridView = struct _GtkGridView;
using GtkGridViewClass = struct _GtkGridViewClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API GridView_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** A widget for displaying grids.
 *
 * %Gtk::GridView is a widget to present a view into a large dynamic grid of items.
 *
 * %Gtk::GridView uses its factory to generate one child widget for each visible item
 * and shows them in a grid. The orientation of the grid view determines if the
 * grid reflows vertically or horizontally.
 *
 * %Gtk::GridView allows the user to select items according to the selection
 * characteristics of the model. For models that allow multiple selected items,
 * it is possible to turn on _rubberband selection_, using set_enable_rubberband().
 *
 * @see Gtk::SelectionModel, Gtk::ListView, Gtk::ColumnView
 *
 * @ingroup Widgets
 * @ingroup ListView
 *
 * @newin{3,98}
 */

class GTKMM_API GridView : public ListBase
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef GridView CppObjectType;
  typedef GridView_Class CppClassType;
  typedef GtkGridView BaseObjectType;
  typedef GtkGridViewClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  GridView(GridView&& src) noexcept;
  GridView& operator=(GridView&& src) noexcept;

  // noncopyable
  GridView(const GridView&) = delete;
  GridView& operator=(const GridView&) = delete;

  ~GridView() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend GTKMM_API class GridView_Class;
  static CppClassType gridview_class_;

protected:
  explicit GridView(const Glib::ConstructParams& construct_params);
  explicit GridView(GtkGridView* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkGridView*       gobj()       { return reinterpret_cast<GtkGridView*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkGridView* gobj() const { return reinterpret_cast<GtkGridView*>(gobject_); }

private:


public:
    explicit GridView(const Glib::RefPtr<SelectionModel>& model =  {}, const Glib::RefPtr<ListItemFactory>& factory =  {});


  /** Gets the model that's currently used to read the items displayed.
   * 
   * @return The model in use.
   */
  Glib::RefPtr<SelectionModel> get_model();
  
  /** Gets the model that's currently used to read the items displayed.
   * 
   * @return The model in use.
   */
  Glib::RefPtr<const SelectionModel> get_model() const;
  
  /** Sets the model to use.
   * 
   * This must be a Gtk::SelectionModel.
   * 
   * @param model The model to use.
   */
  void set_model(const Glib::RefPtr<SelectionModel>& model);
  
  /** Sets the `Gtk::ListItemFactory` to use for populating list items.
   * 
   * @param factory The factory to use.
   */
  void set_factory(const Glib::RefPtr<ListItemFactory>& factory);
  
  /** Gets the factory that's currently used to populate list items.
   * 
   * @return The factory in use.
   */
  Glib::RefPtr<ListItemFactory> get_factory();
  
  /** Gets the factory that's currently used to populate list items.
   * 
   * @return The factory in use.
   */
  Glib::RefPtr<const ListItemFactory> get_factory() const;
  
  /** Gets the minimum number of columns that the grid will use.
   * 
   * @return The minimum number of columns.
   */
  guint get_min_columns() const;
  
  /** Sets the minimum number of columns to use.
   * 
   * This number must be at least 1.
   * 
   * If @a min_columns is smaller than the minimum set via
   * set_max_columns(), that value is ignored.
   * 
   * @param min_columns The minimum number of columns.
   */
  void set_min_columns(guint min_columns);
  
  /** Gets the maximum number of columns that the grid will use.
   * 
   * @return The maximum number of columns.
   */
  guint get_max_columns() const;
  
  /** Sets the maximum number of columns to use.
   * 
   * This number must be at least 1.
   * 
   * If @a max_columns is smaller than the minimum set via
   * set_min_columns(), that value is used instead.
   * 
   * @param max_columns The maximum number of columns.
   */
  void set_max_columns(guint max_columns);
  
  /** Sets whether selections can be changed by dragging with the mouse.
   * 
   * @param enable_rubberband <tt>true</tt> to enable rubberband selection.
   */
  void set_enable_rubberband(bool enable_rubberband =  true);
  
  /** Returns whether rows can be selected by dragging with the mouse.
   * 
   * @return <tt>true</tt> if rubberband selection is enabled.
   */
  bool get_enable_rubberband() const;
  
  /** Sets the behavior of the <kbd>Tab</kbd> and <kbd>Shift</kbd>+<kbd>Tab</kbd> keys.
   * 
   * @newin{4,12}
   * 
   * @param tab_behavior The desired tab behavior.
   */
  void set_tab_behavior(ListTabBehavior tab_behavior);
  
  /** Gets the behavior set for the <kbd>Tab</kbd> key.
   * 
   * @newin{4,12}
   * 
   * @return The behavior of the <kbd>Tab</kbd> key.
   */
  ListTabBehavior get_tab_behavior() const;
  
  /** Sets whether items should be activated on single click and
   * selected on hover.
   * 
   * @param single_click_activate <tt>true</tt> to activate items on single click.
   */
  void set_single_click_activate(bool single_click_activate =  true);
  
  /** Returns whether items will be activated on single click and
   * selected on hover.
   * 
   * @return <tt>true</tt> if items are activated on single click.
   */
  bool get_single_click_activate() const;

  // gtk_grid_view_scroll_to() does not take a ref (transfer full).
 

  /** Scrolls to the item at the given position and performs the actions
   * specified in @a flags.
   * 
   * This function works no matter if the gridview is shown or focused.
   * If it isn't, then the changes will take effect once that happens.
   * 
   * @newin{4,12}
   * 
   * @param pos Position of the item. Must be less than the number of
   * items in the view.
   * @param flags Actions to perform.
   * @param scroll Details of how to perform
   * the scroll operation or <tt>nullptr</tt> to scroll into view.
   */
  void scroll_to(guint pos, ListScrollFlags flags =  ListScrollFlags::NONE, const Glib::RefPtr<const ScrollInfo>& scroll =  {});

  /** Factory for populating list items.
   * 
   * The factory must be for configuring Gtk::ListItem objects.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<ListItemFactory> > property_factory() ;

/** Factory for populating list items.
   * 
   * The factory must be for configuring Gtk::ListItem objects.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<ListItemFactory> > property_factory() const;

  /** Maximum number of columns per row.
   * 
   * If this number is smaller than property_min_columns(),
   * that value is used instead.
   *
   * Default value: 7
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint > property_max_columns() ;

/** Maximum number of columns per row.
   * 
   * If this number is smaller than property_min_columns(),
   * that value is used instead.
   *
   * Default value: 7
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_max_columns() const;

  /** Minimum number of columns per row.
   *
   * Default value: 1
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint > property_min_columns() ;

/** Minimum number of columns per row.
   *
   * Default value: 1
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_min_columns() const;

  /** Model for the items displayed.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<SelectionModel> > property_model() ;

/** Model for the items displayed.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<SelectionModel> > property_model() const;

  /** Activate rows on single click and select them on hover.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_single_click_activate() ;

/** Activate rows on single click and select them on hover.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_single_click_activate() const;

  /** Allow rubberband selection.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_enable_rubberband() ;

/** Allow rubberband selection.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_enable_rubberband() const;

  /** Behavior of the <kbd>Tab</kbd> key
   * 
   * @newin{4,12}
   *
   * Default value: Gtk::ListTabBehavior::ALL
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< ListTabBehavior > property_tab_behavior() ;

/** Behavior of the <kbd>Tab</kbd> key
   * 
   * @newin{4,12}
   *
   * Default value: Gtk::ListTabBehavior::ALL
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< ListTabBehavior > property_tab_behavior() const;


  // no_default_handler because GtkGridViewClass is private.
  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%activate(guint position)</tt>
   *
   * Flags: Run Last
   *
   * Emitted when a cell has been activated by the user,
   * usually via activating the GtkGridView|list.activate-item action.
   * 
   * This allows for a convenient way to handle activation in a gridview.
   * See Gtk::ListItem::property_activatable() for details on how to use
   * this signal.
   * 
   * @param position Position of item to activate.
   */

  Glib::SignalProxy<void(guint)> signal_activate();


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
   * @relates Gtk::GridView
   */
  GTKMM_API
  Gtk::GridView* wrap(GtkGridView* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_GRIDVIEW_H */

