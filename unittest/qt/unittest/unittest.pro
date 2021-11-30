QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

HEADERS += \
    ../../src/head/test_Calculate.h

SOURCES += \
        ../../src/test_src/test_Calculate.cpp \
        main.cpp \
        ../../../src/myAPP/src/*.cpp

## Default rules for deployment.
#qnx: target.path = /tmp/$${TARGET}/bin
#else: unix:!android: target.path = /opt/$${TARGET}/bin
#!isEmpty(target.path): INSTALLS += target


INCLUDEPATH +=   ./ \
#        googletest head denpend
        ../../src/gtest/head \
        ../../src/gtest/gmock/head \
#        linux MFC denpend
        ../../src/head \
        ../../../src/myAPP/src/head


LIBS += -L../../src/gtest/lib \
    -L../../src/gtest/gmock/lib \
-lgmock \
-lgtest \
-lpthread

# change private to public before build
extralib.target = extra
extralib.commands = echo "define private public for private method test..."; \
                        ./callPY.sh 1
extralib.depends =
QMAKE_EXTRA_TARGETS += extralib
PRE_TARGETDEPS = extra


