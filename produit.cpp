#include "produit.h"

Produit::Produit(int unIdProduit, QString unNomProduit, CollVariete uneCollVariete)
{
    idProduit = unIdProduit;
    nomProduit = unNomProduit;
    sesVarietes = uneCollVariete;
}

QString Produit::versChaine()
{
    stringstream rslt;

    rslt << nomProduit.toStdString();

    return QString(rslt.str().c_str());
}
