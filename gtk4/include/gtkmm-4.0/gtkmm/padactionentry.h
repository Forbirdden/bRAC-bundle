// Generated by gmmproc 2.82.0 -- DO NOT MODIFY!
#ifndef _GTKMM_PADACTIONENTRY_H
#define _GTKMM_PADACTIONENTRY_H

#include <gtkmmconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2019 The gtkmm Development Team
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


#include <glibmm/ustring.h>
#include <glibmm/value.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C" { typedef struct _GtkPadActionEntry GtkPadActionEntry; }
#endif

namespace Gtk
{
/** @addtogroup gtkmmEnums gtkmm Enums and Flags */

/** 
 *  @var PadActionType::BUTTON
 * Action is triggered by a pad button.
 * 
 *  @var PadActionType::RING
 * Action is triggered by a pad ring.
 * 
 *  @var PadActionType::STRIP
 * Action is triggered by a pad strip.
 */
 /** The type of a pad action.
 *
 * @ingroup gtkmmEnums
 */
enum class PadActionType
{
  BUTTON,
  RING,
  STRIP
};


} // namespace Gtk

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class GTKMM_API Value<Gtk::PadActionType> : public Glib::Value_Enum<Gtk::PadActionType>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gtk
{


/** Class defining a pad action entry.
 *
 * @see Gtk::PadController
 * @newin{3,96}
 */
class GTKMM_API PadActionEntry
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = PadActionEntry;
  using BaseObjectType = GtkPadActionEntry;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

private:

public:

  PadActionEntry();

  /** Construct a new %PadActionEntry.
   *
   * @param type The type of pad feature that will trigger this action.
   * @param index The 0-indexed button/ring/strip number that will trigger this action.
   * @param mode The mode that will trigger this action, or -1 for all modes.
   * @param label Human readable description of this action, this string should
   * be deemed user-visible.
   * @param action_name Action name that will be activated in the Gio::ActionGroup.
   */
  PadActionEntry(PadActionType type, int index, int mode,
    const Glib::ustring& label, const Glib::ustring& action_name);

  PadActionEntry(const PadActionEntry& src);
  PadActionEntry& operator=(const PadActionEntry& src);

  PadActionEntry(PadActionEntry&& other) noexcept;
  PadActionEntry& operator=(PadActionEntry&& other) noexcept;

  virtual ~PadActionEntry();

  PadActionType get_type() const;
  void set_type(const PadActionType& value);

  int get_index() const;
  void set_index(const int& value);

  int get_mode() const;
  void set_mode(const int& value);

 
  Glib::ustring get_label() const;
  void set_label(const Glib::ustring& value);

  Glib::ustring get_action_name() const;
  void set_action_name(const Glib::ustring& value);

  GtkPadActionEntry*       gobj()       { return gobject_; }
  const GtkPadActionEntry* gobj() const { return gobject_; }

protected:
  GtkPadActionEntry* gobject_;

private:
  void release_gobject() noexcept;


};

} // namespace Gtk


#endif /* _GTKMM_PADACTIONENTRY_H */

