#include "distributeur.h"

Distributeur::Distributeur(QString unIdDistrib, QString unLibelleDistrib)
{
    idDistrib = unIdDistrib;
    libelleDistrib = unLibelleDistrib;
}

QString Distributeur::versChaine()
{
    qDebug("QString Distributeur::versChaine()");
    stringstream rslt;

    rslt << libelleDistrib.toStdString();

    return QString(rslt.str().c_str());
}

QString Distributeur::getId()
{
    qDebug("QString Distributeur::getId()");
    return idDistrib;
}


