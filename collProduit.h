#ifndef COLLPRODUIT_H
#define COLLPRODUIT_H

#include "produit.h"

class CollProduit
{
private :

    vector<Produit> vectProduit;

public :

    int cardinal();

    Produit obtenirObjet(int index);

    void ajouter(Produit unPorduit);
};

#endif // COLLPRODUIT_H
