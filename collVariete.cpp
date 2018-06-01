#include "collVariete.h".

int CollVariete::cardinal()
{
    qDebug("int CollVariete::cardinal()");
    return vectVariete.size();
}

Variete CollVariete::obtenirObjet(int index)
{
    qDebug("Variete CollVariete::obtenirObjet(int index)");
    return vectVariete[index];
}

void CollVariete::ajouter(Variete uneVariete)
{
    qDebug("void CollVariete::ajouter(Variete uneVariete)");
    vectVariete.push_back(uneVariete);
}
