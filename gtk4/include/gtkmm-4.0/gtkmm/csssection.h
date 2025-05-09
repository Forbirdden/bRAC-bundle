// Generated by gmmproc 2.82.0 -- DO NOT MODIFY!
#ifndef _GTKMM_CSSSECTION_H
#define _GTKMM_CSSSECTION_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2014 The gtkmm Development Team
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

#include <glibmm/refptr.h>
#include <glibmm/bytes.h>
#include <giomm/file.h>
#include <gtkmm/csslocation.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkCssSection GtkCssSection;
#endif

namespace Gtk
{

/** Defines a part of a CSS document.
 * Because sections are nested into one another, you can use get_parent()
 * to get the containing region.
 *
 * A %CssSection is input data to a Gtk::CssProvider::signal_parsing_error() handler.
 *
 * @newin{3,16}
 */
class GTKMM_API CssSection final
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = CssSection;
  using BaseObjectType = GtkCssSection;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


  /** Increment the reference count for this object.
   * You should never need to do this manually - use the object via a RefPtr instead.
   */
  void reference()   const;

  /** Decrement the reference count for this object.
   * You should never need to do this manually - use the object via a RefPtr instead.
   */
  void unreference() const;

  ///Provides access to the underlying C instance.
  GtkCssSection*       gobj();

  ///Provides access to the underlying C instance.
  const GtkCssSection* gobj() const;

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkCssSection* gobj_copy() const;

  CssSection() = delete;

  // noncopyable
  CssSection(const CssSection&) = delete;
  CssSection& operator=(const CssSection&) = delete;

protected:
  // Do not derive this.  Gtk::CssSection can neither be constructed nor deleted.

  void operator delete(void*, std::size_t);

private:

  
public:
  
  /** Creates a new `Gtk::CssSection` referring to the section
   * in the given `file` from the `start` location to the
   * `end` location.
   * 
   * @param file The file this section refers to.
   * @param start The start location.
   * @param end The end location.
   * @return A new `Gtk::CssSection`.
   */
  static Glib::RefPtr<CssSection> create(const Glib::RefPtr<Gio::File>& file, const CssLocation& start, const CssLocation& end);
  
  /** Creates a new `Gtk::CssSection` referring to the section
   * in the given `file` or the given `bytes` from the `start` location to the
   * `end` location.
   * 
   * @newin{4,16}
   * 
   * @param file The file this section refers to.
   * @param bytes The bytes this sections refers to.
   * @param start The start location.
   * @param end The end location.
   * @return A new `Gtk::CssSection`.
   */
  static Glib::RefPtr<CssSection> create(const Glib::RefPtr<Gio::File>& file, const Glib::RefPtr<const Glib::Bytes>& bytes, const CssLocation& start, const CssLocation& end);

  
  /** Prints the section into a human-readable text form.
   *
   * This is a form like `gtk.css:32:1-23` to denote line 32,
   * characters 1 to 23 in the file gtk.css.
   *
   * @return A new string.
   */
  Glib::ustring to_string() const;
  
  
  /** Gets the parent section for the given `section`.
   * 
   * The parent section is the section that contains this `section`. A special
   * case are sections of  type `Gtk::CssSection::Type::DOCUMENT`. Their parent will
   * either be <tt>nullptr</tt> if they are the original CSS document that was loaded by
   * Gtk::CssProvider::load_from_file() or a section of type
   * `Gtk::CssSection::Type::IMPORT` if it was loaded with an ` @a import` rule from
   * a different file.
   * 
   * @return The parent section.
   */
  Glib::RefPtr<CssSection> get_parent();
  
  /** Gets the parent section for the given `section`.
   * 
   * The parent section is the section that contains this `section`. A special
   * case are sections of  type `Gtk::CssSection::Type::DOCUMENT`. Their parent will
   * either be <tt>nullptr</tt> if they are the original CSS document that was loaded by
   * Gtk::CssProvider::load_from_file() or a section of type
   * `Gtk::CssSection::Type::IMPORT` if it was loaded with an ` @a import` rule from
   * a different file.
   * 
   * @return The parent section.
   */
  Glib::RefPtr<const CssSection> get_parent() const;
  
  /** Gets the file that @a section was parsed from.
   * 
   * If no such file exists, for example because the CSS was loaded via
   * Gtk::CssProvider::load_from_data(), then <tt>nullptr</tt> is returned.
   * 
   * @return The `Gio::File` from which the `section`
   * was parsed.
   */
  Glib::RefPtr<Gio::File> get_file();
  
  /** Gets the file that @a section was parsed from.
   * 
   * If no such file exists, for example because the CSS was loaded via
   * Gtk::CssProvider::load_from_data(), then <tt>nullptr</tt> is returned.
   * 
   * @return The `Gio::File` from which the `section`
   * was parsed.
   */
  Glib::RefPtr<const Gio::File> get_file() const;
  // Glib::Bytes is immutable. No need for a non-const get-method.
  
  /** Gets the bytes that @a section was parsed from.
   * 
   * @newin{4,16}
   * 
   * @return The `Bytes` from which the `section`
   * was parsed.
   */
  Glib::RefPtr<Glib::Bytes> get_bytes() const;
  
  /** Returns the location in the CSS document where this section starts.
   * 
   * @return The start location of
   * this section.
   */
  CssLocation get_start_location() const;
  
  /** Returns the location in the CSS document where this section ends.
   * 
   * @return The end location of
   * this section.
   */
  CssLocation get_end_location() const;


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
 * @relates Gtk::CssSection
 */
GTKMM_API
Glib::RefPtr<Gtk::CssSection> wrap(GtkCssSection* object, bool take_copy = false);

} // namespace Glib


#endif /* _GTKMM_CSSSECTION_H */

