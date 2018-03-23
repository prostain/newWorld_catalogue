#ifndef PRODUIT_H
#define PRODUIT_H

#include "rayon.h"

class Produit
{
private :

    int idProduit;
    QString nomProduit;

public :

    Produit(int unIdProduit, QString unNomProduit);

    QString versChaine();
}

#endif // PRODUIT_H
