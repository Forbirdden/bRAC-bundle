// Generated by gmmproc 2.82.0 -- DO NOT MODIFY!
#ifndef _GDKMM_APPLAUNCHCONTEXT_P_H
#define _GDKMM_APPLAUNCHCONTEXT_P_H


#include <giomm/private/applaunchcontext_p.h>

#include <glibmm/class.h>

namespace Gdk
{

class GDKMM_API AppLaunchContext_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = AppLaunchContext;
  using BaseObjectType = GdkAppLaunchContext;
  using BaseClassType = GdkAppLaunchContextClass;
  using CppClassParent = Gio::AppLaunchContext_Class;
  using BaseClassParent = GAppLaunchContextClass;

  friend class AppLaunchContext;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
};


} // namespace Gdk


#endif /* _GDKMM_APPLAUNCHCONTEXT_P_H */

