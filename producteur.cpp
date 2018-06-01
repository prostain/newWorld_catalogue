#include "producteur.h"

Producteur::Producteur(QString unIdProd, QString unLibelleProd)
{
    idProd = unIdProd;
    libelleProd = unLibelleProd;
}

QString Producteur::versChaine()
{
    qDebug("QString Producteur::versChaine()");
    stringstream rslt;

    rslt << libelleProd.toStdString();

    return QString(rslt.str().c_str());
}

QString Producteur::getId()
{
    qDebug("QString Producteur::getId()");
    return idProd;
}

QString Producteur::getName()
{
    qDebug("QString Producteur::getName()");
    return libelleProd;
}
