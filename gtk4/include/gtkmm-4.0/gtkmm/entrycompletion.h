// Generated by gmmproc 2.82.0 -- DO NOT MODIFY!
#ifndef _GTKMM_ENTRYCOMPLETION_H
#define _GTKMM_ENTRYCOMPLETION_H


#ifndef GTKMM_DISABLE_DEPRECATED


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2003 The gtkmm Development Team
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
#include <gtkmm/celllayout.h>
#include <gtkmm/treemodel.h>


 // The entire file is deprecated.

#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkEntryCompletion = struct _GtkEntryCompletion;
using GtkEntryCompletionClass = struct _GtkEntryCompletionClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API EntryCompletion_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{
class GTKMM_API CellArea;
class GTKMM_API Entry;

/** Completion functionality for Gtk::Entry.
 *
 * Gtk::EntryCompletion is an auxiliary object to be used in conjunction with
 * Gtk::Entry to provide the completion functionality.
 *
 * It derives from Gtk::CellLayout, to allow the user to add extra cells to the Gtk::TreeView with completion matches.
 *
 * "Completion functionality" means that when the user modifies the text in the
 * entry, Gtk::EntryCompletion checks which rows in the model match the current
 * content of the entry, and displays a list of matches. By default, the
 * matching is done by comparing the entry text case-insensitively against
 * the text column of the model (see set_text_column()),
 * but this can be overridden with a custom match function (see set_match_func()).
 *
 * When the user selects a completion, the content of the entry is updated.
 * By default, the content of the entry is replaced by the text column of the
 * model, but this can be overridden by connecting to the match_selected signal
 * and updating the entry in the signal handler. Note that you should return true
 * from the signal handler to suppress the default behaviour.
 *
 * To add completion functionality to an entry, use Gtk::Entry::set_completion().
 *
 * @deprecated 4.10: GtkEntryCompletion will be removed in GTK 5.
 */

class GTKMM_API EntryCompletion
 : public Glib::Object,
   public Gtk::CellLayout,
   public Gtk::Buildable
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = EntryCompletion;
  using CppClassType = EntryCompletion_Class;
  using BaseObjectType = GtkEntryCompletion;
  using BaseClassType = GtkEntryCompletionClass;

  // noncopyable
  EntryCompletion(const EntryCompletion&) = delete;
  EntryCompletion& operator=(const EntryCompletion&) = delete;

private:  friend class EntryCompletion_Class;
  static CppClassType entrycompletion_class_;

protected:
  explicit EntryCompletion(const Glib::ConstructParams& construct_params);
  explicit EntryCompletion(GtkEntryCompletion* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  EntryCompletion(EntryCompletion&& src) noexcept;
  EntryCompletion& operator=(EntryCompletion&& src) noexcept;

  ~EntryCompletion() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkEntryCompletion*       gobj()       { return reinterpret_cast<GtkEntryCompletion*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkEntryCompletion* gobj() const { return reinterpret_cast<GtkEntryCompletion*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkEntryCompletion* gobj_copy();

private:

  
protected:
  EntryCompletion();

public:
  
  static Glib::RefPtr<EntryCompletion> create();


  //Careful, this actually returns a GtkWidget*, so it might not always be a GtkEntry in future GTK+ versions.
  
  /** Gets the entry @a completion has been attached to.
   * 
   * Deprecated: 4.10: GtkEntryCompletion will be removed in GTK 5.
   * 
   * @return The entry @a completion has been attached to.
   */
  Entry* get_entry();
  
  /** Gets the entry @a completion has been attached to.
   * 
   * Deprecated: 4.10: GtkEntryCompletion will be removed in GTK 5.
   * 
   * @return The entry @a completion has been attached to.
   */
  const Entry* get_entry() const;

  
  /** Sets the model for a %Gtk::EntryCompletion.
   * If @a completion already has a model set, it will remove it before setting
   * the new model. Use unset_model() to unset the old model.
   *
   * Deprecated: 4.10: GtkEntryCompletion will be removed in GTK 5.
   *
   * @param model The `Gtk::TreeModel`.
   */
  void set_model(const Glib::RefPtr<TreeModel>& model);
  
  /** Returns the model the `Gtk::EntryCompletion` is using as data source.
   * 
   * Deprecated: 4.10: GtkEntryCompletion will be removed in GTK 5.
   * 
   * @return A `Gtk::TreeModel`.
   */
  Glib::RefPtr<TreeModel> get_model();
  
  /** Returns the model the `Gtk::EntryCompletion` is using as data source.
   * 
   * Deprecated: 4.10: GtkEntryCompletion will be removed in GTK 5.
   * 
   * @return A `Gtk::TreeModel`.
   */
  Glib::RefPtr<const TreeModel> get_model() const;

  /** Remove the model from the EntryCompletion.
   *
   * @see set_model().
   */
  void unset_model();

  /// For example, bool on_match(const Glib::ustring& key, const TreeModel::const_iterator& iter);
  typedef sigc::slot<bool(const Glib::ustring&, const TreeModel::const_iterator&)> SlotMatch;

  void set_match_func(const SlotMatch& slot);
  

  /** Requires the length of the search key for @a completion to be at least
   *  @a length.
   * 
   * This is useful for long lists, where completing using a small
   * key takes a lot of time and will come up with meaningless results anyway
   * (ie, a too large dataset).
   * 
   * Deprecated: 4.10: GtkEntryCompletion will be removed in GTK 5.
   * 
   * @param length The minimum length of the key in order to start completing.
   */
  void set_minimum_key_length(int length);
  
  /** Returns the minimum key length as set for @a completion.
   * 
   * Deprecated: 4.10: GtkEntryCompletion will be removed in GTK 5.
   * 
   * @return The currently used minimum key length.
   */
  int get_minimum_key_length() const;
  
  /** Computes the common prefix that is shared by all rows in @a completion
   * that start with @a key.
   * 
   * If no row matches @a key, <tt>nullptr</tt> will be returned.
   * Note that a text column must have been set for this function to work,
   * see set_text_column() for details.
   * 
   * Deprecated: 4.10: GtkEntryCompletion will be removed in GTK 5.
   * 
   * @param key The text to complete for.
   * @return The common prefix all rows
   * starting with @a key.
   */
  Glib::ustring compute_prefix(const Glib::ustring& key);
  
  /** Requests a completion operation, or in other words a refiltering of the
   * current list with completions, using the current key.
   * 
   * The completion list view will be updated accordingly.
   * 
   * Deprecated: 4.10: GtkEntryCompletion will be removed in GTK 5.
   */
  void complete();

  
  /** Requests a prefix insertion.
   * 
   * Deprecated: 4.10: GtkEntryCompletion will be removed in GTK 5.
   */
  void insert_prefix();

  
  /** Sets whether the common prefix of the possible completions should
   * be automatically inserted in the entry.
   * 
   * Deprecated: 4.10: GtkEntryCompletion will be removed in GTK 5.
   * 
   * @param inline_completion <tt>true</tt> to do inline completion.
   */
  void set_inline_completion(bool inline_completion =  true);
  
  /** Returns whether the common prefix of the possible completions should
   * be automatically inserted in the entry.
   * 
   * Deprecated: 4.10: GtkEntryCompletion will be removed in GTK 5.
   * 
   * @return <tt>true</tt> if inline completion is turned on.
   */
  bool get_inline_completion() const;
  
  /** Sets whether it is possible to cycle through the possible completions
   * inside the entry.
   * 
   * Deprecated: 4.10: GtkEntryCompletion will be removed in GTK 5.
   * 
   * @param inline_selection <tt>true</tt> to do inline selection.
   */
  void set_inline_selection(bool inline_selection =  true);
  
  /** Returns <tt>true</tt> if inline-selection mode is turned on.
   * 
   * Deprecated: 4.10: GtkEntryCompletion will be removed in GTK 5.
   * 
   * @return <tt>true</tt> if inline-selection mode is on.
   */
  bool get_inline_selection() const;
  
  /** Sets whether the completions should be presented in a popup window.
   * 
   * Deprecated: 4.10: GtkEntryCompletion will be removed in GTK 5.
   * 
   * @param popup_completion <tt>true</tt> to do popup completion.
   */
  void set_popup_completion(bool popup_completion =  true);
  
  /** Returns whether the completions should be presented in a popup window.
   * 
   * Deprecated: 4.10: GtkEntryCompletion will be removed in GTK 5.
   * 
   * @return <tt>true</tt> if popup completion is turned on.
   */
  bool get_popup_completion() const;

  
  /** Sets whether the completion popup window will be resized to be the same
   * width as the entry.
   * 
   * Deprecated: 4.10: GtkEntryCompletion will be removed in GTK 5.
   * 
   * @param popup_set_width <tt>true</tt> to make the width of the popup the same as the entry.
   */
  void set_popup_set_width(bool popup_set_width =  true);
  
  /** Returns whether the completion popup window will be resized to the
   * width of the entry.
   * 
   * Deprecated: 4.10: GtkEntryCompletion will be removed in GTK 5.
   * 
   * @return <tt>true</tt> if the popup window will be resized to the width of
   * the entry.
   */
  bool get_popup_set_width() const;

  
  /** Sets whether the completion popup window will appear even if there is
   * only a single match.
   * 
   * You may want to set this to <tt>false</tt> if you
   * are using property_inline_completion().
   * 
   * Deprecated: 4.10: GtkEntryCompletion will be removed in GTK 5.
   * 
   * @param popup_single_match <tt>true</tt> if the popup should appear even for a single match.
   */
  void set_popup_single_match(bool popup_single_match =  true);

  
  /** Returns whether the completion popup window will appear even if there is
   * only a single match.
   * 
   * Deprecated: 4.10: GtkEntryCompletion will be removed in GTK 5.
   * 
   * @return <tt>true</tt> if the popup window will appear regardless of the
   * number of matches.
   */
  bool get_popup_single_match() const;

  
  /** Get the original text entered by the user that triggered
   * the completion or an empty string if there's no completion ongoing.
   *
   * Deprecated: 4.10: GtkEntryCompletion will be removed in GTK 5.
   *
   * @return The prefix for the current completion.
   */
  Glib::ustring get_completion_prefix() const;

  
  /** Convenience function for setting up the most used case of this code: a
   * completion list with just strings.
   * 
   * This function will set up @a completion
   * to have a list displaying all (and just) strings in the completion list,
   * and to get those strings from @a column in the model of @a completion.
   * 
   * This functions creates and adds a `Gtk::CellRendererText` for the selected
   * column. If you need to set the text column, but don't want the cell
   * renderer, use Glib::object_set() to set the
   * property_text_column() property directly.
   * 
   * Deprecated: 4.10: GtkEntryCompletion will be removed in GTK 5.
   * 
   * @param column The column in the model of @a completion to get strings from.
   */
  void set_text_column(const TreeModelColumnBase& column);
  
  /** Convenience function for setting up the most used case of this code: a
   * completion list with just strings.
   * 
   * This function will set up @a completion
   * to have a list displaying all (and just) strings in the completion list,
   * and to get those strings from @a column in the model of @a completion.
   * 
   * This functions creates and adds a `Gtk::CellRendererText` for the selected
   * column. If you need to set the text column, but don't want the cell
   * renderer, use Glib::object_set() to set the
   * property_text_column() property directly.
   * 
   * Deprecated: 4.10: GtkEntryCompletion will be removed in GTK 5.
   * 
   * @param column The column in the model of @a completion to get strings from.
   */
  void set_text_column(int column);
  
  /** Returns the column in the model of @a completion to get strings from.
   * 
   * Deprecated: 4.10: GtkEntryCompletion will be removed in GTK 5.
   * 
   * @return The column containing the strings.
   */
  int get_text_column() const;

  //We completely hand-code these signals because we want to change how the parameters are wrapped,
  //because we need both the iter and the model to make the C++ iter.
  
  
  /** Emitted when a match from the list is selected.
   * The default behaviour is to replace the contents of the
   * entry with the contents of the text column in the row
   * pointed to by @a iter.
   *
   * It is necessary to connect your signal handler <i>before</i>
   * the default one, which would otherwise return <tt>true</tt>,
   * a value which signifies that the signal has been handled,
   * thus preventing any other handler from being invoked.
   *
   * To do this, pass <tt>false</tt> to this signal proxy's
   * <tt>connect()</tt> method. For example:
   * <tt> completion->signal_match_selected().connect(sigc::mem_fun(*this, &YourClass::on_completion_match_selected), false); </tt>
   *
   * @param model The TreeModel containing the matches
   * @param iter A TreeModel::iterator positioned at the selected match
   * @result true if the signal has been handled
   *
   * @par Prototype:
   * <tt>bool %on_match_selected(const TreeModel::iterator& iter)</tt>
   */
  Glib::SignalProxy<bool(const TreeModel::iterator&)> signal_match_selected();

  /** Emitted when a match from the cursor is on a match
   * of the list. The default behaviour is to replace the contents
   * of the entry with the contents of the text column in the row
   * pointed to by @a iter.
   *
   * @param model The TreeModel containing the matches
   * @param iter A TreeModel::iterator positioned at the selected match
   * @result true if the signal has been handled
   *
   * @par Prototype:
   * <tt>bool %on_cursor_on_match(const TreeModel::iterator& iter)</tt>
   */
  Glib::SignalProxy<bool(const TreeModel::iterator&)> signal_cursor_on_match();

  // no_default_handler because GtkEntryCompletionClass is private.
 

  /**
   * @par Slot Prototype:
   * <tt>bool on_my_%insert_prefix(const Glib::ustring& prefix)</tt>
   *
   * Flags: Run Last
   *
   * Emitted when the inline autocompletion is triggered.
   * 
   * The default behaviour is to make the entry display the
   * whole prefix and select the newly inserted part.
   * 
   * Applications may connect to this signal in order to insert only a
   * smaller part of the @a prefix into the entry - e.g. the entry used in
   * the `Gtk::FileChooser` inserts only the part of the prefix up to the
   * next '/'.
   * 
   * @param prefix The common prefix of all possible completions.
   * @return <tt>true</tt> if the signal has been handled.
   */

  Glib::SignalProxy<bool(const Glib::ustring&)> signal_insert_prefix();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%no_matches()</tt>
   *
   * Flags: Run Last
   *
   * Emitted when the filter model has zero
   * number of rows in completion_complete method.
   * 
   * In other words when `Gtk::EntryCompletion` is out of suggestions.
   */

  Glib::SignalProxy<void()> signal_no_matches();


  /** The model used as data source.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gtk::TreeModel> > property_model() ;

/** The model used as data source.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gtk::TreeModel> > property_model() const;

  /** The minimum key length as set for completion.
   *
   * Default value: 1
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_minimum_key_length() ;

/** The minimum key length as set for completion.
   *
   * Default value: 1
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_minimum_key_length() const;

  /** The column of the model containing the strings.
   * 
   * Note that the strings must be UTF-8.
   *
   * Default value: -1
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_text_column() ;

/** The column of the model containing the strings.
   * 
   * Note that the strings must be UTF-8.
   *
   * Default value: -1
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_text_column() const;

  /** Determines whether the common prefix of the possible completions
   * should be inserted automatically in the entry.
   * 
   * Note that this requires text-column to be set, even if you are
   * using a custom match function.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_inline_completion() ;

/** Determines whether the common prefix of the possible completions
   * should be inserted automatically in the entry.
   * 
   * Note that this requires text-column to be set, even if you are
   * using a custom match function.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_inline_completion() const;

  /** Determines whether the possible completions should be
   * shown in a popup window.
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_popup_completion() ;

/** Determines whether the possible completions should be
   * shown in a popup window.
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_popup_completion() const;

  /** Determines whether the completions popup window will be
   * resized to the width of the entry.
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_popup_set_width() ;

/** Determines whether the completions popup window will be
   * resized to the width of the entry.
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_popup_set_width() const;

  /** Determines whether the completions popup window will shown
   * for a single possible completion.
   * 
   * You probably want to set this to <tt>false</tt> if you are using
   * property_inline_completion().
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_popup_single_match() ;

/** Determines whether the completions popup window will shown
   * for a single possible completion.
   * 
   * You probably want to set this to <tt>false</tt> if you are using
   * property_inline_completion().
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_popup_single_match() const;

  /** Determines whether the possible completions on the popup
   * will appear in the entry as you navigate through them.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_inline_selection() ;

/** Determines whether the possible completions on the popup
   * will appear in the entry as you navigate through them.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_inline_selection() const;

  /** The `Gtk::CellArea` used to layout cell renderers in the treeview column.
   * 
   * If no area is specified when creating the entry completion with
   * Gtk::EntryCompletion::new_with_area(), a horizontally oriented
   * Gtk::CellAreaBox will be used.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<CellArea> > property_cell_area() const;


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
   * @relates Gtk::EntryCompletion
   */
  GTKMM_API
  Glib::RefPtr<Gtk::EntryCompletion> wrap(GtkEntryCompletion* object, bool take_copy = false);
}


#endif // GTKMM_DISABLE_DEPRECATED


#endif /* _GTKMM_ENTRYCOMPLETION_H */

