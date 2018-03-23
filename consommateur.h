#ifndef CONSOMMATEUR_H
#define CONSOMMATEUR_H

#include "collDistrib.h"

using namespace std;

class Consommateur
{
private :

        QString nomConso;
        QString prenomConso;

        CollDistrib sesDistrib;

public :

        Consommateur (QString unNomConso, QString unPrenomConso, collDistrib uneCollDistrib);

        QString versChaine();

};

#endif // CONSOMMATEUR_H
