// Generated by gmmproc 2.84.0 -- DO NOT MODIFY!
#ifndef _GLIBMM_BYTES_H
#define _GLIBMM_BYTES_H


/* Copyright (C) 2012 The glibmm Development Team
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


#include <glibmmconfig.h>
#include <glibmm/refptr.h>
#include <glibmm/ustring.h>
#include <glibmm/error.h>
#include <glibmm/value.h>
#include <glib.h>

#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GBytes GBytes;
#endif

namespace Glib
{
//Note: The documentation is a reduced version of the C documentation,
//because this class is only really useful with other C types that we don't bother to wrap.
//We only wrap it because it is used in the InputStream, OutputStream and Resource APIs.

/** A simple refcounted data type representing an immutable byte sequence
 * from an unspecified origin.
 *
 * The purpose of the Bytes class is to keep the memory region that it holds
 * alive for as long as anyone holds a reference to the bytes.  When
 * the last reference count is dropped, the memory is released. Multiple
 * unrelated callers can use byte data in the Bytes object without coordinating
 * their activities, resting assured that the byte data will not change or
 * move while they hold a reference.
 *
 * A Bytes object can come from many different origins that may have
 * different procedures for freeing the memory region.  Examples are
 * memory from g_malloc(), from memory slices, from a GMappedFile or
 * memory from other allocators.
 *
 * @newin{2,34}
 */
class GLIBMM_API Bytes final
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = Bytes;
  using BaseObjectType = GBytes;
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
  GBytes*       gobj();

  ///Provides access to the underlying C instance.
  const GBytes* gobj() const;

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GBytes* gobj_copy() const;

  Bytes() = delete;

  // noncopyable
  Bytes(const Bytes&) = delete;
  Bytes& operator=(const Bytes&) = delete;

protected:
  // Do not derive this.  Glib::Bytes can neither be constructed nor deleted.

  void operator delete(void*, std::size_t);

private:

  
public:

  static Glib::RefPtr<Glib::Bytes> create(gconstpointer data, gsize size);
  

  /** Get the byte data in the Glib::Bytes.
   * 
   * This data should not be modified.
   * 
   * This function will always return the same pointer for a given `Bytes`.
   * 
   * <tt>nullptr</tt> may be returned if @a size is 0. This is not guaranteed, as the `Bytes`
   * may represent an empty string with @a data non-<tt>nullptr</tt> and @a size as 0. <tt>nullptr</tt>
   * will not be returned if @a size is non-zero.
   * 
   * @newin{2,32}
   * 
   * @param size Location to return size of byte data.
   * @return A pointer to the byte data.
   */
  gconstpointer get_data(gsize& size) const;
  
  /** Get the size of the byte data in the Glib::Bytes.
   * 
   * This function will always return the same value for a given `Bytes`.
   * 
   * @newin{2,32}
   * 
   * @return The size.
   */
  gsize get_size() const;

  
  /** Creates an integer hash code for the byte data in the Glib::Bytes.
   * 
   * This function can be passed to glib_hash_table_new() as the
   *  @a key_hash_func parameter, when using non-<tt>nullptr</tt> `Bytes` pointers as keys in
   * a Glib::HashTable.
   * 
   * @newin{2,32}
   * 
   * @param bytes A pointer to a Glib::Bytes key.
   * @return A hash value corresponding to the key.
   */
  static guint hash(gconstpointer bytes);
  
  /** Compares the two Glib::Bytes values being pointed to and returns
   * <tt>true</tt> if they are equal.
   * 
   * This function can be passed to glib_hash_table_new() as the
   *  @a key_equal_func parameter, when using non-<tt>nullptr</tt> `Bytes` pointers as keys in
   * a Glib::HashTable.
   * 
   * @newin{2,32}
   * 
   * @param bytes1 A pointer to a Glib::Bytes.
   * @param bytes2 A pointer to a Glib::Bytes to compare with @a bytes1.
   * @return <tt>true</tt> if the two keys match.
   */
  static bool equal(gconstpointer bytes1, gconstpointer bytes2);
  
  /** Compares the two Glib::Bytes values.
   * 
   * This function can be used to sort `Bytes` instances in lexicographical
   * order.
   * 
   * If @a bytes1 and @a bytes2 have different length but the shorter one is a
   * prefix of the longer one then the shorter one is considered to be less than
   * the longer one. Otherwise the first byte where both differ is used for
   * comparison. If @a bytes1 has a smaller value at that position it is
   * considered less, otherwise greater than @a bytes2.
   * 
   * @newin{2,32}
   * 
   * @param bytes1 A pointer to a Glib::Bytes.
   * @param bytes2 A pointer to a Glib::Bytes to compare with @a bytes1.
   * @return A negative value if @a bytes1 is less than @a bytes2, a positive value
   * if @a bytes1 is greater than @a bytes2, and zero if @a bytes1 is equal to @a bytes2.
   */
  static gint compare(gconstpointer bytes1, gconstpointer bytes2);


};

// This is needed so Glib::RefPtr<Glib::Bytes> can be used with
// Glib::Value and _WRAP_PROPERTY in Gio::BytesIcon.
template <>
class GLIBMM_API Value<Glib::RefPtr<Glib::Bytes>> : public ValueBase_Boxed
{
public:
  using CppType = Glib::RefPtr<Glib::Bytes>;
  using CType = GBytes*;

  static GType value_type();

  void set(const CppType& data);
  CppType get() const;
};

} // namespace Glib


namespace Glib
{

/** A Glib::wrap() method for this object.
 *
 * @param object The C instance.
 * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
 * @result A C++ instance that wraps this C instance.
 *
 * @relates Glib::Bytes
 */
GLIBMM_API
Glib::RefPtr<Glib::Bytes> wrap(GBytes* object, bool take_copy = false);

} // namespace Glib


#endif /* _GLIBMM_BYTES_H */

