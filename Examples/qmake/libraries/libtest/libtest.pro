# paths to include files must be set relative to build directory
QT -= gui
CONFIG -= app_bundle
CONFIG -= qt
QMAKE_LFLAGS_RELEASE += -s -no-pie
QMAKE_LFLAGS_DEBUG += -no-pie
CONFIG += c++11 console
CONFIG -= app_bundle

QMAKE_EXTRA_COMPILERS += nasm
NASMEXTRAFLAGS = -f elf64 -g -F dwarf

nasm.output = ${QMAKE_FILE_BASE}.o
nasm.commands = nasm $$NASMEXTRAFLAGS -o ${QMAKE_FILE_BASE}.o ${QMAKE_FILE_NAME}
nasm.input = NASM_SOURCES
OTHER_FILES += $$NASM_SOURCES

NASM_SOURCES += libtest.asm

HEADERS += libtest.inc

unix:!macx: LIBS += -L$$PWD/../dynamic/build/ -ldynamic

INCLUDEPATH += $$PWD/../dynamic/build
DEPENDPATH += $$PWD/../dynamic/build

unix:!macx: LIBS += -L$$PWD/../static/build/ -lstatic

INCLUDEPATH += $$PWD/../static/build
DEPENDPATH += $$PWD/../static/build

unix:!macx: PRE_TARGETDEPS += $$PWD/../static/build/libstatic.a
