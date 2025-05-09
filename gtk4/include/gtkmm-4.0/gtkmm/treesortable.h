// Generated by gmmproc 2.82.0 -- DO NOT MODIFY!
#ifndef _GTKMM_TREESORTABLE_H
#define _GTKMM_TREESORTABLE_H

#include <gtkmmconfig.h>

#ifndef GTKMM_DISABLE_DEPRECATED


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 1998-2002 The gtkmm Development Team
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

// This is for including the config header before any code (such as
// the #ifndef GTKMM_DISABLE_DEPRECATED in deprecated classes) is generated:


#include <glibmm/interface.h>
#include <gtkmm/enums.h>
#include <gtkmm/treemodelcolumn.h>
#include <gtkmm/treemodel.h>
#include <gtkmm/treeiter.h>


 // The entire file is deprecated.

#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C"
{
typedef struct _GtkTreeSortableIface GtkTreeSortableIface;
}
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkTreeSortable = struct _GtkTreeSortable;
using GtkTreeSortableClass = struct _GtkTreeSortableClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API TreeSortable_Class; } // namespace Gtk
#endif // DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** The interface for sortable models used by Gtk::TreeView.
 *
 * %Gtk::TreeSortable is an interface to be implemented by tree models which
 * support sorting. The Gtk::TreeView uses the methods provided by this interface
 * to sort the model.
 *
 * @ingroup TreeView
 * @deprecated 4.10: There is no replacement for this interface.
 *   You should use Gtk::SortListModel to wrap your list model instead.
 */

class GTKMM_API TreeSortable : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = TreeSortable;
  using CppClassType = TreeSortable_Class;
  using BaseObjectType = GtkTreeSortable;
  using BaseClassType = GtkTreeSortableIface;

  // noncopyable
  TreeSortable(const TreeSortable&) = delete;
  TreeSortable& operator=(const TreeSortable&) = delete;

private:
  friend class TreeSortable_Class;
  static CppClassType treesortable_class_;

#endif /* DOXYGEN_SHOULD_SKIP_THIS */
protected:
  /**
   * You should derive from this class to use it.
   */
  TreeSortable();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  /** Called by constructors of derived classes. Provide the result of
   * the Class init() function to ensure that it is properly
   * initialized.
   *
   * @param interface_class The Class object for the derived type.
   */
  explicit TreeSortable(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface.
  explicit TreeSortable(GtkTreeSortable* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  TreeSortable(TreeSortable&& src) noexcept;
  TreeSortable& operator=(TreeSortable&& src) noexcept;

  ~TreeSortable() noexcept override;

  static void add_interface(GType gtype_implementer);

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkTreeSortable*       gobj()       { return reinterpret_cast<GtkTreeSortable*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkTreeSortable* gobj() const { return reinterpret_cast<GtkTreeSortable*>(gobject_); }

private:


public:

  enum
  {
    /// See set_default_sort_func() and set_sort_column().
    DEFAULT_SORT_COLUMN_ID = -1,
    DEFAULT_UNSORTED_COLUMN_ID = -2
  }; //See GTK+ implementation.

  
  /** Fills in @a sort_column_id and @a order with the current sort column and the
   * order. It returns <tt>true</tt> unless the @a sort_column_id is
   * GTK_TREE_SORTABLE_DEFAULT_SORT_COLUMN_ID or
   * GTK_TREE_SORTABLE_UNSORTED_SORT_COLUMN_ID.
   * 
   * Deprecated: 4.10
   * 
   * @param sort_column_id The sort column id to be filled in.
   * @param order The `Gtk::SortType` to be filled in.
   * @return <tt>true</tt> if the sort column is not one of the special sort
   * column ids.
   */
  bool get_sort_column_id(int& sort_column_id, SortType& order) const;

  
  /** Sets the current sort column to be @a sort_column_id. The @a sortable will
   * resort itself to reflect this change, after emitting a
   * `GtkTreeSortable::sort-column-changed` signal. @a sort_column_id may either be
   * a regular column id, or one of the following special values:
   * 
   * - GTK_TREE_SORTABLE_DEFAULT_SORT_COLUMN_ID: the default sort function
   * will be used, if it is set
   * 
   * - GTK_TREE_SORTABLE_UNSORTED_SORT_COLUMN_ID: no sorting will occur
   * 
   * Deprecated: 4.10
   * 
   * @param sort_column_id The sort column id to set.
   * @param order The sort order of the column.
   */
  void set_sort_column(const TreeModelColumnBase& sort_column_id, SortType order);
  
  /** Sets the current sort column to be @a sort_column_id. The @a sortable will
   * resort itself to reflect this change, after emitting a
   * `GtkTreeSortable::sort-column-changed` signal. @a sort_column_id may either be
   * a regular column id, or one of the following special values:
   * 
   * - GTK_TREE_SORTABLE_DEFAULT_SORT_COLUMN_ID: the default sort function
   * will be used, if it is set
   * 
   * - GTK_TREE_SORTABLE_UNSORTED_SORT_COLUMN_ID: no sorting will occur
   * 
   * Deprecated: 4.10
   * 
   * @param sort_column_id The sort column id to set.
   * @param order The sort order of the column.
   */
  void set_sort_column(int sort_column_id, SortType order);

  /** This callback should return -1 if a compares before b, 0 if they compare equal, 1 if a compares after b.
   * For instance, int on_sort_compare(const Gtk::TreeModel::const_iterator& a, const Gtk::TreeModel::const_iterator& b);
   */
  typedef sigc::slot<int(const Gtk::TreeModel::const_iterator&, const Gtk::TreeModel::const_iterator&)> SlotCompare;

  
  /** Sets the comparison function used when sorting a certain column.
   * If the current sort column is the same as @a sort_column, then the model will sort using this function.
   * @param sort_column the sort column to set the function for
   * @param slot The sorting slot callback.
   */
  void set_sort_func(const TreeModelColumnBase& sort_column, const SlotCompare& slot);

  /** Sets the comparison function used when sorting a certain column.
   * If the current sort column id is the same as @a sort_column_id, then the model will sort using this function.
   * @param sort_column_id the sort column id to set the function for
   * @param slot The sorting slot callback.
   */
  void set_sort_func(int sort_column_id, const SlotCompare& slot);

  /** Sets the default comparison function used when sorting.
   * If the current sort column id of sortable is DEFAULT_SORT_COLUMN_ID, then the model will
   * sort using this function.  See also unset_default_sort_func().
   *
   * @param slot The sorting function
   */
  void set_default_sort_func(const SlotCompare& slot);

  /** Sets the default comparison function used when sorting. See set_default_sort_func().
   *
   * After calling this method there will be no default comparison function. This means that once the model has been sorted,
   * it can't go back to the default state. In this case, when the current sort column id of sortable is
   * DEFAULT_SORT_COLUMN_ID, the model will be unsorted.
   */
  void unset_default_sort_func();

  
  /** Returns <tt>true</tt> if the model has a default sort function. This is used
   * primarily by GtkTreeViewColumns in order to determine if a model can
   * go back to the default state, or not.
   * 
   * Deprecated: 4.10
   * 
   * @return <tt>true</tt>, if the model has a default sort function.
   */
  bool has_default_sort_func() const;

  
  /** Emits a `GtkTreeSortable::sort-column-changed` signal on @a sortable.
   * 
   * Deprecated: 4.10
   */
  void sort_column_changed();
  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%sort_column_changed()</tt>
   *
   * Flags: Run Last
   *
   * The signal_sort_column_changed() signal is emitted when the sort column
   * or sort order of @a sortable is changed. The signal is emitted before
   * the contents of @a sortable are resorted.
   */

  Glib::SignalProxy<void()> signal_sort_column_changed();


protected:
    virtual bool get_sort_column_id_vfunc(int* sort_column_id, SortType* order) const;

    virtual void set_sort_column_id_vfunc(int sort_column_id, SortType order);

    virtual void set_sort_func_vfunc(int sort_column_id, GtkTreeIterCompareFunc func, void* data, GDestroyNotify destroy);

    virtual void set_default_sort_func_vfunc(GtkTreeIterCompareFunc func, void* data, GDestroyNotify destroy);

    virtual bool has_default_sort_func_vfunc() const;

    virtual void sort_column_changed_vfunc() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_sort_column_changed().
  virtual void on_sort_column_changed();


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
   * @relates Gtk::TreeSortable
   */
  GTKMM_API
  Glib::RefPtr<Gtk::TreeSortable> wrap(GtkTreeSortable* object, bool take_copy = false);

} // namespace Glib


#endif // GTKMM_DISABLE_DEPRECATED


#endif /* _GTKMM_TREESORTABLE_H */

