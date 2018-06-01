#ifndef PRODUCTEUR_H
#define PRODUCTEUR_H

#include <iostream>
#include <QString>
#include <sstream>

using namespace std;

class Producteur
{
private :

        QString idProd;
        QString libelleProd;

public :

    Producteur (QString unIdProd, QString unLibelleProd);
    Producteur (){};
    QString versChaine();

    QString getId();
    QString getName();

};

#endif // PRODUCTEUR_H
