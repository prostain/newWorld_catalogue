#include "collVariete.h".

int CollVariete::cardinal()
{
    return vectVariete.size();
}

Variete CollVariete::obtenirObjet(int index)
{
    return vectVariete[index];
}

void CollVariete::ajouter(Variete uneVariete)
{
    vectVariete.push_back(uneVariete);
}
