#! c:\program files\git\usr\bin\perl.EXE
#
# tools/generate_wrap_init.pl.  Generated from generate_wrap_init.pl.in
#

use strict;

my @namespace_whole = (); # list of strings.
my $function_prefix = "";
my $parent_dir = ""; # e.g. gtkmm
my $debug = 0;
my %objects = ();    # Hashmap of arrays of objects (classes) in each file
my %exceptions = (); # Hashmap of arrays of exception classes in each file
my %conditional_compilation = ();
my %deprecated = ();
my %extra_includes = ();

# Hashmap telling if the registration of the classes in a file should not be
# included in the wrap_init() function.  (This is useful for modules such as
# gstreamermm that want to exclude plug-in types from being registered in their
# wrap_init() function.)
my %exclude_from_wrap_init = ();

# The keys in all hashes except %extra_includes are names of header files (xyz.h),
# corresponding to the read .hg files.
#
# The keys in %extra_includes are names of header files to include without reading.
# %extra_includes is a hash rather than a list because we don't want duplicates.
# Its values are not used. In C++ it would have been a std::set.

# $objects{$filename_header} is a reference to an array. That array contains
# references to arrays with two or more elements, ($cppname, $basename, @extra_namespace),
# one reference per object defined in file $filename_header.
# %exceptions has the same structure as %objects.

sub print_with_guards
{
  my $file = $_[0];
  my $message = $_[1];
  if ($deprecated{$file})
  {
    # The uc(parent_dir) is a bit of a hack. One day it will get it wrong.
    print "#ifndef " . uc($parent_dir) ."_DISABLE_DEPRECATED\n"
  }

  if ($conditional_compilation{$file})
  {
    print "#$conditional_compilation{$file}\n"
  }

  print "$message";

  if ($conditional_compilation{$file})
  {
    print "#endif // $conditional_compilation{$file}\n"
  }

  if ($deprecated{$file})
  {
    print "#endif // *_DISABLE_DEPRECATED\n"
  }
}

# Loop through command line flags, setting variables:
while ($ARGV[0] =~ /^-/)
{
  if ($ARGV[0] =~ /--namespace=(\S+)/)
  {
    push(@namespace_whole, split('::', $1));

    if($parent_dir eq "")
      { $parent_dir = lc($1) . "mm"; }
  }
  elsif ($ARGV[0] =~ /--function_prefix=(\S+)/)
  {
    $function_prefix = "$1";
  }
  elsif ($ARGV[0] =~ /--parent_dir=(\S+)/)
  {
    $parent_dir = "$1";
  }
  elsif ($ARGV[0] =~ /--debug/)
  {
    $debug = 1;
  }
  elsif ($ARGV[0] =~ /--path=(\S+)/)
  {
    # Do nothing. Just for backwards compatibility.
  }
  else
  {
    print "Error: unknown option $ARGV[0]\n";
    exit;
  }

  shift @ARGV;
}

# Loop through remaining command line arguments, names of .hg files.
while ($ARGV[0])
{
  if ($debug) {warn "Processing file : $ARGV[0]\n";}

  my $filename = $ARGV[0];
  open FILE, $filename or die "Couldn't open file $filename : $!\n";

  # Store header filename, so we can #include it later:
  my $filename_header = $filename;
  $filename_header =~ s#.*/([^/]+)\.hg#$1.h#;
  $conditional_compilation{$filename_header} = "";
  $deprecated{$filename_header} = 0;

  # Keep track of sub-namespaces, if any.
  # Otherwise we can't tell the difference between Gio::Error and Gio::DBus::Error.
  my @extra_namespace = ();

  while (<FILE>)
  {
    # Skip comments.
    # This is far from foolproof. It only skips one-line comments, and it does
    # not try to skip quoted strings.
    s#//.*##;
    s#/\*.*?\*/##g;

    # This is useful when only some classes use a sub-namespace.
    # Alternatively, we could parse the namespace start and end parentheses,
    # but this hack is easier.
    if (/\b_GMMPROC_EXTRA_NAMESPACE\((\w+)\)/)
    {
      # debug: print "generate_wrap_init: namespace found: $1\n";
      push(@extra_namespace, $1);
    }
    elsif (/\b(_CLASS_GOBJECT|_CLASS_GTKOBJECT|_WRAP_GERROR)\s*\(/)
    {
      my $type_of_class = $1;
      my $line = $_;
      while ($line !~ /\)/ && ($_ = <FILE>))
      {
        $line .= $_;
      }
      if (!$_)
      {
        die "Reached end of file $filename in $type_of_class macro. " .
            "(No right parenthesis.)\n";
      }

      $line =~ s/^.*$type_of_class\s*\(//;
      $line =~ s/\s+//g;
      $line =~ s/\).*//;
      my ($cppname, $cname, $ccast) = split(/,/, $line);
      my $basename = lc($ccast);
      my @names = ($cppname, $basename, @extra_namespace);

      # Don't remove the space between \ and @. When glibmm is built with Meson,
      # the \ would be removed in generate_wrap_int.pl.
      if ($type_of_class eq "_CLASS_GOBJECT" or
          $type_of_class eq "_CLASS_GTKOBJECT")
      {
        push(@{$objects{$filename_header}}, \ @names);
      }
      elsif ($type_of_class eq "_WRAP_GERROR")
      {
        push(@{$exceptions{$filename_header}}, \ @names);
      }
    }
    elsif (/\b_INCLUDE_IN_WRAP_INIT\((.+)\)/)
    {
      $extra_includes{$1} = 1;
    }
    elsif (/\b_GTKMMPROC_WIN32_NO_WRAP\b/)
    {
      # This file will not be compiled on Win32.
      # No extra include is required. If G_OS_WIN32 is defined, it's defined in
      # a file included indirectly by glibmm.h.
      $conditional_compilation{$filename_header} = "ifndef G_OS_WIN32";
    }
    elsif (/\b_GMMPROC_WRAP_CONDITIONALLY\((.+)\)/)
    {
      # The compilation of this file will be controlled by a preprocessor directive.

      # Allow m4 quotes in the parameter. There may be cases where the m4 processor
      # would misunderstand a parameter without quotes.
      my $par = $1;
      $par =~ s/^\s*`*\s*//; # Remove m4 quotes and leading and trailing white space.
      $par =~ s/\s*'*\s*$//;
      $conditional_compilation{$filename_header} = $par;
    }
    elsif (/\b_IS_DEPRECATED\b/)
    {
      $deprecated{$filename_header} = 1; # This file is deprecated
    }
    elsif (/\b_NO_WRAP_INIT_REGISTRATION\b/)
    {
      $exclude_from_wrap_init{$filename_header} = 1;
    }
  }

  shift @ARGV;
  close(FILE);
}


# Print the wrap_init.cc file.

print << "EOF";
// Generated by generate_wrap_init.pl -- DO NOT MODIFY!

#define GLIBMM_INCLUDED_FROM_WRAP_INIT_CC
#include <glibmm.h>
#include <${parent_dir}/wrap_init.h>
#include <glibmm/error.h>
#include <glibmm/object.h>
EOF

foreach my $filename_header (sort keys %extra_includes)
{
  print "#include <$filename_header>\n";
}

print "\n// #include the widget headers so that we can call the get_type() static methods:\n";

# keys %deprecated contains all filenames, not just the names of deprecated files.
foreach my $filename_header (sort keys %deprecated)
{
  next if($exclude_from_wrap_init{$filename_header});
  print_with_guards($filename_header, "#include \"$filename_header\"\n");
}

# Declarations of glib functions.

print "\n#if defined(__GNUC__) || defined (__clang__)\n";
print "// gcc or clang, https://gitlab.gnome.org/GNOME/glibmm/-/issues/119\n";
print "#pragma GCC diagnostic push\n";
print "#pragma GCC diagnostic ignored \"-Wpragmas\"\n";
print "#pragma GCC diagnostic ignored \"-Winconsistent-dllimport\"\n";
print "#elif defined(_MSC_VER)\n";
print "#pragma warning( push )\n";
print "#pragma warning( disable : 4273 ) // Disable MSVC warning C4273 in wrap_init.cc momentarily\n";
print "#endif\n";
print "\nextern \"C\"\n";
print "{\n";

print "//Declarations of the *_get_type() functions:\n\n";

foreach my $filename_header (sort keys %objects)
{
  next if($exclude_from_wrap_init{$filename_header});

  my @objects_in_file = @{$objects{$filename_header}};
  my $message = "";
  foreach my $i (@objects_in_file)
  {
    # $i is a reference to an array with info on one object, declared in file $filename_header.
    my $basename = ${$i}[1];
    $message .= "GType ${basename}_get_type(void);\n";
  }
  print_with_guards($filename_header, $message);
}

print "\n//Declarations of the *_error_quark() functions:\n\n";

foreach my $filename_header (sort keys %exceptions)
{
  my @exceptions_in_file = @{$exceptions{$filename_header}};
  my $message = "";
  foreach my $i (@exceptions_in_file)
  {
    # $i is a reference to an array with info on one exception, declared in file $filename_header.
    my $basename = ${$i}[1];
    $message .= "GQuark ${basename}_quark(void);\n";
  }
  print_with_guards($filename_header, $message);
}

print "} // extern \"C\"\n";
print "\n#if defined(__GNUC__) || defined(__clang__)\n";
print "#pragma GCC diagnostic pop\n";
print "#elif defined(_MSC_VER)\n";
print "#pragma warning( pop )\n";
print "#endif\n";
print "\n";

my $namespace_whole_declarations = "";
my $namespace_whole_close = "";
foreach (@namespace_whole)
{
  $namespace_whole_declarations .= "namespace $_ {\n";
  $namespace_whole_close = "} // $_\n$namespace_whole_close";
}

print "$namespace_whole_declarations";

print "\n//Declarations of the *_Class::wrap_new() methods, instead of including all the private headers:\n\n";

foreach my $filename_header (sort keys %objects)
{
  next if($exclude_from_wrap_init{$filename_header});

  my @objects_in_file = @{$objects{$filename_header}};
  my $message = "";
  foreach my $i (@objects_in_file)
  {
    my ($cppname, undef, @extra_namespace) = @{$i};

    my $namespace_declarations = "";
    my $namespace_close = "";
    foreach (@extra_namespace)
    {
      $namespace_declarations .= "namespace $_ { ";
      $namespace_close .= " }";
    }

    $message .= "${namespace_declarations}class ${cppname}_Class " .
                "{ public: static Glib::ObjectBase* wrap_new(GObject*); };$namespace_close\n";
  }
  print_with_guards($filename_header, $message);
}

# wrap_init() calls throw_func() in each exception class. throw_func() is a
# private method. wrap_init() is declared as a friend of the exception class.
# The friends will find each other easily only if the calling wrap_init()
# function is declared in the same namespace as the exception class.
# If there are extra namespaces, we define extra wrap_init() functions, which
# are called from the wrap_init() function in @namespace_whole.

my %extra_namespaces = ();
foreach my $filename_header (keys %exceptions)
{
  my @exceptions_in_file = @{$exceptions{$filename_header}};
  foreach my $i (@exceptions_in_file)
  {
    if (@{$i} > 2)
    {
      my (undef, undef, @extra_namespace) = @{$i};
      $extra_namespaces{join("::", @extra_namespace)} = 1;
    }
  }
}

# Generate the extra wrap_init() functions in sub-namespaces, if any.

# If you suspect that code with three levels of foreach is inefficient, you are
# probably right, but it's not important here. The exception classes are few in
# most modules (hardly more than about 10), and the sub-namespaces are even
# fewer (usually 0 or 1).

print "\n// Register Error domains in sub-namespaces:\n" if keys %extra_namespaces > 0;

foreach my $sub_namespace (sort keys %extra_namespaces)
{
  my @extra_namespace = split("::", $sub_namespace);
  my $namespace_declarations = "";
  my $namespace_close = "";
  foreach (@extra_namespace)
  {
    $namespace_declarations .= "namespace $_ {\n";
    $namespace_close = "} // $_\n$namespace_close";
  }

  print "\n$namespace_declarations";
  print "\nvoid wrap_init()\n{\n";

  foreach my $filename_header (sort keys %exceptions)
  {
    my @exceptions_in_file = @{$exceptions{$filename_header}};
    my $message = "";
    foreach my $i (@exceptions_in_file)
    {
      my ($cppname, $basename, @extra_namespace) = @{$i};
      if (@extra_namespace > 0 && $sub_namespace eq join("::", @extra_namespace))
      {
        $message .= "  Glib::Error::register_domain(${basename}_quark(), &" .
                    "${sub_namespace}::${cppname}::throw_func);\n";
      }
    }
    print_with_guards($filename_header, $message) if $message;
  }

  print "\n} // wrap_init()\n";
  print "\n$namespace_close";
}

# Generate namespace::wrap_init() body

print "\nvoid ${function_prefix}wrap_init()\n{\n";

print "  // Register Error domains in the main namespace:\n";

foreach my $filename_header (sort keys %exceptions)
{
  my @exceptions_in_file = @{$exceptions{$filename_header}};
  my $message = "";
  foreach my $i (@exceptions_in_file)
  {
    my ($cppname, $basename, @extra_namespace) = @{$i};
    if (@extra_namespace == 0)
    {
      $message .= "  Glib::Error::register_domain(${basename}_quark(), &" .
                  "${cppname}::throw_func);\n";
    }
  }
  print_with_guards($filename_header, $message) if $message;
}

# Exception classes in sub-namespaces are registered after the ones in the main
# namespace. If you ever change this order, check that it's ok with Glib::ThreadError
# and Glib::Threads::ThreadError. Both these classes wrap GThreadError, and
# Glib::ThreadError is deprecated (2012-02-27).

print "\n  // Call the wrap_init() functions in sub-namespaces:\n" if keys %extra_namespaces > 0;

foreach my $sub_namespace (sort keys %extra_namespaces)
{
  print "  ${sub_namespace}::wrap_init();\n";
}

print "\n";
print "  // Map gtypes to gtkmm wrapper-creation functions:\n";

foreach my $filename_header (sort keys %objects)
{
  next if($exclude_from_wrap_init{$filename_header});

  my @objects_in_file = @{$objects{$filename_header}};
  my $message = "";
  foreach my $i (@objects_in_file)
  {
    my ($cppname, $basename, @extra_namespace) = @{$i};
    my $qualified_cppname = join("::", (@extra_namespace, $cppname));
    $message .= "  Glib::wrap_register(${basename}_get_type(), &" .
                "${qualified_cppname}_Class::wrap_new);\n";
  }
  print_with_guards($filename_header, $message);
}

print "\n";
print "  // Register the gtkmm gtypes:\n";

foreach my $filename_header (sort keys %objects)
{
  next if($exclude_from_wrap_init{$filename_header});

  my @objects_in_file = @{$objects{$filename_header}};
  my $message = "";
  foreach my $i (@objects_in_file)
  {
    my ($cppname, $basename, @extra_namespace) = @{$i};
    my $qualified_cppname = join("::", (@extra_namespace, $cppname));
    $message .= "  g_type_ensure(${qualified_cppname}::get_type());\n"
  }
  print_with_guards($filename_header, $message);
}

print << "EOF";

} // wrap_init()

$namespace_whole_close
EOF

exit 0;
