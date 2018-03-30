#ifndef CONSOMMATEUR_H
#define CONSOMMATEUR_H

#include "collDistrib.h"

using namespace std;

class Consommateur
{
private :

        int idConso;
        QString nomConso;
        QString prenomConso;

        CollDistrib sesDistrib;

public :

        Consommateur (int unIdConso, QString unNomConso, QString unPrenomConso, CollDistrib uneCollDistrib);

        QString versChaine();

};

#endif // CONSOMMATEUR_H
