#ifndef PASSERELLE_H
    #define PASSERELLE_H

#include <iostream>
#include "coll.h"
#include "collProduit.h"
#include "collVariete.h"
#include <QString>

using namespace std;
class Passerelle
{
public:
    static ColEquipement chargerLesRayons();
    static ColBateauVoyageur chargerLesProduits();
};

#endif
