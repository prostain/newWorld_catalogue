#include "variete.h"


Variete::Variete(int unIdVariete, QString unLibelleVariete, QString uneImgVariete)
{
    idVariete = unIdVariete;
    libelleVariete = unLibelleVariete;
    imgVariete = uneImgVariete;
}

QString Variete::versChaine()
{
    stringstream rslt;

    rslt << libelleVariete.toStdString();

    return QString(rslt.str().c_str());
}

QString Variete::getImgVariete()
{
    return imgVariete;
}
