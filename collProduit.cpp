#include "collProduit.h"


int CollProduit::cardinal()
{
    qDebug("int CollProduit::cardinal()");
    return vectProduit.size();
}

Produit CollProduit::obtenirObjet(int index)
{
    qDebug("Produit CollProduit::obtenirObjet(int index)");
    return vectProduit[index];
}

void CollProduit::ajouter(Produit unProduit)
{
    qDebug("void CollProduit::ajouter(Produit unProduit)");
    vectProduit.push_back(unProduit);
}
