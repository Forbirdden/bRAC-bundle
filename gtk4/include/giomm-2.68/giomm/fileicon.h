// Generated by gmmproc 2.84.0 -- DO NOT MODIFY!
#ifndef _GIOMM_FILEICON_H
#define _GIOMM_FILEICON_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2007 The gtkmm Development Team
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

#include <glibmm/object.h>
#include <giomm/file.h>
#include <giomm/icon.h>
#include <giomm/loadableicon.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GFileIcon = struct _GFileIcon;
using GFileIconClass = struct _GFileIconClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class GIOMM_API FileIcon_Class; } // namespace Gio
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{

/** FileIcon specifies an icon by pointing to an image file to be used as icon.
 *
 * @newin{2,16}
 */

class GIOMM_API FileIcon
: public Glib::Object,
  public Icon,
  public LoadableIcon
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = FileIcon;
  using CppClassType = FileIcon_Class;
  using BaseObjectType = GFileIcon;
  using BaseClassType = GFileIconClass;

  // noncopyable
  FileIcon(const FileIcon&) = delete;
  FileIcon& operator=(const FileIcon&) = delete;

private:  friend class FileIcon_Class;
  static CppClassType fileicon_class_;

protected:
  explicit FileIcon(const Glib::ConstructParams& construct_params);
  explicit FileIcon(GFileIcon* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  FileIcon(FileIcon&& src) noexcept;
  FileIcon& operator=(FileIcon&& src) noexcept;

  ~FileIcon() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GFileIcon*       gobj()       { return reinterpret_cast<GFileIcon*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GFileIcon* gobj() const { return reinterpret_cast<GFileIcon*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GFileIcon* gobj_copy();

private:

  
protected:
  FileIcon();

public:
  
  static Glib::RefPtr<FileIcon> create();


  /** Gets the File associated with the given @a icon.
   * 
   * @return A File.
   */
  Glib::RefPtr<File> get_file();
  
  /** Gets the File associated with the given @a icon.
   * 
   * @return A File.
   */
  Glib::RefPtr<const File> get_file() const;

  /** The file containing the icon.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<File> > property_file() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


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
   * @relates Gio::FileIcon
   */
  GIOMM_API
  Glib::RefPtr<Gio::FileIcon> wrap(GFileIcon* object, bool take_copy = false);
}


#endif /* _GIOMM_FILEICON_H */

