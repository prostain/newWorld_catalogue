#ifndef RAYONS_H
#define RAYONS_H

#include "collProduit.h"


using namespace std;

class Rayon
{
private :

    int idRayon;
    QString libelleRayon;

    CollProduit sesProduits;

public :

    Rayon(int unIdRayon, Qstring unLibelleRayon, CollProduit uneCollProduit);

    QString versChaine();
}

#endif // RAYONS_H
