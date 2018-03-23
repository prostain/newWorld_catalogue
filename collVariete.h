#ifndef COLLVARIETE_H
#define COLLVARIETE_H

#include "variete.h"

class CollVariete
{
private :

    vector<Variete> vectVariete;

public :

    int cardinal();

    Variete obtenirObjet(int index);

    void ajouter(Variete uneVariete);
};

#endif // COLLVARIETE_H
