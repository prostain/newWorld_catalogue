#include "rayon.h"

Rayon::Rayon(int unIdRayon, QString unLibelleRayon, CollProduit uneCollProduit)
{
    idRayon = unIdRayon;
    libelleRayon = unLibelleRayon;
    sesProduits = uneCollProduit;
}

QString Rayon::versChaine()
{
    qDebug("QString Rayon::versChaine()");
    stringstream rslt;

    rslt << libelleRayon.toStdString() ;

    return QString(rslt.str().c_str());
}
