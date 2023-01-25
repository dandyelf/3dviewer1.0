#############################################################################
# Makefile for building: test24
# Generated by qmake (3.1) (Qt 6.2.4)
# Project:  test24.pro
# Template: app
# Command: /usr/lib/qt6/bin/qmake6 -o Makefile test24.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug
#############################################################################

MAKEFILE      = Makefile

EQ            = =

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DGIFIMAGE_NO_LIB -DQT_QML_DEBUG -DQT_OPENGLWIDGETS_LIB -DQT_OPENGL_LIB -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_CORE_LIB
CFLAGS        = -pipe -g -Wall -Wextra -D_REENTRANT -fPIC $(DEFINES)
CXXFLAGS      = -pipe -g -std=gnu++1z -Wall -Wextra -D_REENTRANT -fPIC $(DEFINES)
INCPATH       = -I. -Iqtgifimage/gifimage -Iqtgifimage/3rdParty/giflib -I/usr/include/x86_64-linux-gnu/qt6 -I/usr/include/x86_64-linux-gnu/qt6/QtOpenGLWidgets -I/usr/include/x86_64-linux-gnu/qt6/QtOpenGL -I/usr/include/x86_64-linux-gnu/qt6/QtWidgets -I/usr/include/x86_64-linux-gnu/qt6/QtGui -I/usr/include/x86_64-linux-gnu/qt6/QtCore -I. -I. -I/usr/lib/x86_64-linux-gnu/qt6/mkspecs/linux-g++
QMAKE         = /usr/lib/qt6/bin/qmake6
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = cp -f -R
QINSTALL      = /usr/lib/qt6/bin/qmake6 -install qinstall
QINSTALL_PROGRAM = /usr/lib/qt6/bin/qmake6 -install qinstall -exe
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
TAR           = tar -cf
COMPRESS      = gzip -9f
DISTNAME      = test241.0.0
DISTDIR = /home/beardles/Documents/school21/git/3dviewer1.0/.tmp/test241.0.0
LINK          = g++
LFLAGS        = -Wl,-rpath-link,/usr/lib/x86_64-linux-gnu
LIBS          = $(SUBLIBS) /usr/lib/x86_64-linux-gnu/libQt6OpenGLWidgets.so /usr/lib/x86_64-linux-gnu/libQt6OpenGL.so /usr/lib/x86_64-linux-gnu/libQt6Widgets.so /usr/lib/x86_64-linux-gnu/libQt6Gui.so /usr/lib/x86_64-linux-gnu/libGLX.so /usr/lib/x86_64-linux-gnu/libOpenGL.so /usr/lib/x86_64-linux-gnu/libQt6Core.so -lpthread -lGLX -lOpenGL   
AR            = ar cqs
RANLIB        = 
SED           = sed
STRIP         = strip

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = qtgifimage/3rdParty/giflib/dgif_lib.c \
		qtgifimage/3rdParty/giflib/egif_lib.c \
		qtgifimage/3rdParty/giflib/gif_err.c \
		qtgifimage/3rdParty/giflib/gif_hash.c \
		qtgifimage/3rdParty/giflib/gifalloc.c \
		qtgifimage/3rdParty/giflib/quantize.c \
		qtgifimage/gifimage/qgifimage.cpp \
		aff_transformation.c \
		main.cpp \
		s21_viewer.c \
		scene.cpp \
		viewer.cpp moc_scene.cpp \
		moc_viewer.cpp
OBJECTS       = dgif_lib.o \
		egif_lib.o \
		gif_err.o \
		gif_hash.o \
		gifalloc.o \
		quantize.o \
		qgifimage.o \
		aff_transformation.o \
		main.o \
		s21_viewer.o \
		scene.o \
		viewer.o \
		moc_scene.o \
		moc_viewer.o
DIST          = /usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/spec_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/unix.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/linux.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/sanitize.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/gcc-base.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/g++-base.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/g++-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/qconfig.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_core.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_core_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_dbus.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_designer.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_eglfs_kms_gbm_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_fb_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_gui.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_help.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_input_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_kms_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_linguist.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_network.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_network_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_opengl.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_openglwidgets.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_openglwidgets_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_sql.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_testlib.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_uiplugin.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_uitools.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_widgets.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_xml.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qt_functions.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qt_config.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/linux-g++/qmake.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/spec_post.prf \
		.qmake.stash \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/exclusive_builds.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/toolchain.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/default_pre.prf \
		qtgifimage/3rdParty/giflib.pri \
		qtgifimage/gifimage/qtgifimage.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/resolve_config.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/default_post.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qml_debug.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/warn_on.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qt.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/resources_functions.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/resources.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/moc.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/unix/opengl.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/uic.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/unix/thread.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qmake_use.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/file_copies.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/testcase_targets.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/exceptions.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/yacc.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/lex.prf \
		test24.pro qtgifimage/gifimage/qgifglobal.h \
		qtgifimage/gifimage/qgifimage.h \
		qtgifimage/gifimage/qgifimage_p.h \
		aff_transformation.h \
		s21_viewer.h \
		scene.h \
		viewer.h qtgifimage/3rdParty/giflib/dgif_lib.c \
		qtgifimage/3rdParty/giflib/egif_lib.c \
		qtgifimage/3rdParty/giflib/gif_err.c \
		qtgifimage/3rdParty/giflib/gif_hash.c \
		qtgifimage/3rdParty/giflib/gifalloc.c \
		qtgifimage/3rdParty/giflib/quantize.c \
		qtgifimage/gifimage/qgifimage.cpp \
		aff_transformation.c \
		main.cpp \
		s21_viewer.c \
		scene.cpp \
		viewer.cpp
QMAKE_TARGET  = test24
DESTDIR       = 
TARGET        = test24


first: all
####### Build rules

test24: ui_viewer.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: test24.pro /usr/lib/x86_64-linux-gnu/qt6/mkspecs/linux-g++/qmake.conf /usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/spec_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/unix.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/linux.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/sanitize.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/gcc-base.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/g++-base.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/g++-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/qconfig.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_core.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_core_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_dbus.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_designer.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_eglfs_kms_gbm_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_fb_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_gui.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_help.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_input_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_kms_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_linguist.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_network.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_network_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_opengl.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_openglwidgets.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_openglwidgets_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_sql.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_testlib.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_uiplugin.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_uitools.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_widgets.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_xml.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qt_functions.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qt_config.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/linux-g++/qmake.conf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/spec_post.prf \
		.qmake.stash \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/exclusive_builds.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/toolchain.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/default_pre.prf \
		qtgifimage/3rdParty/giflib.pri \
		qtgifimage/gifimage/qtgifimage.pri \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/resolve_config.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/default_post.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qml_debug.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/warn_on.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qt.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/resources_functions.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/resources.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/moc.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/unix/opengl.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/uic.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/unix/thread.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qmake_use.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/file_copies.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/testcase_targets.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/exceptions.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/yacc.prf \
		/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/lex.prf \
		test24.pro \
		/usr/lib/x86_64-linux-gnu/libQt6OpenGLWidgets.prl \
		/usr/lib/x86_64-linux-gnu/libQt6OpenGL.prl \
		/usr/lib/x86_64-linux-gnu/libQt6Widgets.prl \
		/usr/lib/x86_64-linux-gnu/libQt6Gui.prl \
		/usr/lib/x86_64-linux-gnu/libQt6Core.prl
	$(QMAKE) -o Makefile test24.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/spec_pre.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/unix.conf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/linux.conf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/sanitize.conf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/gcc-base.conf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/gcc-base-unix.conf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/g++-base.conf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/common/g++-unix.conf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/qconfig.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_concurrent.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_concurrent_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_core.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_core_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_dbus.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_dbus_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_designer.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_devicediscovery_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_eglfs_kms_gbm_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_fb_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_gui.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_gui_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_help.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_input_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_kms_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_linguist.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_network.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_network_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_opengl.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_opengl_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_openglwidgets.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_openglwidgets_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_printsupport.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_printsupport_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_sql.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_sql_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_testlib.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_testlib_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_uiplugin.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_uitools.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_widgets.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_widgets_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_xml.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/modules/qt_lib_xml_private.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qt_functions.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qt_config.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/linux-g++/qmake.conf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/spec_post.prf:
.qmake.stash:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/exclusive_builds.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/toolchain.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/default_pre.prf:
qtgifimage/3rdParty/giflib.pri:
qtgifimage/gifimage/qtgifimage.pri:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/resolve_config.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/default_post.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qml_debug.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/warn_on.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qt.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/resources_functions.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/resources.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/moc.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/unix/opengl.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/uic.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/unix/thread.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/qmake_use.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/file_copies.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/testcase_targets.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/exceptions.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/yacc.prf:
/usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/lex.prf:
test24.pro:
/usr/lib/x86_64-linux-gnu/libQt6OpenGLWidgets.prl:
/usr/lib/x86_64-linux-gnu/libQt6OpenGL.prl:
/usr/lib/x86_64-linux-gnu/libQt6Widgets.prl:
/usr/lib/x86_64-linux-gnu/libQt6Gui.prl:
/usr/lib/x86_64-linux-gnu/libQt6Core.prl:
qmake: FORCE
	@$(QMAKE) -o Makefile test24.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug

qmake_all: FORCE


all: Makefile test24

dist: distdir FORCE
	(cd `dirname $(DISTDIR)` && $(TAR) $(DISTNAME).tar $(DISTNAME) && $(COMPRESS) $(DISTNAME).tar) && $(MOVE) `dirname $(DISTDIR)`/$(DISTNAME).tar.gz . && $(DEL_FILE) -r $(DISTDIR)

distdir: FORCE
	@test -d $(DISTDIR) || mkdir -p $(DISTDIR)
	$(COPY_FILE) --parents $(DIST) $(DISTDIR)/
	$(COPY_FILE) --parents /usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/data/dummy.cpp $(DISTDIR)/
	$(COPY_FILE) --parents qtgifimage/gifimage/qgifglobal.h qtgifimage/gifimage/qgifimage.h qtgifimage/gifimage/qgifimage_p.h aff_transformation.h s21_viewer.h scene.h viewer.h $(DISTDIR)/
	$(COPY_FILE) --parents qtgifimage/3rdParty/giflib/dgif_lib.c qtgifimage/3rdParty/giflib/egif_lib.c qtgifimage/3rdParty/giflib/gif_err.c qtgifimage/3rdParty/giflib/gif_hash.c qtgifimage/3rdParty/giflib/gifalloc.c qtgifimage/3rdParty/giflib/quantize.c qtgifimage/gifimage/qgifimage.cpp aff_transformation.c main.cpp s21_viewer.c scene.cpp viewer.cpp $(DISTDIR)/
	$(COPY_FILE) --parents viewer.ui $(DISTDIR)/


clean: compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


distclean: clean 
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) .qmake.stash
	-$(DEL_FILE) Makefile


####### Sub-libraries

mocclean: compiler_moc_header_clean compiler_moc_objc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_objc_header_make_all compiler_moc_source_make_all

check: first

benchmark: first

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_moc_predefs_make_all: moc_predefs.h
compiler_moc_predefs_clean:
	-$(DEL_FILE) moc_predefs.h
moc_predefs.h: /usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/data/dummy.cpp
	g++ -pipe -g -std=gnu++1z -Wall -Wextra -dM -E -o moc_predefs.h /usr/lib/x86_64-linux-gnu/qt6/mkspecs/features/data/dummy.cpp

compiler_moc_header_make_all: moc_scene.cpp moc_viewer.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_scene.cpp moc_viewer.cpp
moc_scene.cpp: scene.h \
		moc_predefs.h \
		/usr/lib/qt6/libexec/moc
	/usr/lib/qt6/libexec/moc $(DEFINES) --include /home/beardles/Documents/school21/git/3dviewer1.0/moc_predefs.h -I/usr/lib/x86_64-linux-gnu/qt6/mkspecs/linux-g++ -I/home/beardles/Documents/school21/git/3dviewer1.0 -I/home/beardles/Documents/school21/git/3dviewer1.0/qtgifimage/gifimage -I/home/beardles/Documents/school21/git/3dviewer1.0/qtgifimage/3rdParty/giflib -I/usr/include/x86_64-linux-gnu/qt6 -I/usr/include/x86_64-linux-gnu/qt6/QtOpenGLWidgets -I/usr/include/x86_64-linux-gnu/qt6/QtOpenGL -I/usr/include/x86_64-linux-gnu/qt6/QtWidgets -I/usr/include/x86_64-linux-gnu/qt6/QtGui -I/usr/include/x86_64-linux-gnu/qt6/QtCore -I/usr/include/c++/11 -I/usr/include/x86_64-linux-gnu/c++/11 -I/usr/include/c++/11/backward -I/usr/lib/gcc/x86_64-linux-gnu/11/include -I/usr/local/include -I/usr/include/x86_64-linux-gnu -I/usr/include scene.h -o moc_scene.cpp

moc_viewer.cpp: viewer.h \
		qtgifimage/gifimage/qgifimage.h \
		qtgifimage/gifimage/qgifglobal.h \
		aff_transformation.h \
		s21_viewer.h \
		moc_predefs.h \
		/usr/lib/qt6/libexec/moc
	/usr/lib/qt6/libexec/moc $(DEFINES) --include /home/beardles/Documents/school21/git/3dviewer1.0/moc_predefs.h -I/usr/lib/x86_64-linux-gnu/qt6/mkspecs/linux-g++ -I/home/beardles/Documents/school21/git/3dviewer1.0 -I/home/beardles/Documents/school21/git/3dviewer1.0/qtgifimage/gifimage -I/home/beardles/Documents/school21/git/3dviewer1.0/qtgifimage/3rdParty/giflib -I/usr/include/x86_64-linux-gnu/qt6 -I/usr/include/x86_64-linux-gnu/qt6/QtOpenGLWidgets -I/usr/include/x86_64-linux-gnu/qt6/QtOpenGL -I/usr/include/x86_64-linux-gnu/qt6/QtWidgets -I/usr/include/x86_64-linux-gnu/qt6/QtGui -I/usr/include/x86_64-linux-gnu/qt6/QtCore -I/usr/include/c++/11 -I/usr/include/x86_64-linux-gnu/c++/11 -I/usr/include/c++/11/backward -I/usr/lib/gcc/x86_64-linux-gnu/11/include -I/usr/local/include -I/usr/include/x86_64-linux-gnu -I/usr/include viewer.h -o moc_viewer.cpp

compiler_moc_objc_header_make_all:
compiler_moc_objc_header_clean:
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_viewer.h
compiler_uic_clean:
	-$(DEL_FILE) ui_viewer.h
ui_viewer.h: viewer.ui \
		/usr/lib/qt6/libexec/uic \
		scene.h
	/usr/lib/qt6/libexec/uic viewer.ui -o ui_viewer.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_predefs_clean compiler_moc_header_clean compiler_uic_clean 

####### Compile

dgif_lib.o: qtgifimage/3rdParty/giflib/dgif_lib.c qtgifimage/3rdParty/giflib/gif_lib.h \
		qtgifimage/3rdParty/giflib/gif_lib_private.h \
		qtgifimage/3rdParty/giflib/gif_hash.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o dgif_lib.o qtgifimage/3rdParty/giflib/dgif_lib.c

egif_lib.o: qtgifimage/3rdParty/giflib/egif_lib.c qtgifimage/3rdParty/giflib/gif_lib.h \
		qtgifimage/3rdParty/giflib/gif_lib_private.h \
		qtgifimage/3rdParty/giflib/gif_hash.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o egif_lib.o qtgifimage/3rdParty/giflib/egif_lib.c

gif_err.o: qtgifimage/3rdParty/giflib/gif_err.c qtgifimage/3rdParty/giflib/gif_lib.h \
		qtgifimage/3rdParty/giflib/gif_lib_private.h \
		qtgifimage/3rdParty/giflib/gif_hash.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o gif_err.o qtgifimage/3rdParty/giflib/gif_err.c

gif_hash.o: qtgifimage/3rdParty/giflib/gif_hash.c qtgifimage/3rdParty/giflib/gif_lib.h \
		qtgifimage/3rdParty/giflib/gif_hash.h \
		qtgifimage/3rdParty/giflib/gif_lib_private.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o gif_hash.o qtgifimage/3rdParty/giflib/gif_hash.c

gifalloc.o: qtgifimage/3rdParty/giflib/gifalloc.c qtgifimage/3rdParty/giflib/gif_lib.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o gifalloc.o qtgifimage/3rdParty/giflib/gifalloc.c

quantize.o: qtgifimage/3rdParty/giflib/quantize.c qtgifimage/3rdParty/giflib/gif_lib.h \
		qtgifimage/3rdParty/giflib/gif_lib_private.h \
		qtgifimage/3rdParty/giflib/gif_hash.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o quantize.o qtgifimage/3rdParty/giflib/quantize.c

qgifimage.o: qtgifimage/gifimage/qgifimage.cpp qtgifimage/gifimage/qgifimage.h \
		qtgifimage/gifimage/qgifglobal.h \
		qtgifimage/gifimage/qgifimage_p.h \
		qtgifimage/3rdParty/giflib/gif_lib.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qgifimage.o qtgifimage/gifimage/qgifimage.cpp

aff_transformation.o: aff_transformation.c aff_transformation.h \
		s21_viewer.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o aff_transformation.o aff_transformation.c

main.o: main.cpp viewer.h \
		qtgifimage/gifimage/qgifimage.h \
		qtgifimage/gifimage/qgifglobal.h \
		aff_transformation.h \
		s21_viewer.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

s21_viewer.o: s21_viewer.c s21_viewer.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o s21_viewer.o s21_viewer.c

scene.o: scene.cpp scene.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o scene.o scene.cpp

viewer.o: viewer.cpp viewer.h \
		qtgifimage/gifimage/qgifimage.h \
		qtgifimage/gifimage/qgifglobal.h \
		aff_transformation.h \
		s21_viewer.h \
		ui_viewer.h \
		scene.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o viewer.o viewer.cpp

moc_scene.o: moc_scene.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_scene.o moc_scene.cpp

moc_viewer.o: moc_viewer.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_viewer.o moc_viewer.cpp

####### Install

install_target: first FORCE
	@test -d $(INSTALL_ROOT)/opt/test24/bin || mkdir -p $(INSTALL_ROOT)/opt/test24/bin
	$(QINSTALL_PROGRAM) $(QMAKE_TARGET) $(INSTALL_ROOT)/opt/test24/bin/$(QMAKE_TARGET)

uninstall_target: FORCE
	-$(DEL_FILE) $(INSTALL_ROOT)/opt/test24/bin/$(QMAKE_TARGET)
	-$(DEL_DIR) $(INSTALL_ROOT)/opt/test24/bin/ 


install: install_target  FORCE

uninstall: uninstall_target  FORCE

FORCE:

