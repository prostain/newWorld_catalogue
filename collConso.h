#ifndef COLLCONSO_H
#define COLLCONSO_H

#include "consommateur.h"
#include <vector>

class CollConso
{
private :

    vector<Consommateur> vectConso;

public :

    int cardinal();

    Consommateur obtenirObjet(int index);

    void ajouter(Consommateur unConsommateur);
};

#endif // COLLCONSO_H
