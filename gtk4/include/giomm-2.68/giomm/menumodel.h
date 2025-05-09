// Generated by gmmproc 2.84.0 -- DO NOT MODIFY!
#ifndef _GIOMM_MENUMODEL_H
#define _GIOMM_MENUMODEL_H

#include <giommconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2012 The giomm Development Team
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
 * License along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */


#include <glibmm/object.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GMenuModel = struct _GMenuModel;
using GMenuModelClass = struct _GMenuModelClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class GIOMM_API MenuModel_Class; } // namespace Gio
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{

class GIOMM_API MenuAttributeIter;
class GIOMM_API MenuLinkIter;

/** MenuModel - An abstract class representing the contents of a menu.
 * MenuModel represents the contents of a menu -- an ordered list of menu
 * items. The items are associated with actions, which can be activated through
 * them. Items can be grouped in sections, and may have submenus associated
 * with them. Both items and sections usually have some representation data,
 * such as labels or icons. The type of the associated action (ie whether it is
 * stateful, and what kind of state it has) can influence the representation of
 * the item.
 *
 * The conceptual model of menus in MenuModel is hierarchical: sections and
 * submenus are again represented by MenuModels. Menus themselves do not define
 * their own roles. Rather, the role of a particular MenuModel is defined by
 * the item that references it (or, in the case of the 'root' menu, is defined
 * by the context in which it is used).
 *
 * The motivation for this abstract model of application controls is that
 * modern user interfaces tend to make these controls available outside the
 * application. Examples include global menus, jumplists, dash boards, etc. To
 * support such uses, it is necessary to 'export' information about actions and
 * their representation in menus, which is exactly what
 * Gio::DBus::Connection::export_action_group() and the
 * Gio::DBus::Connection::export_menu_model() do for ActionGroup and MenuModel.
 * The client-side counterparts to make use of the exported information are
 * Gio::DBus::ActionGroup and Gio::DBus::MenuModel.
 *
 * The API of MenuModel is very generic, with iterators for the attributes and
 * links of an item, see iterate_item_attributes() and iterate_item_links().
 * The 'standard' attributes and link types have predefined names,
 * listed in the enums Gio::MenuModel::Attribute and Gio::MenuModel::Link.
 *
 * Items in a MenuModel represent active controls if they refer to an action
 * that can get activated when the user interacts with the menu item. The
 * reference to the action is encoded by the string id in the
 * Gio::MenuModel::Attribute::ACTION attribute. An action id uniquely identifies an
 * action in an action group. Which action group(s) provide actions depends on
 * the context in which the menu model is used. E.g. when the model is exported
 * as the application menu of a Gtk::Application, actions can be
 * application-wide or window-specific (and thus come from two different action
 * groups). By convention, the application-wide actions have names that start
 * with "app.", while the names of window-specific actions start with "win.".
 *
 * While a wide variety of stateful actions is possible, the following is the
 * minimum that is expected to be supported by all users of exported menu
 * information:
 *
 * - an action with no parameter type and no state
 * - an action with no parameter type and boolean state
 * - an action with string parameter type and string state
 *
 * <b>Stateless.</b>  A stateless action typically corresponds to an ordinary
 * menu item. Selecting such a menu item will activate the action (with no
 * parameter).
 *
 * <b>Boolean State.</b>  An action with a boolean state will most typically be
 * used with a "toggle" or "switch" menu item. The state can be set directly,
 * but activating the action (with no parameter) results in the state being
 * toggled. Selecting a toggle menu item will activate the action. The menu
 * item should be rendered as "checked" when the state is true.
 *
 * <b>String Parameter and State.</b>  Actions with string parameters and state
 * will most typically be used to represent an enumerated choice over the items
 * available for a group of radio menu items. Activating the action with a
 * string parameter is equivalent to setting that parameter as the state. Radio
 * menu items, in addition to being associated with the action, will have a
 * target value. Selecting that menu item will result in activation of the
 * action with the target value as the parameter. The menu item should be
 * rendered as "selected" when the state of the action is equal to the target
 * value of the menu item.
 *
 * See the C API docs for a graphical example.
 * @newin{2,32}
 */

class GIOMM_API MenuModel : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = MenuModel;
  using CppClassType = MenuModel_Class;
  using BaseObjectType = GMenuModel;
  using BaseClassType = GMenuModelClass;

  // noncopyable
  MenuModel(const MenuModel&) = delete;
  MenuModel& operator=(const MenuModel&) = delete;

private:  friend class MenuModel_Class;
  static CppClassType menumodel_class_;

protected:
  explicit MenuModel(const Glib::ConstructParams& construct_params);
  explicit MenuModel(GMenuModel* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  MenuModel(MenuModel&& src) noexcept;
  MenuModel& operator=(MenuModel&& src) noexcept;

  ~MenuModel() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GMenuModel*       gobj()       { return reinterpret_cast<GMenuModel*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GMenuModel* gobj() const { return reinterpret_cast<GMenuModel*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GMenuModel* gobj_copy();

private:


protected:
  MenuModel();

public:

// Keep the enum values in sync with giomm_get_menu_attribute() in menumodel.ccg.
/** Attributes in Gio::MenuModel::get_item_attribute().
 *
 * @ingroup giommEnums
 */
enum class Attribute
{
  /** The "action" menu attribute.
   *
   * The menu item attribute which holds the action name of the item.  %Action
   * names are namespaced with an identifier for the action group in which the
   * action resides. For example, "win." for window-specific actions and "app."
   * for application-wide actions.
   */
  ACTION,

  /** The "label" menu attribute.
   *
   * The menu item attribute which holds the label of the item.
   */
  LABEL,

  /** The "target" menu attribute.
   *
   * The menu item attribute which holds the target with which the item's action
   * will be activated.
   */
  TARGET,

  /** The "action-namespace" menu attribute.
   *
   * The menu item attribute that holds the namespace for all action names in
   * menus that are linked from this item.
   *
   * @newin{2,66}
   */
  ACTION_NAMESPACE,

  /** The "icon" menu attribute.
   *
   * The menu item attribute which holds the icon of the item.
   *
   * The icon is stored in the format returned by Gio::Icon::serialize().
   *
   * This attribute is intended only to represent 'noun' icons such as
   * favicons for a webpage, or application icons.  It should not be used
   * for 'verbs' (ie: stock icons).
   *
   * @newin{2,66}
   */
  ICON,
};

// Keep the enum values in sync with giomm_get_menu_link() in menumodel.ccg.
/** %Link types in Gio::MenuModel::get_item_link().
 *
 * @ingroup giommEnums
 */
enum class Link
{
  /** The "section" menu link.
   *
   * The name of the link that associates a menu item with a section.  The linked
   * menu will usually be shown in place of the menu item, using the item's label
   * as a header.
   */
  SECTION,

  /** The "submenu" menu link.
   *
   * The name of the link that associates a menu item with a submenu.
   */
  SUBMENU
};


  //TODO: Add a get_item_attribute() templated method to get values directly
  //instead of returning a Glib::VariantBase?

  
  /** Queries the item at position @a item_index in @a model for the attribute
   * specified by @a attribute.
   * 
   * If @a expected_type is non-<tt>nullptr</tt> then it specifies the expected type of
   * the attribute.  If it is <tt>nullptr</tt> then any type will be accepted.
   * 
   * If the attribute exists and matches @a expected_type (or if the
   * expected type is unspecified) then the value is returned.
   * 
   * If the attribute does not exist, or does not match the expected type
   * then <tt>nullptr</tt> is returned.
   * 
   * @newin{2,32}
   * 
   * @param item_index The index of the item.
   * @param attribute The attribute to query.
   * @param expected_type The expected type of the attribute, or
   * <tt>nullptr</tt>.
   * @return The value of the attribute.
   */
  Glib::VariantBase get_item_attribute(int item_index, Attribute attribute, const Glib::VariantType& expected_type) const;

  // Ignore varargs function
  

  /** Queries the item at position @a item_index in @a model for the link
   * specified by @a link.
   * 
   * If the link exists, the linked MenuModel is returned.  If the link
   * does not exist, <tt>nullptr</tt> is returned.
   * 
   * @newin{2,32}
   * 
   * @param item_index The index of the item.
   * @param link The link to query.
   * @return The linked MenuModel, or <tt>nullptr</tt>.
   */
  Glib::RefPtr<MenuModel> get_item_link(int item_index, Link link);
  
  /** Queries the item at position @a item_index in @a model for the link
   * specified by @a link.
   * 
   * If the link exists, the linked MenuModel is returned.  If the link
   * does not exist, <tt>nullptr</tt> is returned.
   * 
   * @newin{2,32}
   * 
   * @param item_index The index of the item.
   * @param link The link to query.
   * @return The linked MenuModel, or <tt>nullptr</tt>.
   */
  Glib::RefPtr<const MenuModel> get_item_link(int item_index, Link link) const;

  
  /** Queries if @a model is mutable.
   * 
   * An immutable MenuModel will never emit the MenuModel::signal_items_changed()
   * signal. Consumers of the model may make optimisations accordingly.
   * 
   * @newin{2,32}
   * 
   * @return <tt>true</tt> if the model is mutable (ie: "items-changed" may be
   * emitted).
   */
  bool is_mutable() const;
  
  /** Query the number of items in @a model.
   * 
   * @newin{2,32}
   * 
   * @return The number of items.
   */
  int get_n_items() const;

  
  /** Creates a MenuAttributeIter to iterate over the attributes of
   * the item at position @a item_index in @a model.
   * 
   * You must free the iterator with Glib::object_unref() when you are done.
   * 
   * @newin{2,32}
   * 
   * @param item_index The index of the item.
   * @return A new MenuAttributeIter.
   */
  Glib::RefPtr<MenuAttributeIter> iterate_item_attributes(int item_index);
  
  /** Creates a MenuAttributeIter to iterate over the attributes of
   * the item at position @a item_index in @a model.
   * 
   * You must free the iterator with Glib::object_unref() when you are done.
   * 
   * @newin{2,32}
   * 
   * @param item_index The index of the item.
   * @return A new MenuAttributeIter.
   */
  Glib::RefPtr<const MenuAttributeIter> iterate_item_attributes(int item_index) const;

  
  /** Creates a MenuLinkIter to iterate over the links of the item at
   * position @a item_index in @a model.
   * 
   * You must free the iterator with Glib::object_unref() when you are done.
   * 
   * @newin{2,32}
   * 
   * @param item_index The index of the item.
   * @return A new MenuLinkIter.
   */
  Glib::RefPtr<MenuLinkIter> iterate_item_links(int item_index);
  
  /** Creates a MenuLinkIter to iterate over the links of the item at
   * position @a item_index in @a model.
   * 
   * You must free the iterator with Glib::object_unref() when you are done.
   * 
   * @newin{2,32}
   * 
   * @param item_index The index of the item.
   * @return A new MenuLinkIter.
   */
  Glib::RefPtr<const MenuLinkIter> iterate_item_links(int item_index) const;

  
  /** Requests emission of the MenuModel::signal_items_changed() signal on @a model.
   * 
   * This function should never be called except by MenuModel
   * subclasses.  Any other calls to this function will very likely lead
   * to a violation of the interface of the model.
   * 
   * The implementation should update its internal representation of the
   * menu before emitting the signal.  The implementation should further
   * expect to receive queries about the new state of the menu (and
   * particularly added menu items) while signal handlers are running.
   * 
   * The implementation must dispatch this call directly from a mainloop
   * entry and not in response to calls -- particularly those from the
   * MenuModel API.  Said another way: the menu must not change while
   * user code is running without returning to the mainloop.
   * 
   * @newin{2,32}
   * 
   * @param position The position of the change.
   * @param removed The number of items removed.
   * @param added The number of items added.
   */
  void items_changed(int position, int removed, int added);

  // The items-changed signal can't have a default handler in glibmm, because it does not have one in glib.
  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%items_changed(int position, int removed, int added)</tt>
   *
   * Flags: Run Last
   *
   * Emitted when a change has occurred to the menu.
   * 
   * The only changes that can occur to a menu is that items are removed
   * or added.  Items may not change (except by being removed and added
   * back in the same location).  This signal is capable of describing
   * both of those changes (at the same time).
   * 
   * The signal means that starting at the index @a position, @a removed
   * items were removed and @a added items were added in their place.  If
   *  @a removed is zero then only items were added.  If @a added is zero
   * then only items were removed.
   * 
   * As an example, if the menu contains items a, b, c, d (in that
   * order) and the signal (2, 1, 3) occurs then the new composition of
   * the menu will be a, b, _, _, _, d (with each _ representing some
   * new item).
   * 
   * Signal handlers may query the model (particularly the added items)
   * and expect to see the results of the modification that is being
   * reported.  The signal is emitted after the modification.
   * 
   * @param position The position of the change.
   * @param removed The number of items removed.
   * @param added The number of items added.
   */

  Glib::SignalProxy<void(int, int, int)> signal_items_changed();


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::MenuModel
   */
  GIOMM_API
  Glib::RefPtr<Gio::MenuModel> wrap(GMenuModel* object, bool take_copy = false);
}


#endif /* _GIOMM_MENUMODEL_H */

