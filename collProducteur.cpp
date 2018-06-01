#include "collProducteur.h"

vector<Producteur> CollProd::vectProd;

int CollProd::cardinal()
{
    qDebug("int CollProd::cardinal()");
    return vectProd.size();
}

Producteur CollProd::obtenirObjet(int index)
{
    qDebug("Producteur CollProd::obtenirObjet(int index");
    return vectProd[index];
}

Producteur CollProd::obtenirObjetByName(QString name)
{
    qDebug("Producteur CollProd::obtenirObjetByName(QString name)");
    Producteur resultat;

    for (unsigned int i = 0; i<vectProd.size(); i++)
    {
        QString libelle = vectProd[i].getName();
        if (libelle == name)
        {
           resultat=vectProd[i];
        }
    }

    return resultat;
}

void CollProd::ajouter(Producteur unProd)
{
    qDebug("void CollProd::ajouter(Producteur unProd)");
    vectProd.push_back(unProd);
}
