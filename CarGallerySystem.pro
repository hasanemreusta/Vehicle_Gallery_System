QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    SaveCar.cpp \
    bike.cpp \
    car.cpp \
    cartype.cpp \
    login.cpp \
    main.cpp \
    savemotor.cpp \
    vehicle.cpp

HEADERS += \
    SaveCar.h \
    bike.h \
    car.h \
    cartype.h \
    login.h \
    savemotor.h \
    vehicle.h

FORMS += \
    SaveCar.ui \
    cartype.ui \
    login.ui \
    savemotor.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
