# Makefile.in generated by automake 1.16.5 from Makefile.am.
# examples/Makefile.  Generated from Makefile.in by configure.

# Copyright (C) 1994-2021 Free Software Foundation, Inc.

# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.




am__is_gnu_make = { \
  if test -z '$(MAKELEVEL)'; then \
    false; \
  elif test -n '$(MAKE_HOST)'; then \
    true; \
  elif test -n '$(MAKE_VERSION)' && test -n '$(CURDIR)'; then \
    true; \
  else \
    false; \
  fi; \
}
am__make_running_with_option = \
  case $${target_option-} in \
      ?) ;; \
      *) echo "am__make_running_with_option: internal error: invalid" \
              "target option '$${target_option-}' specified" >&2; \
         exit 1;; \
  esac; \
  has_opt=no; \
  sane_makeflags=$$MAKEFLAGS; \
  if $(am__is_gnu_make); then \
    sane_makeflags=$$MFLAGS; \
  else \
    case $$MAKEFLAGS in \
      *\\[\ \	]*) \
        bs=\\; \
        sane_makeflags=`printf '%s\n' "$$MAKEFLAGS" \
          | sed "s/$$bs$$bs[$$bs $$bs	]*//g"`;; \
    esac; \
  fi; \
  skip_next=no; \
  strip_trailopt () \
  { \
    flg=`printf '%s\n' "$$flg" | sed "s/$$1.*$$//"`; \
  }; \
  for flg in $$sane_makeflags; do \
    test $$skip_next = yes && { skip_next=no; continue; }; \
    case $$flg in \
      *=*|--*) continue;; \
        -*I) strip_trailopt 'I'; skip_next=yes;; \
      -*I?*) strip_trailopt 'I';; \
        -*O) strip_trailopt 'O'; skip_next=yes;; \
      -*O?*) strip_trailopt 'O';; \
        -*l) strip_trailopt 'l'; skip_next=yes;; \
      -*l?*) strip_trailopt 'l';; \
      -[dEDm]) skip_next=yes;; \
      -[JT]) skip_next=yes;; \
    esac; \
    case $$flg in \
      *$$target_option*) has_opt=yes; break;; \
    esac; \
  done; \
  test $$has_opt = yes
am__make_dryrun = (target_option=n; $(am__make_running_with_option))
am__make_keepgoing = (target_option=k; $(am__make_running_with_option))
pkgdatadir = $(datadir)/osm-gps-map
pkgincludedir = $(includedir)/osm-gps-map
pkglibdir = $(libdir)/osm-gps-map
pkglibexecdir = $(libexecdir)/osm-gps-map
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_triplet = x86_64-pc-linux-gnu
host_triplet = x86_64-pc-linux-gnu
noinst_PROGRAMS = mapviewer$(EXEEXT) polygon$(EXEEXT) \
	editable_track$(EXEEXT)
subdir = examples
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/m4/ax_is_release.m4 \
	$(top_srcdir)/m4/ax_require_defined.m4 \
	$(top_srcdir)/m4/gtk-doc.m4 $(top_srcdir)/m4/introspection.m4 \
	$(top_srcdir)/m4/libtool.m4 $(top_srcdir)/m4/ltoptions.m4 \
	$(top_srcdir)/m4/ltsugar.m4 $(top_srcdir)/m4/ltversion.m4 \
	$(top_srcdir)/m4/lt~obsolete.m4 $(top_srcdir)/m4/pkg.m4 \
	$(top_srcdir)/configure.ac
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
DIST_COMMON = $(srcdir)/Makefile.am $(am__DIST_COMMON)
mkinstalldirs = $(install_sh) -d
CONFIG_HEADER = $(top_builddir)/config.h
CONFIG_CLEAN_FILES =
CONFIG_CLEAN_VPATH_FILES =
PROGRAMS = $(noinst_PROGRAMS)
am_editable_track_OBJECTS = editable_track-editable_track.$(OBJEXT)
editable_track_OBJECTS = $(am_editable_track_OBJECTS)
am__DEPENDENCIES_1 =
am__DEPENDENCIES_2 = $(am__DEPENDENCIES_1) $(am__DEPENDENCIES_1) \
	$(am__DEPENDENCIES_1) $(am__DEPENDENCIES_1)
editable_track_DEPENDENCIES = $(am__DEPENDENCIES_2) \
	$(am__DEPENDENCIES_1) $(top_builddir)/src/libosmgpsmap-1.0.la
AM_V_lt = $(am__v_lt_$(V))
am__v_lt_ = $(am__v_lt_$(AM_DEFAULT_VERBOSITY))
am__v_lt_0 = --silent
am__v_lt_1 = 
editable_track_LINK = $(LIBTOOL) $(AM_V_lt) --tag=CC \
	$(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=link $(CCLD) \
	$(editable_track_CFLAGS) $(CFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o \
	$@
am_mapviewer_OBJECTS = mapviewer-mapviewer.$(OBJEXT)
mapviewer_OBJECTS = $(am_mapviewer_OBJECTS)
mapviewer_DEPENDENCIES = $(am__DEPENDENCIES_2) $(am__DEPENDENCIES_1) \
	$(top_builddir)/src/libosmgpsmap-1.0.la
mapviewer_LINK = $(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=link $(CCLD) $(mapviewer_CFLAGS) \
	$(CFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
am_polygon_OBJECTS = polygon-polygon.$(OBJEXT)
polygon_OBJECTS = $(am_polygon_OBJECTS)
polygon_DEPENDENCIES = $(am__DEPENDENCIES_2) $(am__DEPENDENCIES_1) \
	$(top_builddir)/src/libosmgpsmap-1.0.la
polygon_LINK = $(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=link $(CCLD) $(polygon_CFLAGS) \
	$(CFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_V_P = $(am__v_P_$(V))
am__v_P_ = $(am__v_P_$(AM_DEFAULT_VERBOSITY))
am__v_P_0 = false
am__v_P_1 = :
AM_V_GEN = $(am__v_GEN_$(V))
am__v_GEN_ = $(am__v_GEN_$(AM_DEFAULT_VERBOSITY))
am__v_GEN_0 = @echo "  GEN     " $@;
am__v_GEN_1 = 
AM_V_at = $(am__v_at_$(V))
am__v_at_ = $(am__v_at_$(AM_DEFAULT_VERBOSITY))
am__v_at_0 = @
am__v_at_1 = 
DEFAULT_INCLUDES = -I. -I$(top_builddir)
depcomp = $(SHELL) $(top_srcdir)/depcomp
am__maybe_remake_depfiles = depfiles
am__depfiles_remade = ./$(DEPDIR)/editable_track-editable_track.Po \
	./$(DEPDIR)/mapviewer-mapviewer.Po \
	./$(DEPDIR)/polygon-polygon.Po
am__mv = mv -f
COMPILE = $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) \
	$(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
LTCOMPILE = $(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=compile $(CC) $(DEFS) \
	$(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) \
	$(AM_CFLAGS) $(CFLAGS)
AM_V_CC = $(am__v_CC_$(V))
am__v_CC_ = $(am__v_CC_$(AM_DEFAULT_VERBOSITY))
am__v_CC_0 = @echo "  CC      " $@;
am__v_CC_1 = 
CCLD = $(CC)
LINK = $(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=link $(CCLD) $(AM_CFLAGS) $(CFLAGS) \
	$(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_V_CCLD = $(am__v_CCLD_$(V))
am__v_CCLD_ = $(am__v_CCLD_$(AM_DEFAULT_VERBOSITY))
am__v_CCLD_0 = @echo "  CCLD    " $@;
am__v_CCLD_1 = 
SOURCES = $(editable_track_SOURCES) $(mapviewer_SOURCES) \
	$(polygon_SOURCES)
DIST_SOURCES = $(editable_track_SOURCES) $(mapviewer_SOURCES) \
	$(polygon_SOURCES)
am__can_run_installinfo = \
  case $$AM_UPDATE_INFO_DIR in \
    n|no|NO) false;; \
    *) (install-info --version) >/dev/null 2>&1;; \
  esac
am__tagged_files = $(HEADERS) $(SOURCES) $(TAGS_FILES) $(LISP)
# Read a list of newline-separated strings from the standard input,
# and print each of them once, without duplicates.  Input order is
# *not* preserved.
am__uniquify_input = $(AWK) '\
  BEGIN { nonempty = 0; } \
  { items[$$0] = 1; nonempty = 1; } \
  END { if (nonempty) { for (i in items) print i; }; } \
'
# Make sure the list of sources is unique.  This is necessary because,
# e.g., the same source file might be shared among _SOURCES variables
# for different programs/libraries.
am__define_uniq_tagged_files = \
  list='$(am__tagged_files)'; \
  unique=`for i in $$list; do \
    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
  done | $(am__uniquify_input)`
am__DIST_COMMON = $(srcdir)/Makefile.in $(top_srcdir)/depcomp README
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
ACLOCAL = ${SHELL} '/home/chasingcar/dev/osm-gps-map/missing' aclocal-1.16
AMTAR = $${TAR-tar}
AM_DEFAULT_VERBOSITY = 0
AR = ar
AS = as
AUTOCONF = ${SHELL} '/home/chasingcar/dev/osm-gps-map/missing' autoconf
AUTOHEADER = ${SHELL} '/home/chasingcar/dev/osm-gps-map/missing' autoheader
AUTOMAKE = ${SHELL} '/home/chasingcar/dev/osm-gps-map/missing' automake-1.16
AWK = mawk
CAIRO_CFLAGS = -I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/uuid -I/usr/include/freetype2 -I/usr/include/libpng16
CAIRO_LIBS = -lcairo
CC = gcc
CCDEPMODE = depmode=gcc3
CFLAGS = -g -O2
CPPFLAGS = 
CSCOPE = cscope
CTAGS = ctags
CYGPATH_W = echo
DEFS = -DHAVE_CONFIG_H
DEPDIR = .deps
DLLTOOL = dlltool
DSYMUTIL = 
DUMPBIN = 
ECHO_C = 
ECHO_N = -n
ECHO_T = 
EGREP = /usr/bin/grep -E
ETAGS = etags
EXEEXT = 
FGREP = /usr/bin/grep -F
GLIB_CFLAGS = -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
GLIB_LIBS = -lglib-2.0
GREP = /usr/bin/grep
GTHREAD_CFLAGS = -pthread -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
GTHREAD_LIBS = -lgthread-2.0 -pthread -lglib-2.0
GTKDOC_CHECK = gtkdoc-check.test
GTKDOC_CHECK_PATH = /usr/bin/gtkdoc-check
GTKDOC_DEPS_CFLAGS = -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
GTKDOC_DEPS_LIBS = -lgobject-2.0 -lglib-2.0
GTKDOC_MKPDF = /usr/bin/gtkdoc-mkpdf
GTKDOC_REBASE = /usr/bin/gtkdoc-rebase
GTK_CFLAGS = -pthread -I/usr/include/gtk-3.0 -I/usr/include/at-spi2-atk/2.0 -I/usr/include/at-spi-2.0 -I/usr/include/dbus-1.0 -I/usr/lib/x86_64-linux-gnu/dbus-1.0/include -I/usr/include/gtk-3.0 -I/usr/include/gio-unix-2.0 -I/usr/include/cairo -I/usr/include/pango-1.0 -I/usr/include/harfbuzz -I/usr/include/pango-1.0 -I/usr/include/fribidi -I/usr/include/harfbuzz -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/uuid -I/usr/include/freetype2 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libpng16 -I/usr/include/x86_64-linux-gnu -I/usr/include/libmount -I/usr/include/blkid -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
GTK_LIBS = -lgtk-3 -lgdk-3 -lpangocairo-1.0 -lpango-1.0 -lharfbuzz -latk-1.0 -lcairo-gobject -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lgobject-2.0 -lglib-2.0
HTML_DIR = ${datadir}/gtk-doc/html
INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
INTROSPECTION_CFLAGS = -I/usr/include/gobject-introspection-1.0 -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
INTROSPECTION_COMPILER = /usr/bin/g-ir-compiler
INTROSPECTION_GENERATE = /usr/bin/g-ir-generate
INTROSPECTION_GIRDIR = /usr/local/share/gir-1.0
INTROSPECTION_LIBS = -lgirepository-1.0 -lgobject-2.0 -lglib-2.0
INTROSPECTION_MAKEFILE = /usr/share/gobject-introspection-1.0/Makefile.introspection
INTROSPECTION_SCANNER = /usr/bin/g-ir-scanner
INTROSPECTION_TYPELIBDIR = /usr/local/lib/girepository-1.0
LD = /usr/bin/ld -m elf_x86_64
LDFLAGS = 
LIBOBJS = 
LIBS = 
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIPO = 
LN_S = ln -s
LTLIBOBJS = 
LT_SYS_LIBRARY_PATH = 
LT_VERSION_INFO = 2:1:1
MAKEINFO = ${SHELL} '/home/chasingcar/dev/osm-gps-map/missing' makeinfo
MANIFEST_TOOL = :
MKDIR_P = /usr/bin/mkdir -p
NM = /usr/bin/nm -B
NMEDIT = 
OBJDUMP = objdump
OBJEXT = o
OTOOL = 
OTOOL64 = 
PACKAGE = osm-gps-map
PACKAGE_BUGREPORT = http://github.com/nzjrs/osm-gps-map/issues
PACKAGE_NAME = osm-gps-map
PACKAGE_STRING = osm-gps-map 1.2.1
PACKAGE_TARNAME = osm-gps-map
PACKAGE_URL = 
PACKAGE_VERSION = 1.2.1
PATH_SEPARATOR = :
PKG_CONFIG = /usr/bin/pkg-config
PKG_CONFIG_LIBDIR = 
PKG_CONFIG_PATH = 
RANLIB = ranlib
SED = /usr/bin/sed
SET_MAKE = 
SHELL = /bin/bash
SOUP24_CFLAGS = -pthread -I/usr/include/libsoup-2.4 -I/usr/include/libxml2 -I/usr/include/libmount -I/usr/include/blkid -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
SOUP24_LIBS = -lsoup-2.4 -Wl,--export-dynamic -lgmodule-2.0 -pthread -lgio-2.0 -lgobject-2.0 -lglib-2.0
STRIP = strip
VERSION = 1.2.1
_GI_EXP_DATADIR = /usr/local/share
_GI_EXP_LIBDIR = /usr/local/lib
abs_builddir = /home/chasingcar/dev/osm-gps-map/examples
abs_srcdir = /home/chasingcar/dev/osm-gps-map/examples
abs_top_builddir = /home/chasingcar/dev/osm-gps-map
abs_top_srcdir = /home/chasingcar/dev/osm-gps-map
ac_ct_AR = ar
ac_ct_CC = gcc
ac_ct_DUMPBIN = 
am__include = include
am__leading_dot = .
am__quote = 
am__tar = $${TAR-tar} chof - "$$tardir"
am__untar = $${TAR-tar} xf -
bindir = ${exec_prefix}/bin
build = x86_64-pc-linux-gnu
build_alias = 
build_cpu = x86_64
build_os = linux-gnu
build_vendor = pc
builddir = .
datadir = ${datarootdir}
datarootdir = ${prefix}/share
docdir = ${datarootdir}/doc/${PACKAGE_TARNAME}
dvidir = ${docdir}
exec_prefix = ${prefix}
host = x86_64-pc-linux-gnu
host_alias = 
host_cpu = x86_64
host_os = linux-gnu
host_vendor = pc
htmldir = ${docdir}
includedir = ${prefix}/include
infodir = ${datarootdir}/info
install_sh = ${SHELL} /home/chasingcar/dev/osm-gps-map/install-sh
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
localedir = ${datarootdir}/locale
localstatedir = ${prefix}/var
mandir = ${datarootdir}/man
mkdir_p = $(MKDIR_P)
oldincludedir = /usr/include
pdfdir = ${docdir}
prefix = /usr/local
program_transform_name = s,x,x,
psdir = ${docdir}
runstatedir = ${localstatedir}/run
sbindir = ${exec_prefix}/sbin
sharedstatedir = ${prefix}/com
srcdir = .
sysconfdir = ${prefix}/etc
target_alias = 
top_build_prefix = ../
top_builddir = ..
top_srcdir = ..
OSMGPSMAP_CFLAGS = \
    $(GLIB_CFLAGS)          \
    $(GTK_CFLAGS)           \
    $(CAIRO_CFLAGS)         \
    $(SOUP24_CFLAGS)

OSMGPSMAP_LIBS = \
    $(GLIB_LIBS)            \
    $(GTK_LIBS)             \
    $(CAIRO_LIBS)           \
    $(SOUP24_LIBS)

mapviewer_SOURCES = \
    mapviewer.c

mapviewer_CFLAGS = \
    -I$(top_srcdir)/src     \
    $(WARN_CFLAGS)          \
    $(DISABLE_DEPRECATED)   \
    $(OSMGPSMAP_CFLAGS)     \
    $(GTHREAD_CFLAGS)

mapviewer_LDADD = \
    $(OSMGPSMAP_LIBS)       \
    $(GTHREAD_LIBS)         \
    $(top_builddir)/src/libosmgpsmap-1.0.la

polygon_SOURCES = \
    polygon.c

polygon_CFLAGS = \
    -I$(top_srcdir)/src     \
    $(WARN_CFLAGS)          \
    $(DISABLE_DEPRECATED)   \
    $(OSMGPSMAP_CFLAGS)     \
    $(GTHREAD_CFLAGS)

polygon_LDADD = \
    $(OSMGPSMAP_LIBS)       \
    $(GTHREAD_LIBS)         \
    $(top_builddir)/src/libosmgpsmap-1.0.la

editable_track_SOURCES = \
    editable_track.c

editable_track_CFLAGS = \
    -I$(top_srcdir)/src     \
    $(WARN_CFLAGS)          \
    $(DISABLE_DEPRECATED)   \
    $(OSMGPSMAP_CFLAGS)     \
    $(GTHREAD_CFLAGS)

editable_track_LDADD = \
    $(OSMGPSMAP_LIBS)       \
    $(GTHREAD_LIBS)         \
    $(top_builddir)/src/libosmgpsmap-1.0.la

EXTRA_DIST = poi.png mapviewer.ui mapviewer.js README
all: all-am

.SUFFIXES:
.SUFFIXES: .c .lo .o .obj
$(srcdir)/Makefile.in:  $(srcdir)/Makefile.am  $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      ( cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh ) \
	        && { if test -f $@; then exit 0; else break; fi; }; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --foreign examples/Makefile'; \
	$(am__cd) $(top_srcdir) && \
	  $(AUTOMAKE) --foreign examples/Makefile
Makefile: $(srcdir)/Makefile.in $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__maybe_remake_depfiles)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__maybe_remake_depfiles);; \
	esac;

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh

$(top_srcdir)/configure:  $(am__configure_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(ACLOCAL_M4):  $(am__aclocal_m4_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(am__aclocal_m4_deps):

clean-noinstPROGRAMS:
	@list='$(noinst_PROGRAMS)'; test -n "$$list" || exit 0; \
	echo " rm -f" $$list; \
	rm -f $$list || exit $$?; \
	test -n "$(EXEEXT)" || exit 0; \
	list=`for p in $$list; do echo "$$p"; done | sed 's/$(EXEEXT)$$//'`; \
	echo " rm -f" $$list; \
	rm -f $$list

editable_track$(EXEEXT): $(editable_track_OBJECTS) $(editable_track_DEPENDENCIES) $(EXTRA_editable_track_DEPENDENCIES) 
	@rm -f editable_track$(EXEEXT)
	$(AM_V_CCLD)$(editable_track_LINK) $(editable_track_OBJECTS) $(editable_track_LDADD) $(LIBS)

mapviewer$(EXEEXT): $(mapviewer_OBJECTS) $(mapviewer_DEPENDENCIES) $(EXTRA_mapviewer_DEPENDENCIES) 
	@rm -f mapviewer$(EXEEXT)
	$(AM_V_CCLD)$(mapviewer_LINK) $(mapviewer_OBJECTS) $(mapviewer_LDADD) $(LIBS)

polygon$(EXEEXT): $(polygon_OBJECTS) $(polygon_DEPENDENCIES) $(EXTRA_polygon_DEPENDENCIES) 
	@rm -f polygon$(EXEEXT)
	$(AM_V_CCLD)$(polygon_LINK) $(polygon_OBJECTS) $(polygon_LDADD) $(LIBS)

mostlyclean-compile:
	-rm -f *.$(OBJEXT)

distclean-compile:
	-rm -f *.tab.c

include ./$(DEPDIR)/editable_track-editable_track.Po # am--include-marker
include ./$(DEPDIR)/mapviewer-mapviewer.Po # am--include-marker
include ./$(DEPDIR)/polygon-polygon.Po # am--include-marker

$(am__depfiles_remade):
	@$(MKDIR_P) $(@D)
	@echo '# dummy' >$@-t && $(am__mv) $@-t $@

am--depfiles: $(am__depfiles_remade)

.c.o:
	$(AM_V_CC)depbase=`echo $@ | sed 's|[^/]*$$|$(DEPDIR)/&|;s|\.o$$||'`;\
	$(COMPILE) -MT $@ -MD -MP -MF $$depbase.Tpo -c -o $@ $< &&\
	$(am__mv) $$depbase.Tpo $$depbase.Po
#	$(AM_V_CC)source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(COMPILE) -c -o $@ $<

.c.obj:
	$(AM_V_CC)depbase=`echo $@ | sed 's|[^/]*$$|$(DEPDIR)/&|;s|\.obj$$||'`;\
	$(COMPILE) -MT $@ -MD -MP -MF $$depbase.Tpo -c -o $@ `$(CYGPATH_W) '$<'` &&\
	$(am__mv) $$depbase.Tpo $$depbase.Po
#	$(AM_V_CC)source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(COMPILE) -c -o $@ `$(CYGPATH_W) '$<'`

.c.lo:
	$(AM_V_CC)depbase=`echo $@ | sed 's|[^/]*$$|$(DEPDIR)/&|;s|\.lo$$||'`;\
	$(LTCOMPILE) -MT $@ -MD -MP -MF $$depbase.Tpo -c -o $@ $< &&\
	$(am__mv) $$depbase.Tpo $$depbase.Plo
#	$(AM_V_CC)source='$<' object='$@' libtool=yes \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(LTCOMPILE) -c -o $@ $<

editable_track-editable_track.o: editable_track.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(editable_track_CFLAGS) $(CFLAGS) -MT editable_track-editable_track.o -MD -MP -MF $(DEPDIR)/editable_track-editable_track.Tpo -c -o editable_track-editable_track.o `test -f 'editable_track.c' || echo '$(srcdir)/'`editable_track.c
	$(AM_V_at)$(am__mv) $(DEPDIR)/editable_track-editable_track.Tpo $(DEPDIR)/editable_track-editable_track.Po
#	$(AM_V_CC)source='editable_track.c' object='editable_track-editable_track.o' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(editable_track_CFLAGS) $(CFLAGS) -c -o editable_track-editable_track.o `test -f 'editable_track.c' || echo '$(srcdir)/'`editable_track.c

editable_track-editable_track.obj: editable_track.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(editable_track_CFLAGS) $(CFLAGS) -MT editable_track-editable_track.obj -MD -MP -MF $(DEPDIR)/editable_track-editable_track.Tpo -c -o editable_track-editable_track.obj `if test -f 'editable_track.c'; then $(CYGPATH_W) 'editable_track.c'; else $(CYGPATH_W) '$(srcdir)/editable_track.c'; fi`
	$(AM_V_at)$(am__mv) $(DEPDIR)/editable_track-editable_track.Tpo $(DEPDIR)/editable_track-editable_track.Po
#	$(AM_V_CC)source='editable_track.c' object='editable_track-editable_track.obj' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(editable_track_CFLAGS) $(CFLAGS) -c -o editable_track-editable_track.obj `if test -f 'editable_track.c'; then $(CYGPATH_W) 'editable_track.c'; else $(CYGPATH_W) '$(srcdir)/editable_track.c'; fi`

mapviewer-mapviewer.o: mapviewer.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(mapviewer_CFLAGS) $(CFLAGS) -MT mapviewer-mapviewer.o -MD -MP -MF $(DEPDIR)/mapviewer-mapviewer.Tpo -c -o mapviewer-mapviewer.o `test -f 'mapviewer.c' || echo '$(srcdir)/'`mapviewer.c
	$(AM_V_at)$(am__mv) $(DEPDIR)/mapviewer-mapviewer.Tpo $(DEPDIR)/mapviewer-mapviewer.Po
#	$(AM_V_CC)source='mapviewer.c' object='mapviewer-mapviewer.o' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(mapviewer_CFLAGS) $(CFLAGS) -c -o mapviewer-mapviewer.o `test -f 'mapviewer.c' || echo '$(srcdir)/'`mapviewer.c

mapviewer-mapviewer.obj: mapviewer.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(mapviewer_CFLAGS) $(CFLAGS) -MT mapviewer-mapviewer.obj -MD -MP -MF $(DEPDIR)/mapviewer-mapviewer.Tpo -c -o mapviewer-mapviewer.obj `if test -f 'mapviewer.c'; then $(CYGPATH_W) 'mapviewer.c'; else $(CYGPATH_W) '$(srcdir)/mapviewer.c'; fi`
	$(AM_V_at)$(am__mv) $(DEPDIR)/mapviewer-mapviewer.Tpo $(DEPDIR)/mapviewer-mapviewer.Po
#	$(AM_V_CC)source='mapviewer.c' object='mapviewer-mapviewer.obj' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(mapviewer_CFLAGS) $(CFLAGS) -c -o mapviewer-mapviewer.obj `if test -f 'mapviewer.c'; then $(CYGPATH_W) 'mapviewer.c'; else $(CYGPATH_W) '$(srcdir)/mapviewer.c'; fi`

polygon-polygon.o: polygon.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(polygon_CFLAGS) $(CFLAGS) -MT polygon-polygon.o -MD -MP -MF $(DEPDIR)/polygon-polygon.Tpo -c -o polygon-polygon.o `test -f 'polygon.c' || echo '$(srcdir)/'`polygon.c
	$(AM_V_at)$(am__mv) $(DEPDIR)/polygon-polygon.Tpo $(DEPDIR)/polygon-polygon.Po
#	$(AM_V_CC)source='polygon.c' object='polygon-polygon.o' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(polygon_CFLAGS) $(CFLAGS) -c -o polygon-polygon.o `test -f 'polygon.c' || echo '$(srcdir)/'`polygon.c

polygon-polygon.obj: polygon.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(polygon_CFLAGS) $(CFLAGS) -MT polygon-polygon.obj -MD -MP -MF $(DEPDIR)/polygon-polygon.Tpo -c -o polygon-polygon.obj `if test -f 'polygon.c'; then $(CYGPATH_W) 'polygon.c'; else $(CYGPATH_W) '$(srcdir)/polygon.c'; fi`
	$(AM_V_at)$(am__mv) $(DEPDIR)/polygon-polygon.Tpo $(DEPDIR)/polygon-polygon.Po
#	$(AM_V_CC)source='polygon.c' object='polygon-polygon.obj' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(polygon_CFLAGS) $(CFLAGS) -c -o polygon-polygon.obj `if test -f 'polygon.c'; then $(CYGPATH_W) 'polygon.c'; else $(CYGPATH_W) '$(srcdir)/polygon.c'; fi`

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs

ID: $(am__tagged_files)
	$(am__define_uniq_tagged_files); mkid -fID $$unique
tags: tags-am
TAGS: tags

tags-am: $(TAGS_DEPENDENCIES) $(am__tagged_files)
	set x; \
	here=`pwd`; \
	$(am__define_uniq_tagged_files); \
	shift; \
	if test -z "$(ETAGS_ARGS)$$*$$unique"; then :; else \
	  test -n "$$unique" || unique=$$empty_fix; \
	  if test $$# -gt 0; then \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      "$$@" $$unique; \
	  else \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      $$unique; \
	  fi; \
	fi
ctags: ctags-am

CTAGS: ctags
ctags-am: $(TAGS_DEPENDENCIES) $(am__tagged_files)
	$(am__define_uniq_tagged_files); \
	test -z "$(CTAGS_ARGS)$$unique" \
	  || $(CTAGS) $(CTAGSFLAGS) $(AM_CTAGSFLAGS) $(CTAGS_ARGS) \
	     $$unique

GTAGS:
	here=`$(am__cd) $(top_builddir) && pwd` \
	  && $(am__cd) $(top_srcdir) \
	  && gtags -i $(GTAGS_ARGS) "$$here"
cscopelist: cscopelist-am

cscopelist-am: $(am__tagged_files)
	list='$(am__tagged_files)'; \
	case "$(srcdir)" in \
	  [\\/]* | ?:[\\/]*) sdir="$(srcdir)" ;; \
	  *) sdir=$(subdir)/$(srcdir) ;; \
	esac; \
	for i in $$list; do \
	  if test -f "$$i"; then \
	    echo "$(subdir)/$$i"; \
	  else \
	    echo "$$sdir/$$i"; \
	  fi; \
	done >> $(top_builddir)/cscope.files

distclean-tags:
	-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH tags
distdir: $(BUILT_SOURCES)
	$(MAKE) $(AM_MAKEFLAGS) distdir-am

distdir-am: $(DISTFILES)
	@srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	list='$(DISTFILES)'; \
	  dist_files=`for file in $$list; do echo $$file; done | \
	  sed -e "s|^$$srcdirstrip/||;t" \
	      -e "s|^$$topsrcdirstrip/|$(top_builddir)/|;t"`; \
	case $$dist_files in \
	  */*) $(MKDIR_P) `echo "$$dist_files" | \
			   sed '/\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \
			   sort -u` ;; \
	esac; \
	for file in $$dist_files; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    dir=`echo "/$$file" | sed -e 's,/[^/]*$$,,'`; \
	    if test -d "$(distdir)/$$file"; then \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -fpR $(srcdir)/$$file "$(distdir)$$dir" || exit 1; \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    cp -fpR $$d/$$file "$(distdir)$$dir" || exit 1; \
	  else \
	    test -f "$(distdir)/$$file" \
	    || cp -p $$d/$$file "$(distdir)/$$file" \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
check: check-am
all-am: Makefile $(PROGRAMS)
installdirs:
install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	if test -z '$(STRIP)'; then \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	      install; \
	else \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	    "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'" install; \
	fi
mostlyclean-generic:

clean-generic:

distclean-generic:
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)
	-test . = "$(srcdir)" || test -z "$(CONFIG_CLEAN_VPATH_FILES)" || rm -f $(CONFIG_CLEAN_VPATH_FILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
clean: clean-am

clean-am: clean-generic clean-libtool clean-noinstPROGRAMS \
	mostlyclean-am

distclean: distclean-am
		-rm -f ./$(DEPDIR)/editable_track-editable_track.Po
	-rm -f ./$(DEPDIR)/mapviewer-mapviewer.Po
	-rm -f ./$(DEPDIR)/polygon-polygon.Po
	-rm -f Makefile
distclean-am: clean-am distclean-compile distclean-generic \
	distclean-tags

dvi: dvi-am

dvi-am:

html: html-am

html-am:

info: info-am

info-am:

install-data-am:

install-dvi: install-dvi-am

install-dvi-am:

install-exec-am:

install-html: install-html-am

install-html-am:

install-info: install-info-am

install-info-am:

install-man:

install-pdf: install-pdf-am

install-pdf-am:

install-ps: install-ps-am

install-ps-am:

installcheck-am:

maintainer-clean: maintainer-clean-am
		-rm -f ./$(DEPDIR)/editable_track-editable_track.Po
	-rm -f ./$(DEPDIR)/mapviewer-mapviewer.Po
	-rm -f ./$(DEPDIR)/polygon-polygon.Po
	-rm -f Makefile
maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-compile mostlyclean-generic \
	mostlyclean-libtool

pdf: pdf-am

pdf-am:

ps: ps-am

ps-am:

uninstall-am:

.MAKE: install-am install-strip

.PHONY: CTAGS GTAGS TAGS all all-am am--depfiles check check-am clean \
	clean-generic clean-libtool clean-noinstPROGRAMS cscopelist-am \
	ctags ctags-am distclean distclean-compile distclean-generic \
	distclean-libtool distclean-tags distdir dvi dvi-am html \
	html-am info info-am install install-am install-data \
	install-data-am install-dvi install-dvi-am install-exec \
	install-exec-am install-html install-html-am install-info \
	install-info-am install-man install-pdf install-pdf-am \
	install-ps install-ps-am install-strip installcheck \
	installcheck-am installdirs maintainer-clean \
	maintainer-clean-generic mostlyclean mostlyclean-compile \
	mostlyclean-generic mostlyclean-libtool pdf pdf-am ps ps-am \
	tags tags-am uninstall uninstall-am

.PRECIOUS: Makefile


# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
