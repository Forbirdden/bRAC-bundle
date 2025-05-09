// Generated by gmmproc 2.84.0 -- DO NOT MODIFY!
#ifndef _GIOMM_POLLABLEINPUTSTREAM_H
#define _GIOMM_POLLABLEINPUTSTREAM_H

#include <giommconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2012 The giomm Development Team
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


#include <glibmm/interface.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GPollableInputStreamInterface GPollableInputStreamInterface;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GPollableInputStream = struct _GPollableInputStream;
using GPollableInputStreamClass = struct _GPollableInputStreamClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class GIOMM_API PollableInputStream_Class; } // namespace Gio
#endif // DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{

class GIOMM_API Cancellable;

// GPollableInputStream requires GInputStream (a GObject), but Gio::PollableInputStream
// shall not be derived from Gio::InputStream, like the Gio::Tls[Client|Server]Connection
// interfaces are derived from Gio::TlsConnection. The unusual Gio::TlsConnection class
// hierarchy is possible only because no subclass of Glib::Object implements
// Gio::Tls[Client|Server]Connection.
// See https://bugzilla.gnome.org/show_bug.cgi?id=776537

/** PollableInputStream - Interface for pollable input streams.
 * PollableInputStream is implemented by InputStreams that can be polled for
 * readiness to read. This can be used when interfacing with a non-GIO API that
 * expects UNIX-file-descriptor-style asynchronous I/O rather than GIO-style.
 * @newin{2,34}
 */

class GIOMM_API PollableInputStream : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = PollableInputStream;
  using CppClassType = PollableInputStream_Class;
  using BaseObjectType = GPollableInputStream;
  using BaseClassType = GPollableInputStreamInterface;

  // noncopyable
  PollableInputStream(const PollableInputStream&) = delete;
  PollableInputStream& operator=(const PollableInputStream&) = delete;

private:
  friend class PollableInputStream_Class;
  static CppClassType pollableinputstream_class_;

#endif /* DOXYGEN_SHOULD_SKIP_THIS */
protected:
  /**
   * You should derive from this class to use it.
   */
  PollableInputStream();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  /** Called by constructors of derived classes. Provide the result of
   * the Class init() function to ensure that it is properly
   * initialized.
   *
   * @param interface_class The Class object for the derived type.
   */
  explicit PollableInputStream(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface.
  explicit PollableInputStream(GPollableInputStream* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  PollableInputStream(PollableInputStream&& src) noexcept;
  PollableInputStream& operator=(PollableInputStream&& src) noexcept;

  ~PollableInputStream() noexcept override;

  static void add_interface(GType gtype_implementer);

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GPollableInputStream*       gobj()       { return reinterpret_cast<GPollableInputStream*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GPollableInputStream* gobj() const { return reinterpret_cast<GPollableInputStream*>(gobject_); }

private:


public:
  
  /** Checks if @a stream is actually pollable. Some classes may implement
   * PollableInputStream but have only certain instances of that class
   * be pollable. If this method returns <tt>false</tt>, then the behavior of
   * other PollableInputStream methods is undefined.
   * 
   * For any given stream, the value returned by this method is constant;
   * a stream cannot switch from pollable to non-pollable or vice versa.
   * 
   * @newin{2,28}
   * 
   * @return <tt>true</tt> if @a stream is pollable, <tt>false</tt> if not.
   */
  bool can_poll() const;
  
  /** Checks if @a stream can be read.
   * 
   * Note that some stream types may not be able to implement this 100%
   * reliably, and it is possible that a call to g_input_stream_read()
   * after this returns <tt>true</tt> would still block. To guarantee
   * non-blocking behavior, you should always use
   * g_pollable_input_stream_read_nonblocking(), which will return a
   * Gio::Error::WOULD_BLOCK error rather than blocking.
   * 
   * The behaviour of this method is undefined if
   * g_pollable_input_stream_can_poll() returns <tt>false</tt> for @a stream.
   * 
   * @newin{2,28}
   * 
   * @return <tt>true</tt> if @a stream is readable, <tt>false</tt> if not. If an error
   * has occurred on @a stream, this will result in
   * g_pollable_input_stream_is_readable() returning <tt>true</tt>, and the
   * next attempt to read will return the error.
   */
  bool is_readable() const;

  //TODO: _WRAP_METHOD(Glib::RefPtr<Source> create_source(const Glib::RefPtr<Cancellable>& cancellable), g_pollable_input_stream_create_source)

  
  /** Attempts to read up to @a count bytes from @a stream into @a buffer, as
   * with g_input_stream_read(). If @a stream is not currently readable,
   * this will immediately return Gio::Error::WOULD_BLOCK, and you can
   * use g_pollable_input_stream_create_source() to create a Source
   * that will be triggered when @a stream is readable.
   * 
   * Note that since this method never blocks, you cannot actually
   * use @a cancellable to cancel it. However, it will return an error
   * if @a cancellable has already been cancelled when you call, which
   * may happen if you call this method after a source triggers due
   * to having been cancelled.
   * 
   * The behaviour of this method is undefined if
   * g_pollable_input_stream_can_poll() returns <tt>false</tt> for @a stream.
   * 
   * @param buffer A
   * buffer to read data into (which should be at least @a count bytes long).
   * @param count The number of bytes you want to read.
   * @param cancellable A Cancellable, or <tt>nullptr</tt>.
   * @return The number of bytes read, or -1 on error (including
   * Gio::Error::WOULD_BLOCK).
   * 
   * @throws Glib::Error
   */
  gssize read_nonblocking(void* buffer, gsize count, const Glib::RefPtr<Cancellable>& cancellable);

  /// A read_nonblocking() convenience overload.
  gssize read_nonblocking(void* buffer, gsize count);

protected:
    virtual bool can_poll_vfunc() const;

    virtual bool is_readable_vfunc() const;


  //TODO: _WRAP_VFUNC(Glib::RefPtr<Source> create_source(const Glib::RefPtr<Cancellable>& cancellable), "create_source")

  /// @throws Glib::Error.
  virtual gssize read_nonblocking_vfunc(void* buffer, gsize count);


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
   * @relates Gio::PollableInputStream
   */
  GIOMM_API
  Glib::RefPtr<Gio::PollableInputStream> wrap(GPollableInputStream* object, bool take_copy = false);

} // namespace Glib


#endif /* _GIOMM_POLLABLEINPUTSTREAM_H */

