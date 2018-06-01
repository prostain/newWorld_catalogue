#ifndef LOT_H
#define LOT_H

#include "variete.h"
#include "producteur.h"

class Lot : public Variete
{
private :

    float prixU;
    QString uniteMesure;
    QString modeProd;
    QString dateLimite;
    float QteDispo;
    Producteur sonProducteur;

public :

    Lot(QString unIdVariete, QString unLibelleVariete, QString uneImgVariete, float unPrix, QString uneUMesure, QString unModeProd, QString uneDateLimite, float uneQteDispo, Producteur unProducteur);

    QString versChaine();
};

#endif // LOT_H
