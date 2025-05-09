// Generated by gmmproc 2.84.0 -- DO NOT MODIFY!
#ifndef _GIOMM_SETTINGSSCHEMAKEY_H
#define _GIOMM_SETTINGSSCHEMAKEY_H

#include <giommconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2015 The giomm Development Team
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


#include <glibmm/variant.h>
#include <glibmm/varianttype.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GSettingsSchemaKey GSettingsSchemaKey;
#endif

namespace Gio
{

//TODO: Add some class documentation, though there is none in the C docs.

/** See SettingsSchema.
 *
 * @newin{2,32}
 */
class GIOMM_API SettingsSchemaKey final
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = SettingsSchemaKey;
  using BaseObjectType = GSettingsSchemaKey;
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
  GSettingsSchemaKey*       gobj();

  ///Provides access to the underlying C instance.
  const GSettingsSchemaKey* gobj() const;

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GSettingsSchemaKey* gobj_copy() const;

  SettingsSchemaKey() = delete;

  // noncopyable
  SettingsSchemaKey(const SettingsSchemaKey&) = delete;
  SettingsSchemaKey& operator=(const SettingsSchemaKey&) = delete;

protected:
  // Do not derive this.  Gio::SettingsSchemaKey can neither be constructed nor deleted.

  void operator delete(void*, std::size_t);

private:


protected:
  

  //Ignore internal GSettingsSchemaKey functions.
  

public:
  
  /** Gets the name of @a key.
   * 
   * @newin{2,44}
   * 
   * @return The name of @a key.
   */
  Glib::ustring get_name() const;
  
  /** Gets the summary for @a key.
   * 
   * If no summary has been provided in the schema for @a key, returns
   * <tt>nullptr</tt>.
   * 
   * The summary is a short description of the purpose of the key; usually
   * one short sentence.  Summaries can be translated and the value
   * returned from this function is is the current locale.
   * 
   * This function is slow.  The summary and description information for
   * the schemas is not stored in the compiled schema database so this
   * function has to parse all of the source XML files in the schema
   * directory.
   * 
   * @newin{2,34}
   * 
   * @return The summary for @a key, or <tt>nullptr</tt>.
   */
  Glib::ustring get_summary() const;
  
  /** Gets the description for @a key.
   * 
   * If no description has been provided in the schema for @a key, returns
   * <tt>nullptr</tt>.
   * 
   * The description can be one sentence to several paragraphs in length.
   * Paragraphs are delimited with a double newline.  Descriptions can be
   * translated and the value returned from this function is is the
   * current locale.
   * 
   * This function is slow.  The summary and description information for
   * the schemas is not stored in the compiled schema database so this
   * function has to parse all of the source XML files in the schema
   * directory.
   * 
   * @newin{2,34}
   * 
   * @return The description for @a key, or <tt>nullptr</tt>.
   */
  Glib::ustring get_description() const;

  
  /** Gets the VariantType of @a key.
   * 
   * @newin{2,40}
   * 
   * @return The type of @a key.
   */
  Glib::VariantType get_value_type() const;
  
  /** Gets the default value for @a key.
   * 
   * Note that this is the default value according to the schema.  System
   * administrator defaults and lockdown are not visible via this API.
   * 
   * @newin{2,40}
   * 
   * @return The default value for the key.
   */
  Glib::VariantBase get_default_value() const;
  
  /** Queries the range of a key.
   * 
   * This function will return a Variant that fully describes the range
   * of values that are valid for @a key.
   * 
   * The type of Variant returned is `(sv)`. The string describes
   * the type of range restriction in effect. The type and meaning of
   * the value contained in the variant depends on the string.
   * 
   * If the string is `'type'` then the variant contains an empty array.
   * The element type of that empty array is the expected type of value
   * and all values of that type are valid.
   * 
   * If the string is `'enum'` then the variant contains an array
   * enumerating the possible values. Each item in the array is
   * a possible valid value and no other values are valid.
   * 
   * If the string is `'flags'` then the variant contains an array. Each
   * item in the array is a value that may appear zero or one times in an
   * array to be used as the value for this key. For example, if the
   * variant contained the array `['x', 'y']` then the valid values for
   * the key would be `[]`, `['x']`, `['y']`, `['x', 'y']` and
   * `['y', 'x']`.
   * 
   * Finally, if the string is `'range'` then the variant contains a pair
   * of like-typed values -- the minimum and maximum permissible values
   * for this key.
   * 
   * This information should not be used by normal programs.  It is
   * considered to be a hint for introspection purposes.  Normal programs
   * should already know what is permitted by their own schema.  The
   * format may change in any way in the future -- but particularly, new
   * forms may be added to the possibilities described above.
   * 
   * You should free the returned value with Glib::variant_unref() when it is
   * no longer needed.
   * 
   * @newin{2,40}
   * 
   * @return A Variant describing the range.
   */
  Glib::VariantBase get_range() const;
  
  /** Checks if the given @a value is within the
   * permitted range for @a key.
   * 
   * It is a programmer error if @a value is not of the correct type — you
   * must check for this first.
   * 
   * @newin{2,40}
   * 
   * @param value The value to check.
   * @return <tt>true</tt> if @a value is valid for @a key.
   */
  bool range_check(const Glib::VariantBase& value) const;


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
 * @relates Gio::SettingsSchemaKey
 */
GIOMM_API
Glib::RefPtr<Gio::SettingsSchemaKey> wrap(GSettingsSchemaKey* object, bool take_copy = false);

} // namespace Glib


#endif /* _GIOMM_SETTINGSSCHEMAKEY_H */

