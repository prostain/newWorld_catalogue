#include "collDistrib.h"


int CollDistrib::cardinal()
{
    qDebug("void CollConso::ajouter(Consommateur unConso)");
    return vectDistrib.size();
}

Distributeur CollDistrib::obtenirObjet(int index)
{
    qDebug("void CollConso::ajouter(Consommateur unConso)");
    return vectDistrib[index];
}

void CollDistrib::ajouter(Distributeur unDistrib)
{
    qDebug("void CollConso::ajouter(Consommateur unConso)");
    vectDistrib.push_back(unDistrib);
}
