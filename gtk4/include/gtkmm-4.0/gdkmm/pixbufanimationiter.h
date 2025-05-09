// Generated by gmmproc 2.82.0 -- DO NOT MODIFY!
#ifndef _GDKMM_PIXBUFANIMATIONITER_H
#define _GDKMM_PIXBUFANIMATIONITER_H


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

#include <glibmm/object.h>
#include <gdkmm/pixbuf.h>
#include <gdk-pixbuf/gdk-pixbuf.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GdkPixbufAnimationIter = struct _GdkPixbufAnimationIter;
using GdkPixbufAnimationIterClass = struct _GdkPixbufAnimationIterClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gdk
{ class GDKMM_API PixbufAnimationIter_Class; } // namespace Gdk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gdk
{

/** An iterator which points to a certain position in a PixbufAnimation.
 */

class GDKMM_API PixbufAnimationIter : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = PixbufAnimationIter;
  using CppClassType = PixbufAnimationIter_Class;
  using BaseObjectType = GdkPixbufAnimationIter;
  using BaseClassType = GdkPixbufAnimationIterClass;

  // noncopyable
  PixbufAnimationIter(const PixbufAnimationIter&) = delete;
  PixbufAnimationIter& operator=(const PixbufAnimationIter&) = delete;

private:  friend class PixbufAnimationIter_Class;
  static CppClassType pixbufanimationiter_class_;

protected:
  explicit PixbufAnimationIter(const Glib::ConstructParams& construct_params);
  explicit PixbufAnimationIter(GdkPixbufAnimationIter* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  PixbufAnimationIter(PixbufAnimationIter&& src) noexcept;
  PixbufAnimationIter& operator=(PixbufAnimationIter&& src) noexcept;

  ~PixbufAnimationIter() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GdkPixbufAnimationIter*       gobj()       { return reinterpret_cast<GdkPixbufAnimationIter*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GdkPixbufAnimationIter* gobj() const { return reinterpret_cast<GdkPixbufAnimationIter*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GdkPixbufAnimationIter* gobj_copy();

private:

protected:

  //A constructor (if any) would go here, protected.

public:
  
  /** Gets the number of milliseconds the current pixbuf should be displayed,
   * or -1 if the current pixbuf should be displayed forever.
   *
   * Glib::SignalTimeout::connect() conveniently takes a timeout in milliseconds,
   * so you can use a timeout to schedule the next update.
   *
   * Note that some formats, like GIF, might clamp the timeout values in the
   * image file to avoid updates that are just too quick. The minimum timeout
   * for GIF images is currently 20 milliseconds.
   * 
   * @return Delay time in milliseconds (thousandths of a second).
   */
  int get_delay_time() const;

  
  /** Gets the current pixbuf which should be displayed.
   * 
   * The pixbuf might not be the same size as the animation itself
   * (Gdk::Pixbuf::get_width(), Gdk::Pixbuf::get_height()).
   * 
   * This pixbuf should be displayed for get_delay_time() milliseconds.
   * 
   * The returned pixbuf will become invalid when the iterator advances
   * to the next frame, which may happen anytime you call
   * advance(). Copy the pixbuf to keep it, with 
   * Gdk::Pixbuf::copy() as it may get recycled as you advance the iterator.
   * 
   * @return The pixbuf to be displayed.
   */
  Glib::RefPtr<Gdk::Pixbuf> get_pixbuf();
  
  /** Gets the current pixbuf which should be displayed.
   * 
   * The pixbuf might not be the same size as the animation itself
   * (Gdk::Pixbuf::get_width(), Gdk::Pixbuf::get_height()).
   * 
   * This pixbuf should be displayed for get_delay_time() milliseconds.
   * 
   * The returned pixbuf will become invalid when the iterator advances
   * to the next frame, which may happen anytime you call
   * advance(). Copy the pixbuf to keep it, with 
   * Gdk::Pixbuf::copy() as it may get recycled as you advance the iterator.
   * 
   * @return The pixbuf to be displayed.
   */
  Glib::RefPtr<const Gdk::Pixbuf> get_pixbuf() const;

  
  /** Used to determine how to respond to the area_updated signal on
   * Gdk::PixbufLoader when loading an animation.
   * 
   * The `::area_updated` signal is emitted for an area of the frame currently
   * streaming in to the loader. So if you're on the currently loading frame,
   * you will need to redraw the screen for the updated area.
   * 
   * @return <tt>true</tt> if the frame we're on is partially loaded, or the last frame.
   */
  bool on_currently_loading_frame() const;

  /** Possibly advances an animation to a new frame. Chooses the frame based
   * on the start time passed to Gdk::PixbufAnimation::get_iter().
   *
   * @a current_time would normally come from g_get_real_time(), and
   * must be greater than or equal to the time passed to
   * Gdk::PixbufAnimation::get_iter(), and must increase or remain
   * unchanged each time get_pixbuf() is called.
   * That is, you can't go backward in time; animations only play forward.
   *
   * As a shortcut, the default value of @a current_time is g_get_real_time().
   * So you only need to explicitly pass @a current_time if you're doing
   * something odd like playing the animation at double speed.
   *
   * If this function returns <tt>false</tt>, there's no need to update the animation
   * display, assuming the display had been rendered prior to advancing;
   * if <tt>true</tt>, you need to call get_pixbuf() and update the
   * display with the new pixbuf.
   *
   * @param current_time Current time.
   * @return <tt>true</tt> if the image may need updating.
   */
  bool advance(gint64 current_time = g_get_real_time());
  

public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gdk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gdk::PixbufAnimationIter
   */
  GDKMM_API
  Glib::RefPtr<Gdk::PixbufAnimationIter> wrap(GdkPixbufAnimationIter* object, bool take_copy = false);
}


#endif /* _GDKMM_PIXBUFANIMATIONITER_H */

