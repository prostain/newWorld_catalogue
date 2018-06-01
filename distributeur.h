#ifndef DISTRIBUTEUR_H
#define DISTRIBUTEUR_H

#include <iostream>
#include <QString>
#include <sstream>

using namespace std;

class Distributeur
{
private :

        QString idDistrib;
        QString libelleDistrib;

public :

    Distributeur (QString idDistrib, QString unLibelleDistrib);

    QString versChaine();

    QString getId();

};

#endif // DISTRIBUTEUR_H
