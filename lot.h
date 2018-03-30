#ifndef LOT_H
#define LOT_H

#include "variete.h"

class Lot : public Variete
{
private :

    float prixU;
    QString uniteMesure;
    QString modeProd;
    QString dateLimite;
    float QteDispo;
    QString sonProducteur;

public :

    Lot(int unIdVariete, QString unLibelleVariete, QString uneImgVariete, float unPrix, QString uneUMesuse, QString unModeProd, QString uneDateLimite, float uneQteDispo, QString unProducteur);

    QString versChain();
};

#endif // LOT_H
