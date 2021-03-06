#include "consommateur.h"

Consommateur::Consommateur(QString unIdConso, QString unNomConso, QString unPrenomConso, CollDistrib uneCollDistrib)
{
    idConso = unIdConso;
    nomConso = unNomConso;
    prenomConso = unPrenomConso;
    sesDistrib = uneCollDistrib;
}

QString Consommateur::versChaine()
{
    qDebug("QString Consommateur::versChaine() {");
    stringstream rslt;

    rslt <<"Catalogue de " << nomConso.toStdString() <<" "<< prenomConso.toStdString();

    return QString(rslt.str().c_str());

}

QString Consommateur::getIdConso()
{
    qDebug("QString Consommateur::getIdConso() {");
    return idConso;
}
