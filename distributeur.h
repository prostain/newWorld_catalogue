#ifndef DISTRIBUTEUR_H
#define DISTRIBUTEUR_H

#include <iostream>
#include <QString>
#include <sstream>

using namespace std;

class Distributeur
{
private :

        QString libelleDistrib;

public :

    Distributeur (QString unLibelleDistrib);

    QString versChaine();

};

#endif // DISTRIBUTEUR_H
