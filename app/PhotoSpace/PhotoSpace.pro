#-------------------------------------------------
#
# Project created by QtCreator 2018-12-02T15:42:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PhotoSpace
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    gui/widgets/base_list_widget.cpp \
    gui/widgets/destination_list_widget.cpp \
    gui/widgets/source_list_widget.cpp \
        main.cpp \
        gui/mainwindow.cpp \
    models/file_system_driver.cpp \
    models/repository/repository.cpp \
    models/settings_manager/settings_manager.cpp

HEADERS += \
        gui/mainwindow.h \
    gui/widgets/base_list_widget.h \
    gui/widgets/destination_list_widget.h \
    gui/widgets/source_list_widget.h \
    models/file_system_driver.h \
    models/repository/repository.h \
    models/settings_manager/settings_manager.h

FORMS += \
        gui/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
