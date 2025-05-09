// Generated by gmmproc 2.84.0 -- DO NOT MODIFY!
#ifndef _GIOMM_APPLAUNCHCONTEXT_H
#define _GIOMM_APPLAUNCHCONTEXT_H


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

#include <exception>

#include <string>

#include <glibmm/interface.h>
#include <glibmm/object.h>
//#include <giomm/file.h>
#include <giomm/icon.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GAppLaunchContext = struct _GAppLaunchContext;
using GAppLaunchContextClass = struct _GAppLaunchContextClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class GIOMM_API AppLaunchContext_Class; } // namespace Gio
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{

class GIOMM_API AppInfo;
class GIOMM_API File;

/** This is used to handle, for instance, startup notification and launching of the new application on the same screen as the launching window.
 * See also AppInfo.
 *
 * @newin{2,16}
 */

class GIOMM_API AppLaunchContext : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = AppLaunchContext;
  using CppClassType = AppLaunchContext_Class;
  using BaseObjectType = GAppLaunchContext;
  using BaseClassType = GAppLaunchContextClass;

  // noncopyable
  AppLaunchContext(const AppLaunchContext&) = delete;
  AppLaunchContext& operator=(const AppLaunchContext&) = delete;

private:  friend class AppLaunchContext_Class;
  static CppClassType applaunchcontext_class_;

protected:
  explicit AppLaunchContext(const Glib::ConstructParams& construct_params);
  explicit AppLaunchContext(GAppLaunchContext* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  AppLaunchContext(AppLaunchContext&& src) noexcept;
  AppLaunchContext& operator=(AppLaunchContext&& src) noexcept;

  ~AppLaunchContext() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GAppLaunchContext*       gobj()       { return reinterpret_cast<GAppLaunchContext*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GAppLaunchContext* gobj() const { return reinterpret_cast<GAppLaunchContext*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GAppLaunchContext* gobj_copy();

private:


protected:
  AppLaunchContext();

public:
  
  static Glib::RefPtr<AppLaunchContext> create();


  /** Arranges for @a variable to be set to @a value in the child’s environment when
   *  @a context is used to launch an application.
   * 
   * @newin{2,32}
   * 
   * @param variable The environment variable to set.
   * @param value The value for to set the variable to.
   */
  void setenv(const Glib::ustring& variable, const Glib::ustring& value);
  
  /** Arranges for @a variable to be unset in the child’s environment when @a context
   * is used to launch an application.
   * 
   * @newin{2,32}
   * 
   * @param variable The environment variable to remove.
   */
  void unsetenv(const Glib::ustring& variable);

 
  /** Gets the complete environment variable list to be passed to
   * the child process when @a context is used to launch an application.
   * This is a <tt>nullptr</tt>-terminated array of strings, where each string has
   * the form `KEY=VALUE`.
   * 
   * @newin{2,32}
   * 
   * @return The child’s environment.
   */
  std::vector<Glib::ustring> get_environment() const;

 
  /** Gets the display string for the @a context. This is used to ensure new
   * applications are started on the same display as the launching
   * application, by setting the `DISPLAY` environment variable.
   * 
   * @param info The app info.
   * @param files A list of Gio::File objects.
   * @return A display string for the display.
   */
  std::string get_display(const Glib::RefPtr<AppInfo>& info, const std::vector<Glib::RefPtr<Gio::File>>& files);

  
  /** Initiates startup notification for the application and returns the
   * `XDG_ACTIVATION_TOKEN` or `DESKTOP_STARTUP_ID` for the launched operation,
   * if supported.
   * 
   * The returned token may be referred to equivalently as an ‘activation token’
   * (using Wayland terminology) or a ‘startup sequence ID’ (using X11 terminology).
   * The two [are interoperable](https://gitlab.freedesktop.org/wayland/wayland-protocols/-/blob/main/staging/xdg-activation/x11-interoperation.rst).
   * 
   * Activation tokens are defined in the [XDG Activation Protocol](https://wayland.app/protocols/xdg-activation-v1),
   * and startup notification IDs are defined in the 
   * [freedesktop.org Startup Notification Protocol](http://standards.freedesktop.org/startup-notification-spec/startup-notification-latest.txt).
   * 
   * Support for the XDG Activation Protocol was added in GLib 2.76.
   * Since GLib 2.82 @a info and @a files can be <tt>nullptr</tt>. If that’s not supported by the backend,
   * the returned token will be <tt>nullptr</tt>.
   * 
   * @param info The app info.
   * @param files A list of Gio::File objects.
   * @return A startup notification ID for the application, or <tt>nullptr</tt> if
   * not supported.
   */
  std::string get_startup_notify_id(const Glib::RefPtr<AppInfo>& info, const std::vector<Glib::RefPtr<Gio::File>>& files);
  
  /** Called when an application has failed to launch, so that it can cancel
   * the application startup notification started in
   * Gio::AppLaunchContext::get_startup_notify_id().
   * 
   * @param startup_notify_id The startup notification id that was returned by
   * Gio::AppLaunchContext::get_startup_notify_id().
   */
  void launch_failed(const std::string& startup_notify_id);


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
   * @relates Gio::AppLaunchContext
   */
  GIOMM_API
  Glib::RefPtr<Gio::AppLaunchContext> wrap(GAppLaunchContext* object, bool take_copy = false);
}


#endif /* _GIOMM_APPLAUNCHCONTEXT_H */

