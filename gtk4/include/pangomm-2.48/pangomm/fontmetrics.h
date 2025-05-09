// Generated by gmmproc 2.82.0 -- DO NOT MODIFY!
#ifndef _PANGOMM_FONTMETRICS_H
#define _PANGOMM_FONTMETRICS_H

#include <pangommconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* fontmetrics.h
 *
 * Copyright (C) 1998-1999 The gtkmm Development Team
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
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */


#include <glibmm/value.h>
#include <pango/pango.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C" { typedef struct _PangoFontMetrics PangoFontMetrics; }
#endif

namespace Pango
{

/** A Pango::FontMetrics holds the overall metric information for a font (possibly restricted to a script).
 */
class PANGOMM_API FontMetrics
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = FontMetrics;
  using BaseObjectType = PangoFontMetrics;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type() G_GNUC_CONST;

  FontMetrics();

  explicit FontMetrics(PangoFontMetrics* gobject, bool make_a_copy = true);

  FontMetrics(const FontMetrics& other);
  FontMetrics& operator=(const FontMetrics& other);

  FontMetrics(FontMetrics&& other) noexcept;
  FontMetrics& operator=(FontMetrics&& other) noexcept;

  ~FontMetrics() noexcept;

  void swap(FontMetrics& other) noexcept;

  ///Provides access to the underlying C instance.
  PangoFontMetrics*       gobj()       { return gobject_; }

  ///Provides access to the underlying C instance.
  const PangoFontMetrics* gobj() const { return gobject_; }

  ///Provides access to the underlying C instance. The caller is responsible for freeing it. Use when directly setting fields in structs.
  PangoFontMetrics* gobj_copy() const;

protected:
  PangoFontMetrics* gobject_;

private:

  
public:
  
  /** Gets the ascent from a font metrics structure.
   * 
   * The ascent is the distance from the baseline to the logical top
   * of a line of text. (The logical top may be above or below the top
   * of the actual drawn ink. It is necessary to lay out the text to
   * figure where the ink will be.)
   * 
   * @return The ascent, in Pango units.
   */
  int get_ascent() const;
  
  /** Gets the descent from a font metrics structure.
   * 
   * The descent is the distance from the baseline to the logical bottom
   * of a line of text. (The logical bottom may be above or below the
   * bottom of the actual drawn ink. It is necessary to lay out the text
   * to figure where the ink will be.)
   * 
   * @return The descent, in Pango units.
   */
  int get_descent() const;
  
  /** Gets the line height from a font metrics structure.
   * 
   * The line height is the recommended distance between successive
   * baselines in wrapped text using this font.
   * 
   * If the line height is not available, 0 is returned.
   * 
   * @newin{1,44}
   * 
   * @return The height, in Pango units.
   */
  int get_height() const;
  
  /** Gets the approximate character width for a font metrics structure.
   * 
   * This is merely a representative value useful, for example, for
   * determining the initial size for a window. Actual characters in
   * text will be wider and narrower than this.
   * 
   * @return The character width, in Pango units.
   */
  int get_approximate_char_width() const;
  
  /** Gets the approximate digit width for a font metrics structure.
   * 
   * This is merely a representative value useful, for example, for
   * determining the initial size for a window. Actual digits in
   * text can be wider or narrower than this, though this value
   * is generally somewhat more accurate than the result of
   * get_approximate_char_width() for digits.
   * 
   * @return The digit width, in Pango units.
   */
  int get_approximate_digit_width() const;

  
  /** Gets the suggested position to draw the underline.
   * 
   * The value returned is the distance *above* the baseline of the top
   * of the underline. Since most fonts have underline positions beneath
   * the baseline, this value is typically negative.
   * 
   * @newin{1,6}
   * 
   * @return The suggested underline position, in Pango units.
   */
  int get_underline_position() const;
  
  /** Gets the suggested thickness to draw for the underline.
   * 
   * @newin{1,6}
   * 
   * @return The suggested underline thickness, in Pango units.
   */
  int get_underline_thickness() const;
  
  /** Gets the suggested position to draw the strikethrough.
   * 
   * The value returned is the distance *above* the
   * baseline of the top of the strikethrough.
   * 
   * @newin{1,6}
   * 
   * @return The suggested strikethrough position, in Pango units.
   */
  int get_strikethrough_position() const;
  
  /** Gets the suggested thickness to draw for the strikethrough.
   * 
   * @newin{1,6}
   * 
   * @return The suggested strikethrough thickness, in Pango units.
   */
  int get_strikethrough_thickness() const;


};

} //namespace Pango


namespace Pango
{

/** @relates Pango::FontMetrics
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 */
inline void swap(FontMetrics& lhs, FontMetrics& rhs) noexcept
  { lhs.swap(rhs); }

} // namespace Pango

namespace Glib
{

/** A Glib::wrap() method for this object.
 *
 * @param object The C instance.
 * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
 * @result A C++ instance that wraps this C instance.
 *
 * @relates Pango::FontMetrics
 */
PANGOMM_API
Pango::FontMetrics wrap(PangoFontMetrics* object, bool take_copy = false);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
template <>
class PANGOMM_API Value<Pango::FontMetrics> : public Glib::Value_Boxed<Pango::FontMetrics>
{};
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

} // namespace Glib


#endif /* _PANGOMM_FONTMETRICS_H */

