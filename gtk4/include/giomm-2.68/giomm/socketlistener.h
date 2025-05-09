// Generated by gmmproc 2.84.0 -- DO NOT MODIFY!
#ifndef _GIOMM_SOCKETLISTENER_H
#define _GIOMM_SOCKETLISTENER_H


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

#include <glibmm/object.h>
#include <giomm/enums.h>
#include <giomm/socket.h>
#include <giomm/socketconnection.h>
#include <giomm/asyncresult.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GSocketListener = struct _GSocketListener;
using GSocketListenerClass = struct _GSocketListenerClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class GIOMM_API SocketListener_Class; } // namespace Gio
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{

/**
 * Helper for accepting network client connections
 *
 * @see ThreadedSocketService, SocketService.
 *
 * A SocketListener is an object that keeps track of a set
 * of server sockets and helps you accept sockets from any of the
 * socket, either sync or async.
 *
 * If you want to implement a network server, also look at SocketService
 * and ThreadedSocketService which are subclass of SocketListener
 * that makes this even easier.
 *
 * @newin{2,24}
 * @ingroup NetworkIO
 */

class GIOMM_API SocketListener : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = SocketListener;
  using CppClassType = SocketListener_Class;
  using BaseObjectType = GSocketListener;
  using BaseClassType = GSocketListenerClass;

  // noncopyable
  SocketListener(const SocketListener&) = delete;
  SocketListener& operator=(const SocketListener&) = delete;

private:  friend class SocketListener_Class;
  static CppClassType socketlistener_class_;

protected:
  explicit SocketListener(const Glib::ConstructParams& construct_params);
  explicit SocketListener(GSocketListener* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  SocketListener(SocketListener&& src) noexcept;
  SocketListener& operator=(SocketListener&& src) noexcept;

  ~SocketListener() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GSocketListener*       gobj()       { return reinterpret_cast<GSocketListener*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GSocketListener* gobj() const { return reinterpret_cast<GSocketListener*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GSocketListener* gobj_copy();

private:


public:
  /** @addtogroup giommEnums giomm Enums and Flags */

  /** 
   *  @var Event::BINDING
   * The listener is about to bind a socket.
   * 
   *  @var Event::BOUND
   * The listener has bound a socket.
   * 
   *  @var Event::LISTENING
   * The listener is about to start
   * listening on this socket.
   * 
   *  @var Event::LISTENED
   * The listener is now listening on
   * this socket.
   */
   /** Describes an event occurring on a SocketListener. See the
   * SocketListener::signal_event() signal for more details.
   * 
   * Additional values may be added to this type in the future.
   * 
   * @newin{2,84}
   *
   * @ingroup giommEnums
   */
  enum class Event
  {
    BINDING,
    BOUND,
    LISTENING,
    LISTENED
  };


protected:
  SocketListener();

public:
  
  static Glib::RefPtr<SocketListener> create();


  /** Sets the listen backlog on the sockets in the listener. This must be called
   * before adding any sockets, addresses or ports to the SocketListener (for
   * example, by calling g_socket_listener_add_inet_port()) to be effective.
   * 
   * See g_socket_set_listen_backlog() for details
   * 
   * @newin{2,22}
   * 
   * @param listen_backlog An integer.
   */
  void set_backlog(int listen_backlog);

  
  /** Adds @a socket to the set of sockets that we try to accept
   * new clients from. The socket must be bound to a local
   * address and listened to.
   * 
   *  @a source_object will be passed out in the various calls
   * to accept to identify this particular source, which is
   * useful if you're listening on multiple addresses and do
   * different things depending on what address is connected to.
   * 
   * The @a socket will not be automatically closed when the @a listener is finalized
   * unless the listener held the final reference to the socket. Before GLib 2.42,
   * the @a socket was automatically closed on finalization of the @a listener, even
   * if references to it were held elsewhere.
   * 
   * @newin{2,22}
   * 
   * @param socket A listening Socket.
   * @param source_object Optional Object identifying this source.
   * @return <tt>true</tt> on success, <tt>false</tt> on error.
   * 
   * @throws Glib::Error
   */
  bool add_socket(const Glib::RefPtr<Socket>& socket, const Glib::RefPtr<Glib::Object>& source_object);

 //TODO: The use of WRAP_METHOD_DOCS_ONLY here is almost certainly not good enough.
 //Check the HTML actually outputed and probably hand-code them as for Gio::File.

  
  /** Adds @a socket to the set of sockets that we try to accept
   * new clients from. The socket must be bound to a local
   * address and listened to.
   * 
   *  @a source_object will be passed out in the various calls
   * to accept to identify this particular source, which is
   * useful if you're listening on multiple addresses and do
   * different things depending on what address is connected to.
   * 
   * The @a socket will not be automatically closed when the @a listener is finalized
   * unless the listener held the final reference to the socket. Before GLib 2.42,
   * the @a socket was automatically closed on finalization of the @a listener, even
   * if references to it were held elsewhere.
   * 
   * @newin{2,22}
   * 
   * @param socket A listening Socket.
   * @param source_object Optional Object identifying this source.
   * @return <tt>true</tt> on success, <tt>false</tt> on error.
   */

  bool add_socket(const Glib::RefPtr<Socket>& socket);

  
  /** Creates a socket of type @a type and protocol @a protocol, binds
   * it to @a address and adds it to the set of sockets we're accepting
   * sockets from.
   * 
   * Note that adding an IPv6 address, depending on the platform,
   * may or may not result in a listener that also accepts IPv4
   * connections.  For more deterministic behavior, see
   * g_socket_listener_add_inet_port().
   * 
   *  @a source_object will be passed out in the various calls
   * to accept to identify this particular source, which is
   * useful if you're listening on multiple addresses and do
   * different things depending on what address is connected to.
   * 
   * If successful and @a effective_address is non-<tt>nullptr</tt> then it will
   * be set to the address that the binding actually occurred at.  This
   * is helpful for determining the port number that was used for when
   * requesting a binding to port 0 (ie: "any port").  This address, if
   * requested, belongs to the caller and must be freed.
   * 
   * Call g_socket_listener_close() to stop listening on @a address; this will not
   * be done automatically when you drop your final reference to @a listener, as
   * references may be held internally.
   * 
   * @newin{2,22}
   * 
   * @param address A SocketAddress.
   * @param type A Gio::Socket::Type.
   * @param protocol A Gio::Socket::Protocol.
   * @param source_object Optional Object identifying this source.
   * @param effective_address Location to store the address that was bound to, or <tt>nullptr</tt>.
   * @return <tt>true</tt> on success, <tt>false</tt> on error.
   */

bool add_address(const Glib::RefPtr<SocketAddress>& address, Socket::Type type, Socket::Protocol protocol, const Glib::RefPtr<Glib::Object>& source_object, Glib::RefPtr<SocketAddress>& effective_address);
  

  /** Creates a socket of type @a type and protocol @a protocol, binds
   * it to @a address and adds it to the set of sockets we're accepting
   * sockets from.
   * 
   * Note that adding an IPv6 address, depending on the platform,
   * may or may not result in a listener that also accepts IPv4
   * connections.  For more deterministic behavior, see
   * g_socket_listener_add_inet_port().
   * 
   *  @a source_object will be passed out in the various calls
   * to accept to identify this particular source, which is
   * useful if you're listening on multiple addresses and do
   * different things depending on what address is connected to.
   * 
   * If successful and @a effective_address is non-<tt>nullptr</tt> then it will
   * be set to the address that the binding actually occurred at.  This
   * is helpful for determining the port number that was used for when
   * requesting a binding to port 0 (ie: "any port").  This address, if
   * requested, belongs to the caller and must be freed.
   * 
   * Call g_socket_listener_close() to stop listening on @a address; this will not
   * be done automatically when you drop your final reference to @a listener, as
   * references may be held internally.
   * 
   * @newin{2,22}
   * 
   * @param address A SocketAddress.
   * @param type A Gio::Socket::Type.
   * @param protocol A Gio::Socket::Protocol.
   * @param source_object Optional Object identifying this source.
   * @param effective_address Location to store the address that was bound to, or <tt>nullptr</tt>.
   * @return <tt>true</tt> on success, <tt>false</tt> on error.
   */

  bool add_address(const Glib::RefPtr<SocketAddress>& address, Socket::Type type, Socket::Protocol protocol, Glib::RefPtr<SocketAddress>& effective_address);

  
  /** Helper function for g_socket_listener_add_address() that
   * creates a TCP/IP socket listening on IPv4 and IPv6 (if
   * supported) on the specified port on all interfaces.
   * 
   *  @a source_object will be passed out in the various calls
   * to accept to identify this particular source, which is
   * useful if you're listening on multiple addresses and do
   * different things depending on what address is connected to.
   * 
   * Call g_socket_listener_close() to stop listening on @a port; this will not
   * be done automatically when you drop your final reference to @a listener, as
   * references may be held internally.
   * 
   * @newin{2,22}
   * 
   * @param port An IP port number (non-zero).
   * @param source_object Optional Object identifying this source.
   * @return <tt>true</tt> on success, <tt>false</tt> on error.
   * 
   * @throws Glib::Error
   */
  bool add_inet_port(guint16 port, const Glib::RefPtr<Glib::Object>& source_object);

  
  /** Helper function for g_socket_listener_add_address() that
   * creates a TCP/IP socket listening on IPv4 and IPv6 (if
   * supported) on the specified port on all interfaces.
   * 
   *  @a source_object will be passed out in the various calls
   * to accept to identify this particular source, which is
   * useful if you're listening on multiple addresses and do
   * different things depending on what address is connected to.
   * 
   * Call g_socket_listener_close() to stop listening on @a port; this will not
   * be done automatically when you drop your final reference to @a listener, as
   * references may be held internally.
   * 
   * @newin{2,22}
   * 
   * @param port An IP port number (non-zero).
   * @param source_object Optional Object identifying this source.
   * @return <tt>true</tt> on success, <tt>false</tt> on error.
   */

bool add_inet_port(guint16 port);

  
  /** Listens for TCP connections on any available port number for both
   * IPv6 and IPv4 (if each is available).
   * 
   * This is useful if you need to have a socket for incoming connections
   * but don't care about the specific port number.
   * 
   *  @a source_object will be passed out in the various calls
   * to accept to identify this particular source, which is
   * useful if you're listening on multiple addresses and do
   * different things depending on what address is connected to.
   * 
   * @newin{2,24}
   * 
   * @param source_object Optional Object identifying this source.
   * @return The port number, or 0 in case of failure.
   * 
   * @throws Glib::Error
   */
  guint16 add_any_inet_port(const Glib::RefPtr<Glib::Object>& source_object);

  
  /** Listens for TCP connections on any available port number for both
   * IPv6 and IPv4 (if each is available).
   * 
   * This is useful if you need to have a socket for incoming connections
   * but don't care about the specific port number.
   * 
   *  @a source_object will be passed out in the various calls
   * to accept to identify this particular source, which is
   * useful if you're listening on multiple addresses and do
   * different things depending on what address is connected to.
   * 
   * @newin{2,24}
   * 
   * @param source_object Optional Object identifying this source.
   * @return The port number, or 0 in case of failure.
   */

  guint16 add_any_inet_port();

  
  /** Blocks waiting for a client to connect to any of the sockets added
   * to the listener. Returns the Socket that was accepted.
   * 
   * If you want to accept the high-level SocketConnection, not a Socket,
   * which is often the case, then you should use g_socket_listener_accept()
   * instead.
   * 
   * If @a source_object is not <tt>nullptr</tt> it will be filled out with the source
   * object specified when the corresponding socket or address was added
   * to the listener.
   * 
   * If @a cancellable is not <tt>nullptr</tt>, then the operation can be cancelled by
   * triggering the cancellable object from another thread. If the operation
   * was cancelled, the error Gio::Error::CANCELLED will be returned.
   * 
   * @newin{2,22}
   * 
   * @param source_object Location where Object pointer will be stored, or <tt>nullptr</tt>.
   * @param cancellable Optional Cancellable object, <tt>nullptr</tt> to ignore.
   * @return A Socket on success, <tt>nullptr</tt> on error.
   */

Glib::RefPtr<Socket> accept_socket(Glib::RefPtr<Glib::Object>& source_object, const Glib::RefPtr<Cancellable>& cancellable);
  

  /** Blocks waiting for a client to connect to any of the sockets added
   * to the listener. Returns the Socket that was accepted.
   * 
   * If you want to accept the high-level SocketConnection, not a Socket,
   * which is often the case, then you should use g_socket_listener_accept()
   * instead.
   * 
   * If @a source_object is not <tt>nullptr</tt> it will be filled out with the source
   * object specified when the corresponding socket or address was added
   * to the listener.
   * 
   * If @a cancellable is not <tt>nullptr</tt>, then the operation can be cancelled by
   * triggering the cancellable object from another thread. If the operation
   * was cancelled, the error Gio::Error::CANCELLED will be returned.
   * 
   * @newin{2,22}
   * 
   * @param source_object Location where Object pointer will be stored, or <tt>nullptr</tt>.
   * @param cancellable Optional Cancellable object, <tt>nullptr</tt> to ignore.
   * @return A Socket on success, <tt>nullptr</tt> on error.
   */

  Glib::RefPtr<Socket> accept_socket(Glib::RefPtr<Glib::Object>& source_object);

  
  /** Blocks waiting for a client to connect to any of the sockets added
   * to the listener. Returns the Socket that was accepted.
   * 
   * If you want to accept the high-level SocketConnection, not a Socket,
   * which is often the case, then you should use g_socket_listener_accept()
   * instead.
   * 
   * If @a source_object is not <tt>nullptr</tt> it will be filled out with the source
   * object specified when the corresponding socket or address was added
   * to the listener.
   * 
   * If @a cancellable is not <tt>nullptr</tt>, then the operation can be cancelled by
   * triggering the cancellable object from another thread. If the operation
   * was cancelled, the error Gio::Error::CANCELLED will be returned.
   * 
   * @newin{2,22}
   * 
   * @param source_object Location where Object pointer will be stored, or <tt>nullptr</tt>.
   * @param cancellable Optional Cancellable object, <tt>nullptr</tt> to ignore.
   * @return A Socket on success, <tt>nullptr</tt> on error.
   */

  Glib::RefPtr<Socket> accept_socket(const Glib::RefPtr<Cancellable>& cancellable);

  
  /** Blocks waiting for a client to connect to any of the sockets added
   * to the listener. Returns the Socket that was accepted.
   * 
   * If you want to accept the high-level SocketConnection, not a Socket,
   * which is often the case, then you should use g_socket_listener_accept()
   * instead.
   * 
   * If @a source_object is not <tt>nullptr</tt> it will be filled out with the source
   * object specified when the corresponding socket or address was added
   * to the listener.
   * 
   * If @a cancellable is not <tt>nullptr</tt>, then the operation can be cancelled by
   * triggering the cancellable object from another thread. If the operation
   * was cancelled, the error Gio::Error::CANCELLED will be returned.
   * 
   * @newin{2,22}
   * 
   * @param source_object Location where Object pointer will be stored, or <tt>nullptr</tt>.
   * @param cancellable Optional Cancellable object, <tt>nullptr</tt> to ignore.
   * @return A Socket on success, <tt>nullptr</tt> on error.
   */

  Glib::RefPtr<Socket> accept_socket();

  
  /** This is the asynchronous version of g_socket_listener_accept_socket().
   * 
   * When the operation is finished @a slot will be
   * called. You can then call g_socket_listener_accept_socket_finish()
   * to get the result of the operation.
   * 
   * @newin{2,22}
   * 
   * @param cancellable A Cancellable, or <tt>nullptr</tt>.
   * @param slot A SlotAsyncReady.
   * @param user_data User data for the callback.
   */

  void accept_socket_async(const Glib::RefPtr<Cancellable>& cancellable, const SlotAsyncReady& slot);
  

  /** This is the asynchronous version of g_socket_listener_accept_socket().
   * 
   * When the operation is finished @a slot will be
   * called. You can then call g_socket_listener_accept_socket_finish()
   * to get the result of the operation.
   * 
   * @newin{2,22}
   * 
   * @param cancellable A Cancellable, or <tt>nullptr</tt>.
   * @param slot A SlotAsyncReady.
   * @param user_data User data for the callback.
   */

  void accept_socket_async(const SlotAsyncReady& slot);

  
  /** Finishes an async accept operation. See g_socket_listener_accept_socket_async()
   * 
   * @newin{2,22}
   * 
   * @param result A AsyncResult.
   * @param source_object Optional Object identifying this source.
   * @return A Socket on success, <tt>nullptr</tt> on error.
   */

  Glib::RefPtr<Socket> accept_socket_finish(const Glib::RefPtr<AsyncResult>& result, Glib::RefPtr<Glib::Object>& source_object);
  

  /** Finishes an async accept operation. See g_socket_listener_accept_socket_async()
   * 
   * @newin{2,22}
   * 
   * @param result A AsyncResult.
   * @param source_object Optional Object identifying this source.
   * @return A Socket on success, <tt>nullptr</tt> on error.
   */

  Glib::RefPtr<Socket> accept_socket_finish(const Glib::RefPtr<AsyncResult>& result);

  
  /** Blocks waiting for a client to connect to any of the sockets added
   * to the listener. Returns a SocketConnection for the socket that was
   * accepted.
   * 
   * If @a source_object is not <tt>nullptr</tt> it will be filled out with the source
   * object specified when the corresponding socket or address was added
   * to the listener.
   * 
   * If @a cancellable is not <tt>nullptr</tt>, then the operation can be cancelled by
   * triggering the cancellable object from another thread. If the operation
   * was cancelled, the error Gio::Error::CANCELLED will be returned.
   * 
   * @newin{2,22}
   * 
   * @param source_object Location where Object pointer will be stored, or <tt>nullptr</tt>.
   * @param cancellable Optional Cancellable object, <tt>nullptr</tt> to ignore.
   * @return A SocketConnection on success, <tt>nullptr</tt> on error.
   */

  Glib::RefPtr<SocketConnection> accept(Glib::RefPtr<Object>& source_object, const Glib::RefPtr<Cancellable>& cancellable);

  
  /** Blocks waiting for a client to connect to any of the sockets added
   * to the listener. Returns a SocketConnection for the socket that was
   * accepted.
   * 
   * If @a source_object is not <tt>nullptr</tt> it will be filled out with the source
   * object specified when the corresponding socket or address was added
   * to the listener.
   * 
   * If @a cancellable is not <tt>nullptr</tt>, then the operation can be cancelled by
   * triggering the cancellable object from another thread. If the operation
   * was cancelled, the error Gio::Error::CANCELLED will be returned.
   * 
   * @newin{2,22}
   * 
   * @param source_object Location where Object pointer will be stored, or <tt>nullptr</tt>.
   * @param cancellable Optional Cancellable object, <tt>nullptr</tt> to ignore.
   * @return A SocketConnection on success, <tt>nullptr</tt> on error.
   */

  Glib::RefPtr<SocketConnection> accept(Glib::RefPtr<Object>& source_object);

  
  /** Blocks waiting for a client to connect to any of the sockets added
   * to the listener. Returns a SocketConnection for the socket that was
   * accepted.
   * 
   * If @a source_object is not <tt>nullptr</tt> it will be filled out with the source
   * object specified when the corresponding socket or address was added
   * to the listener.
   * 
   * If @a cancellable is not <tt>nullptr</tt>, then the operation can be cancelled by
   * triggering the cancellable object from another thread. If the operation
   * was cancelled, the error Gio::Error::CANCELLED will be returned.
   * 
   * @newin{2,22}
   * 
   * @param source_object Location where Object pointer will be stored, or <tt>nullptr</tt>.
   * @param cancellable Optional Cancellable object, <tt>nullptr</tt> to ignore.
   * @return A SocketConnection on success, <tt>nullptr</tt> on error.
   */

  Glib::RefPtr<SocketConnection> accept(const Glib::RefPtr<Cancellable>& cancellable);

  
  /** Blocks waiting for a client to connect to any of the sockets added
   * to the listener. Returns a SocketConnection for the socket that was
   * accepted.
   * 
   * If @a source_object is not <tt>nullptr</tt> it will be filled out with the source
   * object specified when the corresponding socket or address was added
   * to the listener.
   * 
   * If @a cancellable is not <tt>nullptr</tt>, then the operation can be cancelled by
   * triggering the cancellable object from another thread. If the operation
   * was cancelled, the error Gio::Error::CANCELLED will be returned.
   * 
   * @newin{2,22}
   * 
   * @param source_object Location where Object pointer will be stored, or <tt>nullptr</tt>.
   * @param cancellable Optional Cancellable object, <tt>nullptr</tt> to ignore.
   * @return A SocketConnection on success, <tt>nullptr</tt> on error.
   */

  Glib::RefPtr<SocketConnection> accept();
  

  /** This is the asynchronous version of g_socket_listener_accept().
   * 
   * When the operation is finished @a slot will be
   * called. You can then call g_socket_listener_accept_finish()
   * to get the result of the operation.
   * 
   * @newin{2,22}
   * 
   * @param cancellable A Cancellable, or <tt>nullptr</tt>.
   * @param slot A SlotAsyncReady.
   * @param user_data User data for the callback.
   */

  void accept_async(const SlotAsyncReady& slot);

  
  /** This is the asynchronous version of g_socket_listener_accept().
   * 
   * When the operation is finished @a slot will be
   * called. You can then call g_socket_listener_accept_finish()
   * to get the result of the operation.
   * 
   * @newin{2,22}
   * 
   * @param cancellable A Cancellable, or <tt>nullptr</tt>.
   * @param slot A SlotAsyncReady.
   * @param user_data User data for the callback.
   */

  void accept_async(const Glib::RefPtr<Cancellable>& cancellable, const SlotAsyncReady& slot);
  

  /** Finishes an async accept operation. See g_socket_listener_accept_async()
   * 
   * @newin{2,22}
   * 
   * @param result A AsyncResult.
   * @param source_object Optional Object identifying this source.
   * @return A SocketConnection on success, <tt>nullptr</tt> on error.
   */

  Glib::RefPtr<SocketConnection> accept_finish(const Glib::RefPtr<AsyncResult>& result, Glib::RefPtr<Glib::Object>& source_object);

  
  /** Finishes an async accept operation. See g_socket_listener_accept_async()
   * 
   * @newin{2,22}
   * 
   * @param result A AsyncResult.
   * @param source_object Optional Object identifying this source.
   * @return A SocketConnection on success, <tt>nullptr</tt> on error.
   */

  Glib::RefPtr<SocketConnection> accept_finish(const Glib::RefPtr<AsyncResult>& result);

  
  /** Closes all the sockets in the listener.
   * 
   * @newin{2,22}
   */
  void close();

 
  // TODO: Remove no_default_handler when we can break ABI:
  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%event(Event event, const Glib::RefPtr<Socket>& socket)</tt>
   *
   * Flags: Run Last
   *
   * Emitted when @a listener's activity on @a socket changes state.
   * Note that when @a listener is used to listen on both IPv4 and
   * IPv6, a separate set of signals will be emitted for each, and
   * the order they happen in is undefined.
   * 
   * @newin{2,84}
   * 
   * @param event The event that is occurring.
   * @param socket The Socket the event is occurring on.
   */

  Glib::SignalProxy<void(Event, const Glib::RefPtr<Socket>&)> signal_event();


  /** The number of outstanding connections in the listen queue.
   * 
   * @newin{2,22}
   *
   * Default value: 10
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_listen_backlog() ;

/** The number of outstanding connections in the listen queue.
   * 
   * @newin{2,22}
   *
   * Default value: 10
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_listen_backlog() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gio


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class GIOMM_API Value<Gio::SocketListener::Event> : public Glib::Value_Enum<Gio::SocketListener::Event>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::SocketListener
   */
  GIOMM_API
  Glib::RefPtr<Gio::SocketListener> wrap(GSocketListener* object, bool take_copy = false);
}


#endif /* _GIOMM_SOCKETLISTENER_H */

