// Generated by gmmproc 2.84.0 -- DO NOT MODIFY!
#ifndef _GLIBMM_ENUMS_H
#define _GLIBMM_ENUMS_H


/* Copyright (C) 2016 The gtkmm Development Team
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


#include <glib.h>

namespace Glib
{
/** @addtogroup glibmmEnums glibmm Enums and Flags */

/** 
 *  @var MainContextFlags::NONE
 * Default behaviour.
 * 
 *  @var MainContextFlags::OWNERLESS_POLLING
 * Assume that polling for events will
 * free the thread to process other jobs. That's useful if you're using
 * `g_main_context_{prepare,query,check,dispatch}` to integrate GMainContext in
 * other event loops.
 */
 /** Flags to pass to Glib::MainContext::new_with_flags() which affect the
 * behaviour of a Glib::MainContext.
 * 
 * @newin{2,72}
 *
 * @ingroup glibmmEnums
 * @par Bitwise operators:
 * <tt>MainContextFlags operator|(MainContextFlags, MainContextFlags)</tt><br>
 * <tt>MainContextFlags operator&(MainContextFlags, MainContextFlags)</tt><br>
 * <tt>MainContextFlags operator^(MainContextFlags, MainContextFlags)</tt><br>
 * <tt>MainContextFlags operator~(MainContextFlags)</tt><br>
 * <tt>MainContextFlags& operator|=(MainContextFlags&, MainContextFlags)</tt><br>
 * <tt>MainContextFlags& operator&=(MainContextFlags&, MainContextFlags)</tt><br>
 * <tt>MainContextFlags& operator^=(MainContextFlags&, MainContextFlags)</tt><br>
 */
enum class MainContextFlags
{
  NONE = 0x0,
  OWNERLESS_POLLING = 0x1
};

/** @ingroup glibmmEnums */
inline MainContextFlags operator|(MainContextFlags lhs, MainContextFlags rhs)
  { return static_cast<MainContextFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup glibmmEnums */
inline MainContextFlags operator&(MainContextFlags lhs, MainContextFlags rhs)
  { return static_cast<MainContextFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup glibmmEnums */
inline MainContextFlags operator^(MainContextFlags lhs, MainContextFlags rhs)
  { return static_cast<MainContextFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup glibmmEnums */
inline MainContextFlags operator~(MainContextFlags flags)
  { return static_cast<MainContextFlags>(~static_cast<unsigned>(flags)); }

/** @ingroup glibmmEnums */
inline MainContextFlags& operator|=(MainContextFlags& lhs, MainContextFlags rhs)
  { return (lhs = static_cast<MainContextFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup glibmmEnums */
inline MainContextFlags& operator&=(MainContextFlags& lhs, MainContextFlags rhs)
  { return (lhs = static_cast<MainContextFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup glibmmEnums */
inline MainContextFlags& operator^=(MainContextFlags& lhs, MainContextFlags rhs)
  { return (lhs = static_cast<MainContextFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }


/** 
 *  @var ParamFlags::READABLE
 * The parameter is readable.
 * 
 *  @var ParamFlags::WRITABLE
 * The parameter is writable.
 * 
 *  @var ParamFlags::READWRITE
 * Alias for Glib::ParamFlags::READABLE | Glib::ParamFlags::WRITABLE.
 * 
 *  @var ParamFlags::CONSTRUCT
 * The parameter will be set upon object construction.
 * See G::Object::constructed_vfunc() for more details.
 * 
 *  @var ParamFlags::CONSTRUCT_ONLY
 * The parameter can only be set upon object construction.
 * See G::Object::constructed_vfunc() for more details.
 * 
 *  @var ParamFlags::LAX_VALIDATION
 * Upon parameter conversion (see g_param_value_convert())
 * strict validation is not required.
 * 
 *  @var ParamFlags::STATIC_NAME
 * The string used as name when constructing the 
 * parameter is guaranteed to remain valid and
 * unmodified for the lifetime of the parameter. 
 * @newin{2,8}
 * 
 *  @var ParamFlags::STATIC_NICK
 * The string used as nick when constructing the
 * parameter is guaranteed to remain valid and
 * unmmodified for the lifetime of the parameter.
 * @newin{2,8}
 * 
 *  @var ParamFlags::STATIC_BLURB
 * The string used as blurb when constructing the 
 * parameter is guaranteed to remain valid and 
 * unmodified for the lifetime of the parameter. 
 * @newin{2,8}
 * 
 *  @var ParamFlags::EXPLICIT_NOTIFY
 * Calls to g_object_set_property() for this
 * property will not automatically result in a "notify" signal being
 * emitted: the implementation must call g_object_notify() themselves
 * in case the property actually changes.  @newin{2,42}
 * 
 *  @var ParamFlags::PRIVATE
 * Internal.
 * 
 *  @var ParamFlags::DEPRECATED
 * The parameter is deprecated and will be removed
 * in a future version. A warning will be generated if it is used
 * while running with G_ENABLE_DIAGNOSTIC=1.
 * @newin{2,26}
 */
 /** Through the ParamFlags flag values, certain aspects of parameters
 * can be configured.
 * 
 * See also: G_PARAM_STATIC_STRINGS
 *
 * @ingroup glibmmEnums
 * @par Bitwise operators:
 * <tt>ParamFlags operator|(ParamFlags, ParamFlags)</tt><br>
 * <tt>ParamFlags operator&(ParamFlags, ParamFlags)</tt><br>
 * <tt>ParamFlags operator^(ParamFlags, ParamFlags)</tt><br>
 * <tt>ParamFlags operator~(ParamFlags)</tt><br>
 * <tt>ParamFlags& operator|=(ParamFlags&, ParamFlags)</tt><br>
 * <tt>ParamFlags& operator&=(ParamFlags&, ParamFlags)</tt><br>
 * <tt>ParamFlags& operator^=(ParamFlags&, ParamFlags)</tt><br>
 */
enum class ParamFlags
{
  READABLE = 1 << 0,
  WRITABLE = 1 << 1,
  READWRITE = 0x3,
  CONSTRUCT = 1 << 2,
  CONSTRUCT_ONLY = 1 << 3,
  LAX_VALIDATION = 1 << 4,
  STATIC_NAME = 1 << 5,
  PRIVATE = 0x20,
  STATIC_NICK = 1 << 6,
  STATIC_BLURB = 1 << 7,
  EXPLICIT_NOTIFY = 1 << 30,
  DEPRECATED = (gint)(1u << 31)
};

/** @ingroup glibmmEnums */
inline ParamFlags operator|(ParamFlags lhs, ParamFlags rhs)
  { return static_cast<ParamFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup glibmmEnums */
inline ParamFlags operator&(ParamFlags lhs, ParamFlags rhs)
  { return static_cast<ParamFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup glibmmEnums */
inline ParamFlags operator^(ParamFlags lhs, ParamFlags rhs)
  { return static_cast<ParamFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup glibmmEnums */
inline ParamFlags operator~(ParamFlags flags)
  { return static_cast<ParamFlags>(~static_cast<unsigned>(flags)); }

/** @ingroup glibmmEnums */
inline ParamFlags& operator|=(ParamFlags& lhs, ParamFlags rhs)
  { return (lhs = static_cast<ParamFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup glibmmEnums */
inline ParamFlags& operator&=(ParamFlags& lhs, ParamFlags rhs)
  { return (lhs = static_cast<ParamFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup glibmmEnums */
inline ParamFlags& operator^=(ParamFlags& lhs, ParamFlags rhs)
  { return (lhs = static_cast<ParamFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }


} //namespace Glib


#endif /* _GLIBMM_ENUMS_H */

