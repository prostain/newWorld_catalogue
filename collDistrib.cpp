#include "collDistrib.h"


int CollDistrib::cardinal()
{
    return vectDistrib.size();
}

Distributeur CollDistrib::obtenirObjet(int index)
{
    return vectDistrib[index];
}

void CollDistrib::ajouter(Distributeur unDistrib)
{
    vectDistrib.push_back(unDistrib);
}
