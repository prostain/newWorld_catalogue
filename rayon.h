#ifndef RAYONS_H
#define RAYONS_H

#include <iostream>
#include <QString>
#include <sstream>
#include "collProduit.h"


using namespace std;

class Rayon
{
private :

    int idRayon;
    QString libelleRayon;

    CollProduit sesProduits;

public :

    Rayon(int unIdRayon, QString unLibelleRayon, CollProduit uneCollProduit);

    QString versChaine();
};

#endif // RAYONS_H
