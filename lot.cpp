#include "lot.h"

Lot::Lot(int unIdVariete, QString unLibelleVariete, QString uneImgVariete, float unPrix, QString uneUMesuse, QString unModeProd, QString uneDateLimite, float uneQteDispo, QString unProducteur)
    :Variete(unIdVariete, unLibelleVariete, uneImgVariete)
{
    prixU = unPrix;
    uniteMesure = uneUMesuse;
    modeProd = unModeProd;
    dateLimite = uneDateLimite;
    QteDispo = uneQteDispo;
    sonProducteur = unProducteur;
}

QString Lot::versChain()
{
    stringstream rslt;

    rslt << "Prix par " << uniteMesure.toStdString() << ": " << prixU;
    rslt << "Date limite de consommation : " << dateLimite.toStdString();
    rslt << "Quantité disponible : " << QteDispo;
    rslt << "Proposé par : " << sonProducteur.toStdString();

    return QString(rslt.str().c_str());
}
