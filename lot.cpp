#include "lot.h"

Lot::Lot(QString unIdVariete, QString unLibelleVariete, QString uneImgVariete, float unPrix, QString uneUMesuse, QString unModeProd, QString uneDateLimite, float uneQteDispo, Producteur unProducteur)
    :Variete(unIdVariete, unLibelleVariete, uneImgVariete)
{
    prixU = unPrix;
    uniteMesure = uneUMesuse;
    modeProd = unModeProd;
    dateLimite = uneDateLimite;
    QteDispo = uneQteDispo;
    sonProducteur = unProducteur;
}

QString Lot::versChaine()
{
    stringstream rslt;

    rslt << "Prix :" <<  prixU << "€" << "/" << uniteMesure.toStdString();
    rslt << "Date limite de consommation : " << dateLimite.toStdString();
    rslt << "Quantité disponible : " << QteDispo;
    rslt << "Proposé par : " << sonProducteur.versChaine().toStdString();

    return QString(rslt.str().c_str());
}
