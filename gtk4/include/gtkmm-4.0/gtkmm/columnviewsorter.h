// Generated by gmmproc 2.82.0 -- DO NOT MODIFY!
#ifndef _GTKMM_COLUMNVIEWSORTER_H
#define _GTKMM_COLUMNVIEWSORTER_H

#include <gtkmmconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2022 The gtkmm Development Team
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


#include <gtkmm/columnviewcolumn.h>
#include <gtkmm/sorter.h>
#include <utility> // std::pair


#ifndef DOXYGEN_SHOULD_SKIP_THIS
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API ColumnViewSorter_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** A sorter implementation that is geared towards the needs of Gtk::ColumnView.
 *
 * The sorter returned by Gtk::ColumnView::get_sorter() is
 * a %Gtk::ColumnViewSorter.
 *
 * In column views, sorting can be configured by associating
 * sorters with columns, and users can invert sort order by clicking
 * on column headers. The API of %Gtk::ColumnViewSorter is designed
 * to allow saving and restoring this configuration.
 *
 * If you are only interested in the primary sort column (i.e. the
 * column where a sort indicator is shown in the header), then
 * you can just look at property_primary_sort_column()
 * and property_primary_sort_order().
 *
 * If you want to store the full sort configuration, including
 * secondary sort columns that are used for tie breaking, then
 * you can use get_nth_sort_column().
 * To get notified about changes, use Gtk::Sorter::signal_changed().
 *
 * To restore a saved sort configuration on a Gtk::ColumnView, use code like:
 * @code
 * auto sorter = column_view->get_sorter();
 * auto column_view_sorter = std::dynamic_pointer_cast<Gtk::ColumnViewSorter>(sorter);
 * if (column_view_sorter)
 * {
 *   for (unsigned int i = column_view_sorter->get_n_sort_columns(); i > 0; --i)
 *   {
 *     auto [column, sort_order] = column_view_sorter->get_nth_sort_column(i-1);
 *     column_view->sort_by_column(column, sort_order);
 *   }
 * }
 * @endcode
 *
 * @ingroup ListView
 * @newin{4,10}
 */

class GTKMM_API ColumnViewSorter : public Sorter
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = ColumnViewSorter;
  using CppClassType = ColumnViewSorter_Class;
  using BaseObjectType = GtkColumnViewSorter;
  using BaseClassType = GtkColumnViewSorterClass;

  // noncopyable
  ColumnViewSorter(const ColumnViewSorter&) = delete;
  ColumnViewSorter& operator=(const ColumnViewSorter&) = delete;

private:  friend class ColumnViewSorter_Class;
  static CppClassType columnviewsorter_class_;

protected:
  explicit ColumnViewSorter(const Glib::ConstructParams& construct_params);
  explicit ColumnViewSorter(GtkColumnViewSorter* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  ColumnViewSorter(ColumnViewSorter&& src) noexcept;
  ColumnViewSorter& operator=(ColumnViewSorter&& src) noexcept;

  ~ColumnViewSorter() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkColumnViewSorter*       gobj()       { return reinterpret_cast<GtkColumnViewSorter*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkColumnViewSorter* gobj() const { return reinterpret_cast<GtkColumnViewSorter*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkColumnViewSorter* gobj_copy();

private:

     
protected:
  ColumnViewSorter();

public:
 

  /** Returns the primary sort column.
   * 
   * The primary sort column is the one that displays the triangle
   * in a column view header.
   * 
   * @newin{4,10}
   * 
   * @return The primary sort column.
   */
  Glib::RefPtr<ColumnViewColumn> get_primary_sort_column();
  
  /** Returns the primary sort column.
   * 
   * The primary sort column is the one that displays the triangle
   * in a column view header.
   * 
   * @newin{4,10}
   * 
   * @return The primary sort column.
   */
  Glib::RefPtr<const ColumnViewColumn> get_primary_sort_column() const;
  
  /** Returns the primary sort order.
   * 
   * The primary sort order determines whether the triangle displayed
   * in the column view header of the primary sort column points upwards
   * or downwards.
   * 
   * If there is no primary sort column, then this function returns
   * `Gtk::SortType::ASCENDING`.
   * 
   * @newin{4,10}
   * 
   * @return The primary sort order.
   */
  SortType get_primary_sort_order() const;
  
  /** Returns the number of columns by which the sorter sorts.
   * 
   * If the sorter of the primary sort column does not determine
   * a total order, then the secondary sorters are consulted to
   * break the ties.
   * 
   * Use the Gtk::Sorter::signal_changed() signal to get notified
   * when the number of sort columns changes.
   * 
   * @newin{4,10}
   * 
   * @return The number of sort columns.
   */
  unsigned int get_n_sort_columns() const;

  /** Gets the @a position'th sort column and its associated sort order.
   *
   * Use the Gtk::Sorter::signal_changed() signal to get notified
   * when sort columns change.
   *
   * @newin{4,10}
   *
   * @param position The position of the sort column to retrieve (0 for the
   *                 primary sort column).
   * @return {sort_column, sort_order} The @a position's sort column and sort order.
   */
  std::pair<Glib::RefPtr<ColumnViewColumn>, SortType>
  get_nth_sort_column(unsigned int position);
  

  /// See the non-const get_nth_sort_column().
  std::pair<Glib::RefPtr<const ColumnViewColumn>, SortType>
  get_nth_sort_column(unsigned int position) const;

  /** The primary sort column.
   * 
   * The primary sort column is the one that displays the triangle
   * in a column view header.
   * 
   * @newin{4,10}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<ColumnViewColumn> > property_primary_sort_column() const;


  /** The primary sort order.
   * 
   * The primary sort order determines whether the triangle displayed
   * in the column view header of the primary sort column points upwards
   * or downwards.
   * 
   * @newin{4,10}
   *
   * Default value: Gtk::SortType::ASCENDING
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< SortType > property_primary_sort_order() const;


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
   * @relates Gtk::ColumnViewSorter
   */
  GTKMM_API
  Glib::RefPtr<Gtk::ColumnViewSorter> wrap(GtkColumnViewSorter* object, bool take_copy = false);
}


#endif /* _GTKMM_COLUMNVIEWSORTER_H */

