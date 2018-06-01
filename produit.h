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

    QString idProduit;
    QString nomProduit;

    CollVariete sesVarietes;

public :

    Produit(QString unIdProduit, QString unNomProduit, CollVariete uneCollVariete);

    QString versChaine();

    QString getId();
};

#endif // PRODUIT_H
