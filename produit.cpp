#include "produit.h"

Produit::Produit(QString unIdProduit, QString unNomProduit, CollVariete uneCollVariete)
{
    idProduit = unIdProduit;
    nomProduit = unNomProduit;
    sesVarietes = uneCollVariete;
}

QString Produit::versChaine()
{
    qDebug("QString Produit::versChaine()");
    stringstream rslt;

    rslt << nomProduit.toStdString();

    return QString(rslt.str().c_str());
}

QString Produit::getId()
{
    qDebug("QString Produit::getId()");
    return idProduit;
}
