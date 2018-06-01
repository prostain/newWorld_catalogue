#include "variete.h"


Variete::Variete(QString unIdVariete, QString unLibelleVariete, QString uneImgVariete)
{
    idVariete = unIdVariete;
    libelleVariete = unLibelleVariete;
    imgVariete = uneImgVariete;
}

QString Variete::versChaine()
{
    qDebug("QString Variete::versChaine()");
    stringstream rslt;

    rslt << libelleVariete.toStdString();

    return QString(rslt.str().c_str());
}

QString Variete::getImgVariete()
{
    qDebug("QString Variete::getImgVariete()");
    return imgVariete;
}

QString Variete::getId()
{
    qDebug("QString Variete::getId()");
    return idVariete;
}
