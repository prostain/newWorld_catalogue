#ifndef VARIETE_H
#define VARIETE_H

#include <iostream>
#include <QString>
#include <sstream>

using namespace std;

class Variete
{
private :

    QString idVariete;
    QString libelleVariete;
    QString imgVariete;


public :

    Variete (QString unIdVariete, QString unLibelleVariete, QString uneImgVariete);

    QString versChaine();

    QString getId();
    QString getImgVariete();
};

#endif // VARIETE_H
