// Generated by gmmproc 2.82.0 -- DO NOT MODIFY!
#ifndef _GTKMM_DROPDOWN_H
#define _GTKMM_DROPDOWN_H


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

#include <giomm/listmodel.h>
#include <gtkmm/listitemfactory.h>
#include <gtkmm/expression.h>
#include <gtkmm/stringfilter.h>
#include <gtkmm/widget.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API DropDown_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** Choose an item from a list.
 *
 * %Gtk::DropDown is a widget that allows the user to choose an item
 * from a list of options. The %Gtk::DropDown displays the selected
 * choice.
 *
 * The options are given to %Gtk::DropDown in the form of Gio::ListModel,
 * and how the individual options are represented is determined by
 * a Gtk::ListItemFactory. The default factory displays simple strings.
 *
 * %Gtk::DropDown knows how to obtain strings from the items in a
 * Gtk::StringList; for other models, you have to provide an expression
 * to find the strings via set_expression().
 *
 * %Gtk::DropDown can optionally allow search in the popup, which is
 * useful if the list of options is long. To enable the search entry,
 * use set_enable_search().
 *
 * @par CSS nodes
 * %Gtk::DropDown has a single CSS node with name dropdown,
 * with the button and popover nodes as children.
 *
 * @see Gtk::ComboBox
 *
 * @ingroup Widgets
 *
 * @newin{3,98}
 */

class GTKMM_API DropDown : public Widget
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef DropDown CppObjectType;
  typedef DropDown_Class CppClassType;
  typedef GtkDropDown BaseObjectType;
  typedef GtkDropDownClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  DropDown(DropDown&& src) noexcept;
  DropDown& operator=(DropDown&& src) noexcept;

  // noncopyable
  DropDown(const DropDown&) = delete;
  DropDown& operator=(const DropDown&) = delete;

  ~DropDown() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend GTKMM_API class DropDown_Class;
  static CppClassType dropdown_class_;

protected:
  explicit DropDown(const Glib::ConstructParams& construct_params);
  explicit DropDown(GtkDropDown* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkDropDown*       gobj()       { return reinterpret_cast<GtkDropDown*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkDropDown* gobj() const { return reinterpret_cast<GtkDropDown*>(gobject_); }

private:

        
public:
    explicit DropDown(const Glib::RefPtr<Gio::ListModel>& model =  {}, const Glib::RefPtr<Expression<Glib::ustring>>& expression =  {});


  /** Creates a new %DropDown that is populated with the strings in @a strings.
   *
   * @param strings The strings to put in the dropdown.
   */
  explicit DropDown(const std::vector<Glib::ustring>& strings);

  
  /** Sets the `Gio::ListModel` to use.
   * 
   * @param model The model to use.
   */
  void set_model(const Glib::RefPtr<Gio::ListModel>& model);
  
  /** Gets the model that provides the displayed items.
   * 
   * @return The model in use.
   */
  Glib::RefPtr<Gio::ListModel> get_model();
  
  /** Gets the model that provides the displayed items.
   * 
   * @return The model in use.
   */
  Glib::RefPtr<const Gio::ListModel> get_model() const;
  
  /** Selects the item at the given position.
   * 
   * @param position The position of the item to select, or GTK_INVALID_LIST_POSITION.
   */
  void set_selected(guint position);
  
  /** Gets the position of the selected item.
   * 
   * @return The position of the selected item, or GTK_INVALID_LIST_POSITION
   * if no item is selected.
   */
  guint get_selected() const;

 
  /** Gets the selected item. If no item is selected, <tt>nullptr</tt> is returned.
   * 
   * @return The selected item.
   */
  Glib::RefPtr<Glib::ObjectBase> get_selected_item();
  
  /** Gets the selected item. If no item is selected, <tt>nullptr</tt> is returned.
   * 
   * @return The selected item.
   */
  Glib::RefPtr<const Glib::ObjectBase> get_selected_item() const;

  
  /** Sets the `Gtk::ListItemFactory` to use for populating list items.
   * 
   * @param factory The factory to use.
   */
  void set_factory(const Glib::RefPtr<ListItemFactory>& factory);
  
  /** Gets the factory that's currently used to populate list items.
   * 
   * The factory returned by this function is always used for the
   * item in the button. It is also used for items in the popup
   * if property_list_factory() is not set.
   * 
   * @return The factory in use.
   */
  Glib::RefPtr<ListItemFactory> get_factory();
  
  /** Gets the factory that's currently used to populate list items.
   * 
   * The factory returned by this function is always used for the
   * item in the button. It is also used for items in the popup
   * if property_list_factory() is not set.
   * 
   * @return The factory in use.
   */
  Glib::RefPtr<const ListItemFactory> get_factory() const;
  
  /** Sets the `Gtk::ListItemFactory` to use for populating list items in the popup.
   * 
   * @param factory The factory to use.
   */
  void set_list_factory(const Glib::RefPtr<ListItemFactory>& factory);
  
  /** Gets the factory that's currently used to populate list items in the popup.
   * 
   * @return The factory in use.
   */
  Glib::RefPtr<ListItemFactory> get_list_factory();
  
  /** Gets the factory that's currently used to populate list items in the popup.
   * 
   * @return The factory in use.
   */
  Glib::RefPtr<const ListItemFactory> get_list_factory() const;
  
  /** Sets the `Gtk::ListItemFactory` to use for creating header widgets for the popup.
   * 
   * @newin{4,12}
   * 
   * @param factory The factory to use.
   */
  void set_header_factory(const Glib::RefPtr<ListItemFactory>& factory);
  
  /** Gets the factory that's currently used to create header widgets for the popup.
   * 
   * @newin{4,12}
   * 
   * @return The factory in use.
   */
  Glib::RefPtr<ListItemFactory> get_header_factory();
  
  /** Gets the factory that's currently used to create header widgets for the popup.
   * 
   * @newin{4,12}
   * 
   * @return The factory in use.
   */
  Glib::RefPtr<const ListItemFactory> get_header_factory() const;

  
  /** Sets the expression that gets evaluated to obtain strings from items.
   * 
   * This is used for search in the popup. The expression must have
   * a value type of G_TYPE_STRING.
   * 
   * @param expression A `Gtk::Expression`.
   */
  void set_expression(const Glib::RefPtr<Expression<Glib::ustring>>& expression);
  
  /** Gets the expression set that is used to obtain strings from items.
   * 
   * See set_expression().
   * 
   * @return A `Gtk::Expression`.
   */
  Glib::RefPtr<Expression<Glib::ustring>> get_expression();
  
  /** Gets the expression set that is used to obtain strings from items.
   * 
   * See set_expression().
   * 
   * @return A `Gtk::Expression`.
   */
  Glib::RefPtr<const Expression<Glib::ustring>> get_expression() const;

  
  /** Sets whether a search entry will be shown in the popup that
   * allows to search for items in the list.
   * 
   * Note that property_expression() must be set for
   * search to work.
   * 
   * @param enable_search Whether to enable search.
   */
  void set_enable_search(bool enable_search =  true);
  
  /** Returns whether search is enabled.
   * 
   * @return <tt>true</tt> if the popup includes a search entry.
   */
  bool get_enable_search() const;
  
  /** Sets whether an arrow will be displayed within the widget.
   * 
   * @newin{4,6}
   * 
   * @param show_arrow Whether to show an arrow within the widget.
   */
  void set_show_arrow(bool show_arrow =  true);
  
  /** Returns whether to show an arrow within the widget.
   * 
   * @newin{4,6}
   * 
   * @return <tt>true</tt> if an arrow will be shown.
   */
  bool set_show_arrow() const;
  
  /** Sets the match mode for the search filter.
   * 
   * @newin{4,12}
   * 
   * @param search_match_mode The new match mode.
   */
  void set_search_match_mode(StringFilter::MatchMode search_match_mode);
  
  /** Returns the match mode that the search filter is using.
   * 
   * @newin{4,12}
   * 
   * @return The match mode of the search filter.
   */
  StringFilter::MatchMode get_search_match_mode() const;

  /** Factory for populating list items.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<ListItemFactory> > property_factory() ;

/** Factory for populating list items.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<ListItemFactory> > property_factory() const;

  /** The factory for creating header widgets for the popup.
   * 
   * @newin{4,12}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<ListItemFactory> > property_header_factory() ;

/** The factory for creating header widgets for the popup.
   * 
   * @newin{4,12}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<ListItemFactory> > property_header_factory() const;

  /** The factory for populating list items in the popup.
   * 
   * If this is not set, property_factory() is used.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<ListItemFactory> > property_list_factory() ;

/** The factory for populating list items in the popup.
   * 
   * If this is not set, property_factory() is used.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<ListItemFactory> > property_list_factory() const;

  /** Model for the displayed items.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gio::ListModel> > property_model() ;

/** Model for the displayed items.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::ListModel> > property_model() const;

  /** The position of the selected item.
   * 
   * If no item is selected, the property has the value
   * GTK_INVALID_LIST_POSITION.
   *
   * Default value: 4294967295
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint > property_selected() ;

/** The position of the selected item.
   * 
   * If no item is selected, the property has the value
   * GTK_INVALID_LIST_POSITION.
   *
   * Default value: 4294967295
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_selected() const;

  /** The selected item.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Glib::ObjectBase> > property_selected_item() const;


  /** Whether to show a search entry in the popup.
   * 
   * Note that search requires property_expression()
   * to be set.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_enable_search() ;

/** Whether to show a search entry in the popup.
   * 
   * Note that search requires property_expression()
   * to be set.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_enable_search() const;

  /** An expression to evaluate to obtain strings to match against the search
   * term.
   * 
   * See property_enable_search() for how to enable search.
   * If property_factory() is not set, the expression is also
   * used to bind strings to labels produced by a default factory.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Expression<Glib::ustring>> > property_expression() ;

/** An expression to evaluate to obtain strings to match against the search
   * term.
   * 
   * See property_enable_search() for how to enable search.
   * If property_factory() is not set, the expression is also
   * used to bind strings to labels produced by a default factory.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Expression<Glib::ustring>> > property_expression() const;

  /** Whether to show an arrow within the GtkDropDown widget.
   * 
   * @newin{4,6}
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_show_arrow() ;

/** Whether to show an arrow within the GtkDropDown widget.
   * 
   * @newin{4,6}
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_show_arrow() const;

  /** The match mode for the search filter.
   * 
   * @newin{4,12}
   *
   * Default value: Gtk::StringFilter::MatchMode::PREFIX
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< StringFilter::MatchMode > property_search_match_mode() ;

/** The match mode for the search filter.
   * 
   * @newin{4,12}
   *
   * Default value: Gtk::StringFilter::MatchMode::PREFIX
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< StringFilter::MatchMode > property_search_match_mode() const;


  // no_default_handler because GtkDropDownClass is private.
  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%activate()</tt>
   *
   * Flags: Run First, Action
   *
   * Emitted to when the drop down is activated.
   * 
   * The `::activate` signal on `Gtk::DropDown` is an action signal and
   * emitting it causes the drop down to pop up its dropdown.
   * 
   * @newin{4,18}
   */

  Glib::SignalProxy<void()> signal_activate();


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
   * @relates Gtk::DropDown
   */
  GTKMM_API
  Gtk::DropDown* wrap(GtkDropDown* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_DROPDOWN_H */

