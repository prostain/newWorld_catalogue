#include "distributeur.h"

Distributeur::Distributeur(QString unLibelleDistrib)
{
    libelleDistrib = unLibelleDistrib;
}

QString Distributeur::versChaine()
{
    stringstream rslt;

    rslt << libelleDistrib.toStdString();
}


