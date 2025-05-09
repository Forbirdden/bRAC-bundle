// Generated by gmmproc 2.82.0 -- DO NOT MODIFY!
#ifndef _GDKMM_GRAPHENE_POINT_H
#define _GDKMM_GRAPHENE_POINT_H

#include <gdkmmconfig.h>


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
 

#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C"
{
struct _graphene_point_t;
using graphene_point_t = _graphene_point_t;
}
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gdk
{
namespace Graphene
{
//TODO: When we can break ABI, _CLASS_OPAQUE_COPYABLE -> _CLASS_GENERIC.
// graphene_point_t gobject_; //Not a pointer.
// https://gitlab.gnome.org/GNOME/gtkmm/-/issues/155

/** A point with 2 coordinates.
 *
 * %Gdk::Graphene::Point is a data structure capable of describing a point
 * with two coordinates.
 *
 * @newin{4,12}
 */
class GDKMM_API Point
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = Point;
  using BaseObjectType = graphene_point_t;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  /** Constructs an invalid object.
   * E.g. for output arguments to methods. There is not much you can do with
   * the object before it has been assigned a valid value.
   */
  Point();

  // Use make_a_copy=true when getting it directly from a struct.
  explicit Point(graphene_point_t* castitem, bool make_a_copy = false);

  Point(const Point& src);
  Point& operator=(const Point& src);

  Point(Point&& other) noexcept;
  Point& operator=(Point&& other) noexcept;

  ~Point() noexcept;

  void swap(Point& other) noexcept;

  graphene_point_t*       gobj()       { return gobject_; }
  const graphene_point_t* gobj() const { return gobject_; }

  ///Provides access to the underlying C instance. The caller is responsible for freeing it. Use when directly setting fields in structs.
  graphene_point_t* gobj_copy() const;

protected:
  graphene_point_t* gobject_;

private:

  
public:
  Point(float x, float y);

  /** Checks if this instance is valid.
   * It is valid if and only if it contains a value.
   * For instance,
   * @code
   * if (point)
   *   do_something()
   * @endcode
   */
  explicit operator bool() const;

  float get_x() const;
  void set_x(const float& value);
  float get_y() const;
  void set_y(const float& value);

  
  /** Checks if the two points @a a and @a b point to the same
   * coordinates.
   * 
   * This function accounts for floating point fluctuations; if
   * you want to control the fuzziness of the match, you can use
   * graphene_point_near() instead.
   * 
   * @newin{4,12}
   * 
   * @param b A #graphene_point_t.
   * @return `true` if the points have the same coordinates.
   */
  bool equal(const Point& b) const;
  
  /** Checks whether the two points @a a and @a b are within
   * the threshold of @a epsilon.
   * 
   * @newin{4,12}
   * 
   * @param b A #graphene_point_t.
   * @param epsilon Threshold between the two points.
   * @return `true` if the distance is within @a epsilon.
   */
  bool near(const Point& b, float epsilon) const;


};
} // namespace Graphene
} // namespace Gdk


namespace Gdk
{

namespace Graphene
{

/** @relates Gdk::Graphene::Point
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 */
inline void swap(Point& lhs, Point& rhs) noexcept
  { lhs.swap(rhs); }

} // namespace Graphene

} // namespace Gdk

namespace Glib
{

  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gdk::Graphene::Point
   */
  GDKMM_API
  Gdk::Graphene::Point wrap(graphene_point_t* object, bool take_copy = false);

} // namespace Glib


#endif /* _GDKMM_GRAPHENE_POINT_H */

