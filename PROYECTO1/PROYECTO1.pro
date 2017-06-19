#-------------------------------------------------
#
# Project created by QtCreator 2017-06-09T16:54:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PROYECTO1
TEMPLATE = app


SOURCES += main.cpp\
        proyecto1.cpp \
    form.cpp \
    lexicoHaskell.cpp \
    gramaticahaskell.cpp \
    nodo.cpp \
    ejecutar.cpp \
    variable.cpp \
    nodotablasimbolos.cpp

HEADERS  += proyecto1.h \
    form.h \
    lexicoHaskell.h \
    gramaticahaskell.h \
    nodo.h \
    ejecutar.h \
    variable.h \
    nodotablasimbolos.h

FORMS    += proyecto1.ui \
    form.ui

OTHER_FILES += \
    gramaticahaskell.y \
    lexicoHaskell.l \
