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
    distributeur.cpp \
    produit.cpp \
    rayon.cpp \
    variete.cpp \
    lot.cpp \
    collDistrib.cpp \
    collProduit.cpp \
    collVariete.cpp

HEADERS += \
    rayon.h \
    produit.h \
    variete.h \
    collProduit.h \
    collVariete.h \
    consommateur.h \
    distributeur.h \
    collDistrib.h \
    lot.h \
    passerelle.h \
    pdf.h
