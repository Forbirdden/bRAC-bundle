// Generated by gmmproc 2.82.0 -- DO NOT MODIFY!
#ifndef _GTKMM_SEARCHENTRY2_H
#define _GTKMM_SEARCHENTRY2_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2023 The gtkmm Development Team
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

#include <gtkmm/editable.h>
#include <gtkmm/widget.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkSearchEntry = struct _GtkSearchEntry;
using GtkSearchEntryClass = struct _GtkSearchEntryClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API SearchEntry2_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{
//TODO: When we can break ABI:
// Remove SearchEntry. Rename SearchEntry2 to SearchEntry.
// Remove _DO_NOT_DERIVE_GTYPE, _NO_WRAP_FUNCTION and wrap2().

/** %Gtk::SearchEntry2 is an entry widget that has been tailored for use
 * as a search entry.
 *
 * The main API for interacting with a %Gtk::SearchEntry2 as entry
 * is the Gtk::Editable interface.
 *
 * It will show an inactive symbolic “find” icon when the search
 * entry is empty, and a symbolic “clear” icon when there is text.
 * Clicking on the “clear” icon will empty the search entry.
 *
 * To make filtering appear more reactive, it is a good idea to
 * not react to every change in the entry text immediately, but
 * only after a short delay. To support this, %Gtk::SearchEntry2
 * emits the signal_search_changed() which
 * can be used instead of the Gtk::Editable::signal_changed().
 *
 * signal_previous_match(), signal_next_match() and signal_stop_search() can
 * be used to implement moving between search results and ending the search.
 *
 * Often, %Gtk::SearchEntry2 will be fed events by means of being
 * placed inside a Gtk::SearchBar. If that is not the case,
 * you can use set_key_capture_widget() to
 * let it capture key input from another widget.
 *
 * %Gtk::SearchEntry2 provides only minimal API and should be used with
 * the Gtk::Editable API.
 *
 * @note
 * In an application that uses %Gtk::SearchEntry2, call
 * Gtk::Application::wrap_in_search_entry2() in the main() function.
 *
 * @ingroup Widgets
 * @newin{4,14}
 */

class GTKMM_API SearchEntry2 : public Widget, public Editable
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef SearchEntry2 CppObjectType;
  typedef SearchEntry2_Class CppClassType;
  typedef GtkSearchEntry BaseObjectType;
  typedef GtkSearchEntryClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  SearchEntry2(SearchEntry2&& src) noexcept;
  SearchEntry2& operator=(SearchEntry2&& src) noexcept;

  // noncopyable
  SearchEntry2(const SearchEntry2&) = delete;
  SearchEntry2& operator=(const SearchEntry2&) = delete;

  ~SearchEntry2() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend GTKMM_API class SearchEntry2_Class;
  static CppClassType searchentry2_class_;

protected:
  explicit SearchEntry2(const Glib::ConstructParams& construct_params);
  explicit SearchEntry2(GtkSearchEntry* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkSearchEntry*       gobj()       { return reinterpret_cast<GtkSearchEntry*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkSearchEntry* gobj() const { return reinterpret_cast<GtkSearchEntry*>(gobject_); }

private:

  
  // SearchEntry derives GType gtkmm__GtkSearchEntry, so SearchEntry2 can't.
  // GtkSearchEntryClass is private. There is no need for a derived GType.
  // There can't be a Gtk::SearchEntry2* wrap(GtkSearchEntry* object, bool take_copy)
  // when there is a Gtk::SearchEntry* wrap(GtkSearchEntry* object, bool take_copy).
  
  
public:

  SearchEntry2();

  
  /** Sets @a widget as the widget that @a entry will capture key
   * events from.
   * 
   * Key events are consumed by the search entry to start or
   * continue a search.
   * 
   * If the entry is part of a `Gtk::SearchBar`, it is preferable
   * to call Gtk::SearchBar::set_key_capture_widget() instead,
   * which will reveal the entry in addition to triggering the
   * search entry.
   * 
   * Note that despite the name of this function, the events
   * are only 'captured' in the bubble phase, which means that
   * editable child widgets of @a widget will receive text input
   * before it gets captured. If that is not desired, you can
   * capture and forward the events yourself with
   * Gtk::EventControllerKey::forward().
   * 
   * @param widget A `Gtk::Widget`.
   */
  void set_key_capture_widget(Widget& widget);
  
  /** Gets the widget that @a entry is capturing key events from.
   * 
   * @return The key capture widget.
   */
  Widget* get_key_capture_widget();
  
  /** Gets the widget that @a entry is capturing key events from.
   * 
   * @return The key capture widget.
   */
  const Widget* get_key_capture_widget() const;
  void unset_key_capture_widget();

  
  /** Set the delay to be used between the last keypress and the
   * signal_search_changed() signal being emitted.
   * 
   * @newin{4,8}
   * 
   * @param delay A delay in milliseconds.
   */
  void set_search_delay(unsigned int delay);
  
  /** Get the delay to be used between the last keypress and the
   * signal_search_changed() signal being emitted.
   * 
   * @newin{4,8}
   * 
   * @return A delay in milliseconds.
   */
  unsigned int get_search_delay() const;

  
  /** Sets the placeholder text associated with @a entry.
   * 
   * @newin{4,10}
   * 
   * @param text The text to set as a placeholder.
   */
  void set_placeholder_text(const Glib::ustring& text);
  
  /** Gets the placeholder text associated with @a entry.
   * 
   * @newin{4,10}
   * 
   * @return The placeholder text.
   */
  Glib::ustring get_placeholder_text() const;

  
  /** Sets the input purpose of @a entry.
   * 
   * @newin{4,14}
   * 
   * @param purpose The new input purpose.
   */
  void set_input_purpose(InputPurpose purpose);
  
  /** Gets the input purpose of @a entry.
   * 
   * @newin{4,14}
   * 
   * @return The input hints.
   */
  InputPurpose get_input_purpose() const;

  
  /** Sets the input hints for @a entry.
   * 
   * @newin{4,14}
   * 
   * @param hints The new input hints.
   */
  void set_input_hints(InputHints hints);
  
  /** Gets the input purpose for @a entry.
   * 
   * @newin{4,14}
   * 
   * @return The input hints.
   */
  InputHints get_input_hints() const;

  // no_default_handler because GtkSearchEntryClass is private.
  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%activate()</tt>
   *
   * Flags: Run Last, Action
   *
   * Emitted when the entry is activated.
   * 
   * The keybindings for this signal are all forms of the <kbd>Enter</kbd> key.
   * 
   * @newin{4,18}
   */

  Glib::SignalProxy<void()> signal_activate();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%search_changed()</tt>
   *
   * Flags: Run Last
   *
   * Emitted with a delay. The length of the delay can be
   * changed with the property_search_delay()
   * property.
   */

  Glib::SignalProxy<void()> signal_search_changed();

  // Although next-match, previous-match and stop-search are keybinding signals,
  // applications shall connect to them.
  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%next_match()</tt>
   *
   * Flags: Run Last, Action
   *
   * Emitted when the user initiates a move to the next match
   * for the current search string.
   * 
   * This is a [keybinding signal](class.SignalAction.html).
   * 
   * Applications should connect to it, to implement moving
   * between matches.
   * 
   * The default bindings for this signal is <kbd>Ctrl</kbd>+<kbd>g</kbd>.
   */

  Glib::SignalProxy<void()> signal_next_match();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%previous_match()</tt>
   *
   * Flags: Run Last, Action
   *
   * Emitted when the user initiates a move to the previous match
   * for the current search string.
   * 
   * This is a [keybinding signal](class.SignalAction.html).
   * 
   * Applications should connect to it, to implement moving
   * between matches.
   * 
   * The default bindings for this signal is
   * <kbd>Ctrl</kbd>+<kbd>Shift</kbd>+<kbd>g</kbd>.
   */

  Glib::SignalProxy<void()> signal_previous_match();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%stop_search()</tt>
   *
   * Flags: Run Last, Action
   *
   * Emitted when the user stops a search via keyboard input.
   * 
   * This is a [keybinding signal](class.SignalAction.html).
   * 
   * Applications should connect to it, to implement hiding
   * the search entry in this case.
   * 
   * The default bindings for this signal is <kbd>Escape</kbd>.
   */

  Glib::SignalProxy<void()> signal_stop_search();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%search_started()</tt>
   *
   * Flags: Run Last
   *
   * Emitted when the user initiated a search on the entry.
   */

  Glib::SignalProxy<void()> signal_search_started();


  /** The text that will be displayed in the `Gtk::SearchEntry`
   * when it is empty and unfocused.
   *
   * Default value: ""
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_placeholder_text() ;

/** The text that will be displayed in the `Gtk::SearchEntry`
   * when it is empty and unfocused.
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_placeholder_text() const;

  /** The purpose for the `Gtk::SearchEntry` input used to alter the
   * behaviour of input methods.
   * 
   * @newin{4,14}
   *
   * Default value: Gtk::InputPurpose::FREE_FORM
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< InputPurpose > property_input_purpose() ;

/** The purpose for the `Gtk::SearchEntry` input used to alter the
   * behaviour of input methods.
   * 
   * @newin{4,14}
   *
   * Default value: Gtk::InputPurpose::FREE_FORM
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< InputPurpose > property_input_purpose() const;

  /** The hints about input for the `Gtk::SearchEntry` used to alter the
   * behaviour of input methods.
   * 
   * @newin{4,14}
   *
   * Default value: Gtk::InputHints::NONE
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< InputHints > property_input_hints() ;

/** The hints about input for the `Gtk::SearchEntry` used to alter the
   * behaviour of input methods.
   * 
   * @newin{4,14}
   *
   * Default value: Gtk::InputHints::NONE
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< InputHints > property_input_hints() const;

  /** Whether to activate the default widget when Enter is pressed.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_activates_default() ;

/** Whether to activate the default widget when Enter is pressed.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_activates_default() const;

  /** The delay in milliseconds from last keypress to the search
   * changed signal.
   * 
   * @newin{4,8}
   *
   * Default value: 150
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< unsigned int > property_search_delay() ;

/** The delay in milliseconds from last keypress to the search
   * changed signal.
   * 
   * @newin{4,8}
   *
   * Default value: 150
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< unsigned int > property_search_delay() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} /* namespace Gtk */

namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * It's not called %wrap() because there is a<br>
   * Gtk::SearchEntry* wrap(GtkSearchEntry* object, bool take_copy = false);
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::SearchEntry2
   */
  GTKMM_API
  Gtk::SearchEntry2* wrap2(GtkSearchEntry* object, bool take_copy = false);

} //namespace Glib


#endif /* _GTKMM_SEARCHENTRY2_H */

