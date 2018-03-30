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
    passerelle.cpp

HEADERS += \
    rayon.h \
    produit.h \
    variete.h \
    collProduit.h \
    collVariete.h \
    passerelle.h
