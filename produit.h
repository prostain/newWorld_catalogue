#ifndef PRODUIT_H
#define PRODUIT_H

#include "collVariete.h"

class Produit
{
private :

    int idProduit;
    QString nomProduit;

    CollVariete sesVarietes;
public :

    Produit(int unIdProduit, QString unNomProduit, CollVariete uneCollVariete);

    QString versChaine();
}

#endif // PRODUIT_H
