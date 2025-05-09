// Generated by gmmproc 2.84.0 -- DO NOT MODIFY!
#ifndef _GIOMM_THREADEDSOCKETSERVICE_H
#define _GIOMM_THREADEDSOCKETSERVICE_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2010 Jonathon Jongsma
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

#include <giomm/socketservice.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GThreadedSocketService = struct _GThreadedSocketService;
using GThreadedSocketServiceClass = struct _GThreadedSocketServiceClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class GIOMM_API ThreadedSocketService_Class; } // namespace Gio
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{

/**
 * A threaded GSocketService
 *
 * A ThreadedSocketService is a simple subclass of SocketService
 * that handles incoming connections by creating a worker thread and
 * dispatching the connection to it by emitting the run signal in
 * the new thread.
 *
 * The signal handler may perform blocking IO and need not return
 * until the connection is closed.
 *
 * The service is implemented using a thread pool, so there is a
 * limited amount of threads availible to serve incomming requests.
 * The service automatically stops the SocketService from accepting
 * new connections when all threads are busy.
 *
 * As with SocketService, you may connect to ThreadedSocketService::signal_run(),
 * or subclass and override the default handler.
 *
 * @newin{2,24}
 * @ingroup NetworkIO
 */

class GIOMM_API ThreadedSocketService : public Gio::SocketService
{
    
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = ThreadedSocketService;
  using CppClassType = ThreadedSocketService_Class;
  using BaseObjectType = GThreadedSocketService;
  using BaseClassType = GThreadedSocketServiceClass;

  // noncopyable
  ThreadedSocketService(const ThreadedSocketService&) = delete;
  ThreadedSocketService& operator=(const ThreadedSocketService&) = delete;

private:  friend class ThreadedSocketService_Class;
  static CppClassType threadedsocketservice_class_;

protected:
  explicit ThreadedSocketService(const Glib::ConstructParams& construct_params);
  explicit ThreadedSocketService(GThreadedSocketService* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  ThreadedSocketService(ThreadedSocketService&& src) noexcept;
  ThreadedSocketService& operator=(ThreadedSocketService&& src) noexcept;

  ~ThreadedSocketService() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GThreadedSocketService*       gobj()       { return reinterpret_cast<GThreadedSocketService*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GThreadedSocketService* gobj() const { return reinterpret_cast<GThreadedSocketService*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GThreadedSocketService* gobj_copy();

private:


protected:
      explicit ThreadedSocketService(int max_threads);


public:
    
  static Glib::RefPtr<ThreadedSocketService> create(int max_threads);


  /**
   * @par Slot Prototype:
   * <tt>bool on_my_%run(const Glib::RefPtr<SocketConnection>& connection, const Glib::RefPtr<Glib::Object>& source_object)</tt>
   *
   * Flags: Run Last
   *
   * The signal_run() signal is emitted in a worker thread in response to an
   * incoming connection. This thread is dedicated to handling
   *  @a connection and may perform blocking IO. The signal handler need
   * not return until the connection is closed.
   * 
   * @param connection A new SocketConnection object.
   * @param source_object The source_object passed to g_socket_listener_add_address().
   * @return <tt>true</tt> to stop further signal handlers from being called.
   */

  Glib::SignalProxy<bool(const Glib::RefPtr<SocketConnection>&, const Glib::RefPtr<Glib::Object>&)> signal_run();

    /** The maximum number of threads handling clients for this service.
   * 
   * @newin{2,22}
   *
   * Default value: 10
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_max_threads() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_run().
  virtual bool on_run(const Glib::RefPtr<SocketConnection>& connection, const Glib::RefPtr<Glib::Object>& source_object);


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
   * @relates Gio::ThreadedSocketService
   */
  GIOMM_API
  Glib::RefPtr<Gio::ThreadedSocketService> wrap(GThreadedSocketService* object, bool take_copy = false);
}


#endif /* _GIOMM_THREADEDSOCKETSERVICE_H */

