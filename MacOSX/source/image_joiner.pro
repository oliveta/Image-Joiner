#-------------------------------------------------
#
# Project created by QtCreator 2010-08-14T12:33:15
#
#-------------------------------------------------

QT       += core gui

TARGET = image_joiner
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h
Win32 {
QMAKE_LFLAGS += -static-libgcc
}
FORMS    += widget.ui
RC_FILE = eqt.rc
RESOURCES +=
mac {
    ICON = joiner_ico.icns
    QMAKE_INFO_PLIST = Info_mac.plist
    TARGET = "Image Joiner"


}
