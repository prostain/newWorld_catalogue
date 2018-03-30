#ifndef COLLPRODUIT_H
#define COLLPRODUIT_H

#include "produit.h"
#include <vector>

class CollProduit
{
private :

    vector<Produit> vectProduit;

public :

    int cardinal();

    Produit obtenirObjet(int index);

    void ajouter(Produit unProduit);
};

#endif // COLLPRODUIT_H
