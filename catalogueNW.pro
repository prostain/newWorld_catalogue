#-------------------------------------------------
#
# Project created by QtCreator 2018-03-23T09:31:51
#
#-------------------------------------------------

QT       += core sql

QT       += gui

TARGET = catalogueNW
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    consommateur.cpp \
    passerelle.cpp \
    collDistrib.cpp \
    collProduit.cpp \
    collVariete.cpp \
    distributeur.cpp \
    lot.cpp \
    produit.cpp \
    rayon.cpp \
    variete.cpp \
    jeuEnregistrement.cpp \
    pdf.cpp \
    collLot.cpp \
    producteur.cpp \
    collProducteur.cpp \
    collConso.cpp


HEADERS += \
    rayon.h \
    produit.h \
    variete.h \
    collProduit.h \
    collVariete.h \
    collDistrib.h \
    consommateur.h \
    distributeur.h \
    lot.h \
    passerelle.h \
    pdf.h \
    jeuEnregistrement.h \
    collLot.h \
    producteur.h \
    collProducteur.h \
    collConso.h

