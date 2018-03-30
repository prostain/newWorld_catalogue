#ifndef PASSERELLE_H
#define PASSERELLE_H

#include <collDistrib.h>
#include <collProduit.h>
#include <collVariete.h>

using namespace std;


class Passerelle {
 public : //à portée de classe (statique);

    static CollDistrib chargeLesDistrib(int idConso); // Retourne la collection des Distributeur du Consommateur dont l'identifiant est passé en paramètre.

    static CollProduit chargeLesProdtuis(int idRayon);// Retourne la collection des Produits du Rayon dont l'identifiant est passé en paramètre.

    static CollVariete chargerLesVariete();// Instancie et retourne une collection d’objets de la classe Variete, à partir des données lues dans la base de données

#endif
