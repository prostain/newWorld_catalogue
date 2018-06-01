#include "collLot.h"


int CollLot::cardinal()
{
    qDebug("int CollLot::cardinal()");
    return vectLot.size();
}

Lot CollLot::obtenirObjet(int index)
{
    qDebug("Lot CollLot::obtenirObjet(int index)");
    return vectLot[index];
}

void CollLot::ajouter(Lot unLot)
{
    qDebug("void CollLot::ajouter(Lot unLot)");
    vectLot.push_back(unLot);
}
