#-------------------------------------------------
#
# Project created by QtCreator 2011-06-04T09:18:57
#
#-------------------------------------------------

QT       += core gui

TARGET = "Image Joiner"
TEMPLATE = app

QMAKE_LFLAGS += -static-libgcc
SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h

FORMS    += widget.ui
RC_FILE = eqt.rc

RESOURCES +=
mac {
    ICON = joiner_ico.icns
    QMAKE_INFO_PLIST = Info_mac.plist
    TARGET = "Image Joiner"


}
