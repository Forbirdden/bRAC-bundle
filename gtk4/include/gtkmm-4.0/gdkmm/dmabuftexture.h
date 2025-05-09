// Generated by gmmproc 2.82.0 -- DO NOT MODIFY!
#ifndef _GDKMM_DMABUFTEXTURE_H
#define _GDKMM_DMABUFTEXTURE_H


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

#include <gdkmm/texture.h>
#include <gdkmm/enums.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GdkDmabufTexture = struct _GdkDmabufTexture;
using GdkDmabufTextureClass = struct _GdkDmabufTextureClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gdk
{ class GDKMM_API DmabufTexture_Class; } // namespace Gdk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gdk
{
class DmabufError : public Glib::Error
{
public:
  /**  @var Code NOT_AVAILABLE
   * Dmabuf support is not available, because the OS
   * is not Linux, or it was explicitly disabled at compile- or runtime.
   * 
   *  @var Code UNSUPPORTED_FORMAT
   * The requested format is not supported.
   * 
   *  @var Code CREATION_FAILED
   * GTK failed to create the resource for other
   * reasons.
   */
   /** Error enumeration for `Gdk::DmabufTexture`.
   * 
   * @newin{4,14}
   */
  enum Code
  {
    NOT_AVAILABLE,
    UNSUPPORTED_FORMAT,
    CREATION_FAILED
  };

  GDKMM_API DmabufError(Code error_code, const Glib::ustring& error_message);
  GDKMM_API explicit DmabufError(GError* gobject);
  GDKMM_API Code code() const;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
private:

  GDKMM_API static void throw_func(GError* gobject);

  friend GDKMM_API void wrap_init(); // uses throw_func()

  #endif //DOXYGEN_SHOULD_SKIP_THIS
};

} // namespace Gdk

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class GDKMM_API Value<Gdk::DmabufError::Code> : public Glib::Value_Enum<Gdk::DmabufError::Code>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gdk
{


/** A Gdk::Texture representing a dma-buf object.
 *
 * To create a %Gdk::DmabufTexture, use the auxiliary
 * Gdk::DmabufTextureBuilder object.
 *
 * Dma-buf textures can only be created on Linux.
 *
 * @newin{4,14}
 */

class GDKMM_API DmabufTexture : public Gdk::Texture
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = DmabufTexture;
  using CppClassType = DmabufTexture_Class;
  using BaseObjectType = GdkDmabufTexture;
  using BaseClassType = GdkDmabufTextureClass;

  // noncopyable
  DmabufTexture(const DmabufTexture&) = delete;
  DmabufTexture& operator=(const DmabufTexture&) = delete;

private:  friend class DmabufTexture_Class;
  static CppClassType dmabuftexture_class_;

protected:
  explicit DmabufTexture(const Glib::ConstructParams& construct_params);
  explicit DmabufTexture(GdkDmabufTexture* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  DmabufTexture(DmabufTexture&& src) noexcept;
  DmabufTexture& operator=(DmabufTexture&& src) noexcept;

  ~DmabufTexture() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GdkDmabufTexture*       gobj()       { return reinterpret_cast<GdkDmabufTexture*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GdkDmabufTexture* gobj() const { return reinterpret_cast<GdkDmabufTexture*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GdkDmabufTexture* gobj_copy();

private:


protected:
  DmabufTexture();

public:
  // There are no public methods, signals, properties or vfuncs.


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
   * @relates Gdk::DmabufTexture
   */
  GDKMM_API
  Glib::RefPtr<Gdk::DmabufTexture> wrap(GdkDmabufTexture* object, bool take_copy = false);
}


#endif /* _GDKMM_DMABUFTEXTURE_H */

