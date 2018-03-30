#ifndef VARIETE_H
#define VARIETE_H

#include <iostream>
#include <QString>
#include <sstream>

class Variete
{
private :

    int idVariete;
    QString libelleVariete;
    QString imgVariete;


public :

    Variete (int unIdVariete, QString unLibelleVariete, QString uneImgVariete, float unPrix);

    QString versChaine();

    QString getImgVariete();
};

#endif // VARIETE_H
