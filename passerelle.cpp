#include "passerelle.h"

CollConso Passerelle::chargerLesConso()
{
    qDebug("CollConso Passerelle::chargerLesConso()");
    CollConso lesConso;

    QString requete;

    requete = "SELECT idUser, prenom, nom FROM utilisateur WHERE idRole = 3;";

    JeuEnregistrement jeuConso(requete);

    while(jeuConso.suivant())
    {
        qDebug(" while(jeuConso.suivant())");

        QString id = jeuConso.getValeur("idUser").toString();
        QString prenom = jeuConso.getValeur("prenom").toString();
        QString nom = jeuConso.getValeur("nom").toString();

        CollDistrib sesDistrib = Passerelle::chargerLesDistrib(id);

        Consommateur newConso(id,prenom,nom,sesDistrib);

        lesConso.ajouter(newConso);
        qDebug("lesConso.ajouter(newConso);");
    }

    jeuConso.fermer();
    return lesConso;
}

CollDistrib Passerelle::chargerLesDistrib(QString idConso)
{
    qDebug("CollDistrib Passerelle::chargerLesDistrib(QString idConso)");
    CollDistrib lesDistrib;

    QString requete;

    requete = "SELECT pointDeVente.idPoint, nomPoint FROM pointDeVente INNER JOIN choixPointsAchat ON pointDeVente.idPoint = choixPointsAchat.idPoint where choixPointsAchat.idUser ="+ idConso +";";

    JeuEnregistrement jeuDistrib(requete);

     while(jeuDistrib.suivant())
     {
         qDebug("while(jeuDistrib.suivant())");

         QString id = jeuDistrib.getValeur("idPoint").toString();
         QString libelle = jeuDistrib.getValeur("nomPoint").toString();

         Distributeur newDistrib(id,libelle);

         lesDistrib.ajouter(newDistrib);
         qDebug("lesDistrib.ajouter(newDistrib)");

     }
     jeuDistrib.fermer();
     return lesDistrib;
}

CollProd Passerelle::chargerLesProd(QString idDistrib)
{
    qDebug("CollProd Passerelle::chargerLesProd(QString idDistrib)");
    CollProd lesProducteurs;

    QString requete;

    requete = "SELECT producteur.idProducteur, entrepriseProducteur FROM producteur INNER JOIN choixPointsLivraison ON producteur.idProducteur = choixPointsLivraison.idProducteur WHERE idPoint = "+idDistrib+";";

    JeuEnregistrement jeuProd(requete);

    while(jeuProd.suivant())
    {
        qDebug("while(jeuProd.suivant())");

        QString id = jeuProd.getValeur("idProducteur").toString();
        QString libelle = jeuProd.getValeur("entrepriseProducteur").toString();

        Producteur newProducteur(id,libelle);

        lesProducteurs.ajouter(newProducteur);
        qDebug("lesVariete.ajouter(newProdcuteur)");

    }
    jeuProd.fermer();
    return lesProducteurs;
}

CollVariete Passerelle::chargerLesVarietes(QString idProduit)
{
    qDebug("CollVariete Passerelle::chargerLesVarietes(QString idProduit)");
    CollVariete lesVarietes;

    QString requete;

    requete = "SELECT idVariete, libelleVariete, photo FROM variete where idProduit = "+ idProduit+" ORDER BY libelleVariete;";

    JeuEnregistrement jeuVariete(requete);

    while(jeuVariete.suivant())
    {
        qDebug("while(jeuVariete.suivant())");

        QString id = jeuVariete.getValeur("idVariete").toString();
        QString libelle = jeuVariete.getValeur("libelleVariete").toString();
        QString img = jeuVariete.getValeur("photo").toString();

        Variete newVariete(id,libelle,img);

        lesVarietes.ajouter(newVariete);
        qDebug("lesVariete.ajouter(newVariete)");

    }
    jeuVariete.fermer();
    return lesVarietes;
}

CollProduit Passerelle::chargerLesProduits(QString idDistrib, QString idProd)
{
        qDebug("CollProduit Passerelle::chargerLesProduits(QString idDistrib, QString idProd)");
        CollProduit lesProduits;

        QString requete;

        requete = "SELECT produit.idProduit, libelleProduit FROM produit INNER JOIN variete ON produit.idProduit = variete.idProduit INNER JOIN lot ON variete.idVariete = lot.idVariete INNER JOIN producteur ON lot.idProducteur = producteur.idProducteur INNER JOIN choixPointsLivraison ON producteur.idProducteur = choixPointsLivraison.idProducteur WHERE choixPointsLivraison.idPoint = "+idDistrib+" AND choixPointsLivraison.idProducteur ="+idProd+" ORDER BY libelleProduit;";

        JeuEnregistrement jeuProduit(requete);

        while(jeuProduit.suivant())
        {
            qDebug("while(jeuProduit.suivant())");

            QString id = jeuProduit.getValeur("idProduit").toString();
            QString libelle = jeuProduit.getValeur("libelleProduit").toString();

            CollVariete sesVarietes = Passerelle::chargerLesVarietes(id);

            Produit newProduit(id,libelle,sesVarietes);

            lesProduits.ajouter(newProduit);
            qDebug("lesProduit.ajouter(newProduit");
        }
        jeuProduit.fermer();
        return lesProduits;

}



CollLot Passerelle::chargerLesLots(QString idVariete)
{
    qDebug("CollLot Passerelle::chargerLesLots(QString idVariete)");
    CollLot lesLots;

    QString requete;

    requete = "SELECT variete.idVariete, libelleVariete, photo, prix, libelleUnite, modeProduction, dateLimite, quantite, entrepriseProducteur FROM lot INNER JOIN variete ON lot.idVariete = variete.idVariete INNER JOIN unite ON lot.idUnite = unite.idUnite INNER JOIN parcelles ON lot.idParcelle = parcelles.idParcelle INNER JOIN modeProduction ON parcelles.idProduction = modeProduction.idProduction INNER JOIN producteur ON lot.idProducteur = producteur.idProducteur WHERE producteur.idProducteur = "+idVariete+";";

    JeuEnregistrement jeuLot(requete);

    while(jeuLot.suivant())
    {
        qDebug("while(jeuLot.suivant())");

        QString idVariete = jeuLot.getValeur("idVariete").toString();
        QString libelleVariete = jeuLot.getValeur("libelleVariete").toString();
        QString image = jeuLot.getValeur("photo").toString();
        float prix = jeuLot.getValeur("prix").toFloat();
        QString unite = jeuLot.getValeur("libelleUnite").toString();
        QString modeProd = jeuLot.getValeur("modeProduction").toString();
        QString DLC = jeuLot.getValeur("dateLimite").toString();
        float qte = jeuLot.getValeur("quantite").toFloat();
        QString libelle = jeuLot.getValeur("entrepriseProducteur").toString();

        //Producteur sonProducteur = new Producteur();

        Producteur sonProducteur= CollProd::obtenirObjetByName(libelle);

        Lot newLot(idVariete,libelleVariete,image,prix,unite,modeProd,DLC,qte,sonProducteur);

        lesLots.ajouter(newLot);
        qDebug("lesLots.ajouter(newLot)");
    }
    jeuLot.fermer();
    return lesLots;
}

