// Generated by gmmproc 2.84.0 -- DO NOT MODIFY!
#ifndef _GIOMM_ERROR_H
#define _GIOMM_ERROR_H

#include <giommconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2007 The giomm Development Team
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


#include <glibmm/error.h>
#include <glibmm/interface.h>

// There have been issues with other libraries defining HOST_NOT_FOUND (e.g.
// netdb.h).  As a workaround, we added the alternate name HOST_WAS_NOT_FOUND.
// Portable code should not use HOST_NOT_FOUND.  Undefining it here (and
// restoring it below) will allow programs to compile even if they include
// netdb.h.  See Bug #529496
#ifdef HOST_NOT_FOUND
#define GIOMM_SAVED_HOST_NOT_FOUND HOST_NOT_FOUND
#undef HOST_NOT_FOUND
#endif // HOST_NOT_FOUND


namespace Gio
{

//Note that GIOErrorEnum is not named GIOError in gio because there is already a GIOError in glib,
//But we can have both Glib::Error and Gio::Error in C++.

/**  %Exception class for giomm errors.
 */
class Error : public Glib::Error
{
public:
  /**  @var Code FAILED
   * Generic error condition for when an operation fails
   * and no more specific Gio::Error value is defined.
   * 
   *  @var Code NOT_FOUND
   * File not found.
   * 
   *  @var Code EXISTS
   * File already exists.
   * 
   *  @var Code IS_DIRECTORY
   * File is a directory.
   * 
   *  @var Code NOT_DIRECTORY
   * File is not a directory.
   * 
   *  @var Code NOT_EMPTY
   * File is a directory that isn't empty.
   * 
   *  @var Code NOT_REGULAR_FILE
   * File is not a regular file.
   * 
   *  @var Code NOT_SYMBOLIC_LINK
   * File is not a symbolic link.
   * 
   *  @var Code NOT_MOUNTABLE_FILE
   * File cannot be mounted.
   * 
   *  @var Code FILENAME_TOO_LONG
   * Filename is too many characters.
   * 
   *  @var Code INVALID_FILENAME
   * Filename is invalid or contains invalid characters.
   * 
   *  @var Code TOO_MANY_LINKS
   * File contains too many symbolic links.
   * 
   *  @var Code NO_SPACE
   * No space left on drive.
   * 
   *  @var Code INVALID_ARGUMENT
   * Invalid argument.
   * 
   *  @var Code PERMISSION_DENIED
   * Permission denied.
   * 
   *  @var Code NOT_SUPPORTED
   * Operation (or one of its parameters) not supported.
   * 
   *  @var Code NOT_MOUNTED
   * File isn't mounted.
   * 
   *  @var Code ALREADY_MOUNTED
   * File is already mounted.
   * 
   *  @var Code CLOSED
   * File was closed.
   * 
   *  @var Code CANCELLED
   * Operation was cancelled. See Cancellable.
   * 
   *  @var Code PENDING
   * Operations are still pending.
   * 
   *  @var Code READ_ONLY
   * File is read only.
   * 
   *  @var Code CANT_CREATE_BACKUP
   * Backup couldn't be created.
   * 
   *  @var Code WRONG_ETAG
   * File's Entity Tag was incorrect.
   * 
   *  @var Code TIMED_OUT
   * Operation timed out.
   * 
   *  @var Code WOULD_RECURSE
   * Operation would be recursive.
   * 
   *  @var Code BUSY
   * File is busy.
   * 
   *  @var Code WOULD_BLOCK
   * Operation would block.
   * 
   *  @var Code HOST_NOT_FOUND
   * Host couldn't be found (remote operations).
   * 
   *  @var Code WOULD_MERGE
   * Operation would merge files.
   * 
   *  @var Code FAILED_HANDLED
   * Operation failed and a helper program has
   * already interacted with the user. Do not display any error dialog.
   * 
   *  @var Code TOO_MANY_OPEN_FILES
   * The current process has too many files
   * open and can't open any more. Duplicate descriptors do count toward
   * this limit. @newin{2,20}
   * 
   *  @var Code NOT_INITIALIZED
   * The object has not been initialized. @newin{2,22}
   * 
   *  @var Code ADDRESS_IN_USE
   * The requested address is already in use. @newin{2,22}
   * 
   *  @var Code PARTIAL_INPUT
   * Need more input to finish operation. @newin{2,24}
   * 
   *  @var Code INVALID_DATA
   * The input data was invalid. @newin{2,24}
   * 
   *  @var Code DBUS_ERROR
   * A remote object generated an error that
   * doesn't correspond to a locally registered Error error
   * domain. Use g_dbus_error_get_remote_error() to extract the D-Bus
   * error name and g_dbus_error_strip_remote_error() to fix up the
   * message so it matches what was received on the wire. @newin{2,26}
   * 
   *  @var Code HOST_UNREACHABLE
   * Host unreachable. @newin{2,26}
   * 
   *  @var Code NETWORK_UNREACHABLE
   * Network unreachable. @newin{2,26}
   * 
   *  @var Code CONNECTION_REFUSED
   * Connection refused. @newin{2,26}
   * 
   *  @var Code PROXY_FAILED
   * Connection to proxy server failed. @newin{2,26}
   * 
   *  @var Code PROXY_AUTH_FAILED
   * Proxy authentication failed. @newin{2,26}
   * 
   *  @var Code PROXY_NEED_AUTH
   * Proxy server needs authentication. @newin{2,26}
   * 
   *  @var Code PROXY_NOT_ALLOWED
   * Proxy connection is not allowed by ruleset.
   * @newin{2,26}
   * 
   *  @var Code BROKEN_PIPE
   * Broken pipe. @newin{2,36}
   * 
   *  @var Code CONNECTION_CLOSED
   * Connection closed by peer. Note that this
   * is the same code as Gio::Error::BROKEN_PIPE; before 2.44 some
   * "connection closed" errors returned Gio::Error::BROKEN_PIPE, but others
   * returned Gio::Error::FAILED. Now they should all return the same
   * value, which has this more logical name. @newin{2,44}
   * 
   *  @var Code NOT_CONNECTED
   * Transport endpoint is not connected. @newin{2,44}
   * 
   *  @var Code MESSAGE_TOO_LARGE
   * Message too large. @newin{2,48}
   * 
   *  @var Code NO_SUCH_DEVICE
   * No such device found. @newin{2,74}
   * 
   *  @var Code DESTINATION_UNSET
   * Destination address unset. @newin{2,80}
   */
   /** %Error codes returned by GIO functions.
   * 
   * Note that this domain may be extended in future GLib releases. In
   * general, new error codes either only apply to new APIs, or else
   * replace Gio::Error::FAILED in cases that were not explicitly
   * distinguished before. You should therefore avoid writing code like
   * 
   * [C example ellipted]
   * but should instead treat all unrecognized error codes the same as
   * Gio::Error::FAILED.
   * 
   * See also PollableReturn for a cheaper way of returning
   * Gio::Error::WOULD_BLOCK to callers without allocating a Error.
   */
  enum Code
  {
    FAILED,
    NOT_FOUND,
    EXISTS,
    IS_DIRECTORY,
    NOT_DIRECTORY,
    NOT_EMPTY,
    NOT_REGULAR_FILE,
    NOT_SYMBOLIC_LINK,
    NOT_MOUNTABLE_FILE,
    FILENAME_TOO_LONG,
    INVALID_FILENAME,
    TOO_MANY_LINKS,
    NO_SPACE,
    INVALID_ARGUMENT,
    PERMISSION_DENIED,
    NOT_SUPPORTED,
    NOT_MOUNTED,
    ALREADY_MOUNTED,
    CLOSED,
    CANCELLED,
    PENDING,
    READ_ONLY,
    CANT_CREATE_BACKUP,
    WRONG_ETAG,
    TIMED_OUT,
    WOULD_RECURSE,
    BUSY,
    WOULD_BLOCK,
    HOST_NOT_FOUND,
    HOST_WAS_NOT_FOUND = HOST_NOT_FOUND,
    WOULD_MERGE,
    FAILED_HANDLED,
    TOO_MANY_OPEN_FILES,
    NOT_INITIALIZED,
    ADDRESS_IN_USE,
    PARTIAL_INPUT,
    INVALID_DATA,
    DBUS_ERROR,
    HOST_UNREACHABLE,
    NETWORK_UNREACHABLE,
    CONNECTION_REFUSED,
    PROXY_FAILED,
    PROXY_AUTH_FAILED,
    PROXY_NEED_AUTH,
    PROXY_NOT_ALLOWED,
    BROKEN_PIPE,
    CONNECTION_CLOSED = BROKEN_PIPE,
    NOT_CONNECTED,
    MESSAGE_TOO_LARGE,
    NO_SUCH_DEVICE,
    DESTINATION_UNSET
  };

  GIOMM_API Error(Code error_code, const Glib::ustring& error_message);
  GIOMM_API explicit Error(GError* gobject);
  GIOMM_API Code code() const;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
private:

  GIOMM_API static void throw_func(GError* gobject);

  friend GIOMM_API void wrap_init(); // uses throw_func()

  #endif //DOXYGEN_SHOULD_SKIP_THIS
};


class ResolverError : public Glib::Error
{
public:
  /**  @var Code NOT_FOUND
   * The requested name/address/service was not
   * found.
   * 
   *  @var Code TEMPORARY_FAILURE
   * The requested information could not
   * be looked up due to a network error or similar problem.
   * 
   *  @var Code INTERNAL
   * Unknown error.
   */
   /** An error code used with G_RESOLVER_ERROR in a Error returned
   * from a Resolver routine.
   * 
   * @newin{2,22}
   */
  enum Code
  {
    NOT_FOUND,
    TEMPORARY_FAILURE,
    INTERNAL
  };

  GIOMM_API ResolverError(Code error_code, const Glib::ustring& error_message);
  GIOMM_API explicit ResolverError(GError* gobject);
  GIOMM_API Code code() const;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
private:

  GIOMM_API static void throw_func(GError* gobject);

  friend GIOMM_API void wrap_init(); // uses throw_func()

  #endif //DOXYGEN_SHOULD_SKIP_THIS
};


class TlsError : public Glib::Error
{
public:
  /**  @var Code UNAVAILABLE
   * No TLS provider is available.
   * 
   *  @var Code MISC
   * Miscellaneous TLS error.
   * 
   *  @var Code BAD_CERTIFICATE
   * The certificate presented could not
   * be parsed or failed validation.
   * 
   *  @var Code NOT_TLS
   * The TLS handshake failed because the
   * peer does not seem to be a TLS server.
   * 
   *  @var Code HANDSHAKE
   * The TLS handshake failed because the
   * peer's certificate was not acceptable.
   * 
   *  @var Code CERTIFICATE_REQUIRED
   * The TLS handshake failed because
   * the server requested a client-side certificate, but none was
   * provided. See g_tls_connection_set_certificate().
   * 
   *  @var Code ENDOFFILE
   * The TLS connection was closed without proper
   * notice, which may indicate an attack. See
   * g_tls_connection_set_require_close_notify().
   * 
   *  @var Code INAPPROPRIATE_FALLBACK
   * The TLS handshake failed
   * because the client sent the fallback SCSV, indicating a protocol
   * downgrade attack. @newin{2,60}
   * 
   *  @var Code BAD_CERTIFICATE_PASSWORD
   * The certificate failed
   * to load because a password was incorrect. @newin{2,72}
   */
   /** An error code used with G_TLS_ERROR in a Error returned from a
   * TLS-related routine.
   * 
   * @newin{2,28}
   */
  enum Code
  {
    UNAVAILABLE,
    MISC,
    BAD_CERTIFICATE,
    NOT_TLS,
    HANDSHAKE,
    CERTIFICATE_REQUIRED,
    ENDOFFILE,
    INAPPROPRIATE_FALLBACK,
    BAD_CERTIFICATE_PASSWORD
  };

  GIOMM_API TlsError(Code error_code, const Glib::ustring& error_message);
  GIOMM_API explicit TlsError(GError* gobject);
  GIOMM_API Code code() const;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
private:

  GIOMM_API static void throw_func(GError* gobject);

  friend GIOMM_API void wrap_init(); // uses throw_func()

  #endif //DOXYGEN_SHOULD_SKIP_THIS
};


} // namespace Gio

#ifdef GIOMM_SAVED_HOST_NOT_FOUND
// restore the previously-defined HOST_NOT_FOUND macro
#define HOST_NOT_FOUND GIOMM_SAVED_HOST_NOT_FOUND
#undef GIOMM_SAVED_HOST_NOT_FOUND
#endif // GIOMM_SAVED_HOST_NOT_FOUND


#endif /* _GIOMM_ERROR_H */

