QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adress.cpp \
    class1.cpp \
    creditcard.cpp \
    cruise1.cpp \
    date_time.cpp \
    hotelres2.cpp \
    main.cpp \
    mainwindow.cpp \
    map1.cpp \
    payment.cpp \
    plane1.cpp \
    planes.cpp \
    rgtr.cpp \
    ticket1.cpp \
    trans1.cpp \
    transportation1.cpp \
    userlogined2.cpp \
    userpage.cpp

HEADERS += \
    adress.h \
    class1.h \
    creditcard.h \
    cruise1.h \
    date_time.h \
    hotelres2.h \
    mainwindow.h \
    map1.h \
    payment.h \
    plane1.h \
    planes.h \
    rgtr.h \
    ticket1.h \
    trans1.h \
    transportation1.h \
    userlogined2.h \
    userpage.h

FORMS += \
    creditcard.ui \
    cruise1.ui \
    date_time.ui \
    hotelres2.ui \
    mainwindow.ui \
    map1.ui \
    payment.ui \
    plane1.ui \
    planes.ui \
    rgtr.ui \
    ticket1.ui \
    transportation1.ui \
    userlogined2.ui \
    userpage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
