#ifndef COLLPRODUCTEUR_H
#define COLLPRODUCTEUR_H

#include "producteur.h"
#include <vector>

class CollProd
{
private :

    static vector<Producteur> vectProd;

public :

    int cardinal();

    Producteur obtenirObjet(int index);

    static Producteur obtenirObjetByName(QString name);

    void ajouter(Producteur unProd);
};
#endif // COLLPRODUCTEUR_H
