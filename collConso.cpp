#include "collConso.h"


int CollConso::cardinal()
{
    qDebug("int CollConso::cardinal()");
    return vectConso.size();
}

Consommateur CollConso::obtenirObjet(int index)
{
    qDebug("Consommateur CollConso::obtenirObjet(int index)");
    return vectConso[index];
}

void CollConso::ajouter(Consommateur unConso)
{
    qDebug("void CollConso::ajouter(Consommateur unConso)");
    vectConso.push_back(unConso);
}

