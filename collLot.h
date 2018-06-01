#ifndef COLLLOT_H
#define COLLLOT_H

#include "lot.h"
#include <vector>

class CollLot
{

private :

    vector<Lot> vectLot;

public :

    int cardinal();

    Lot obtenirObjet(int index);

    void ajouter(Lot unLot);
};


#endif // COLLLOT_H
