#ifndef COLLDISTRIB_H
#define COLLDISTRIB_H

#include "distributeur.h"

class CollDistrib
{
private :

    vector<Distributeur> vectDistrib;

public :

    int cardinal();

    Distributeur obtenirObjet(int index);

    void ajouter(Distributeur unDistrib);
};

#endif // COLLDISTRIB_H
