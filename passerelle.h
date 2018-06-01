#ifndef PASSERELLE
    #define PASSERELLE

#include "collConso.h"
#include "collDistrib.h"
#include "collProduit.h"
#include "collVariete.h"
#include "collProducteur.h"
#include "collLot.h"
#include "jeuEnregistrement.h"

using namespace std;
class Passerelle
{

public:
       static CollConso chargerLesConso();//Retourne la collection de tous les consommateurs

       static CollDistrib chargerLesDistrib(QString idConso); // Retourne la collection des Distributeur du Consommateur dont l'identifiant est passé en paramètre.

       static CollProd chargerLesProd(QString idDistrib) ; //Retourne la collection des Producteurs ayant comme point de livraison l'identifiant des points de ventes en paramètre.

       static CollProduit chargerLesProduits(QString idDistrib, QString idProd);// Retourne la collection des Produits dont selon le point de vente et le producteur

       static CollVariete chargerLesVarietes(QString idProduit);// Instancie et retourne une collection d’objets de la classe Variete, à partir des produits récupérés

       static CollLot chargerLesLots(QString idVariete);//Instancie et retourne une collection d’objets de la classe Lot, à partir des variétés récupérées
};


#endif
