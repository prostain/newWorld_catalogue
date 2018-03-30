#ifndef PRODUIT_H
#define PRODUIT_H

#include "collVariete.h"
#include <iostream>
#include <QString>
#include <sstream>

using namespace std;

class Produit
{
private :

    int idProduit;
    QString nomProduit;

    CollVariete sesVarietes;

public :

    Produit(int unIdProduit, QString unNomProduit, CollVariete uneCollVariete);

    QString versChaine();
};

#endif // PRODUIT_H
