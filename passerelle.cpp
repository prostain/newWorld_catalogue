#include "passerelle.h"
#include "jeuEnregistrement.h"
#include <QtSql/QSqlDatabase>

CollProduit Passerelle::chargerLesEquipements()
{
    ColEquipement lesEquipements;
    QString monIdBateauSting=QString::number(unIdBateau);
       JeuEnregistrement premierJeu( "SELECT id,lib FROM equipement INNER JOIN equiper ON equiper.idEquipement = equipement.id WHERE idBateau = "+ unIdBateau);
       while(premierJeu.suivant()){
           QString idEquip =  premierJeu.getValeur("id").toString();
           QString libEquip = premierJeu.getValeur("lib").toString();
           Equipement monEquipement(idEquip, libEquip);
           lesEquipements.ajouterObjet(monEquipement);
       }

       return lesEquipements;

}

ColBateauVoyageur Passerelle::chargerLesBateauxVoyageurs()
{
    ColBateauVoyageur LesBateauxVoyageurs;
    ColEquipement lesEquipements;
    //Id des bateaux
    JeuEnregistrement Bateaux ("SELECT bateauId,bateauLibelle, vitesse, image, largeur, longueur FROM Bateau WHERE type='V'");
    while(Bateaux.suivant()){
        int idBateau =  Bateaux.getValeur("bateauId").toInt();
        QString nom =  Bateaux.getValeur("bateauLibelle").toString();
        float vitesse =  Bateaux.getValeur("vitesse").toFloat();
        QString image =  Bateaux.getValeur("image").toString();
        float largeur =  Bateaux.getValeur("largeur").toFloat();
        float longueur =  Bateaux.getValeur("longueur").toFloat();
        lesEquipements = chargerLesEquipements(idBateau);

        BateauVoyageur newBoat(idBateau,nom,longueur,largeur,vitesse,image,lesEquipements);

        LesBateauxVoyageurs.ajouterBateau(newBoat);
    }
    return LesBateauxVoyageurs;

}
