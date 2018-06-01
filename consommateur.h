#ifndef CONSOMMATEUR_H
#define CONSOMMATEUR_H

#include "collDistrib.h"

using namespace std;

class Consommateur
{
private :

        QString idConso;
        QString nomConso;
        QString prenomConso;

        CollDistrib sesDistrib;

public :

        Consommateur (QString unIdConso, QString unNomConso, QString unPrenomConso, CollDistrib uneCollDistrib);

        QString versChaine();

        QString getIdConso();

};

#endif // CONSOMMATEUR_H
