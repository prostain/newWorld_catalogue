#include <QGuiApplication>
#include "passerelle.h"
#include "pdf.h"

int main(int argc, char *argv[])
{
    QGuiApplication a(argc, argv);

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
       db.setHostName("localhost");
       db.setUserName("rbayeux");
       db.setPassword("ini01");
       db.setDatabaseName("newWorld");
       db.open();

       CollConso lesConso;
       lesConso = Passerelle::chargerLesConso();
       qDebug("On charge tous les consommateurs");

       for(unsigned int noConso=0; lesConso.cardinal()>noConso; noConso++)
       {
           Consommateur leConso = lesConso.obtenirObjet(noConso);

           QString idConso = leConso.getIdConso();
           qDebug("Pour ce consommateur");

           //création d'un catalogue de pour chaque consommateur
           QString nomCatalogue = "Catalogue_NW n°"+idConso;
           Pdf lePDF(0,nomCatalogue);
           qDebug("Création d'un catalogue");

           lePDF.ecrireTexte(leConso.versChaine());
           qDebug("On écrit son nom/prénom sur le pdf");

           CollDistrib lesDistrib = Passerelle::chargerLesDistrib(idConso);
           qDebug("On charges ses distributeurs");

           for(unsigned int noDistrib=0; lesDistrib.cardinal()>noDistrib; noDistrib++)
           {
               Distributeur unDistrib = lesDistrib.obtenirObjet(noDistrib);
               qDebug("Pour ce distributeur");

               //lePDF.ecrireTexte(unDistrib.versChaine());
               //qDebug("On écrit son libelle sur le pdf");

               CollProd lesProd = Passerelle::chargerLesProd(unDistrib.getId());
               qDebug("On charge ses producteurs");

               for(unsigned int noProd=0; lesProd.cardinal()>noProd; noProd++)
               {
                   Producteur unProd = lesProd.obtenirObjet(noProd);
                   qDebug("Pour ce producteur");

                   //lePDF.ecrireTexte(unProd.versChaine());
                   //qDebug("On écrit son libelle sur le pdf");

                   CollProduit lesProduits = Passerelle::chargerLesProduits(unDistrib.getId(),unProd.getId());
                   qDebug("Et on charge les produits qu'il propose");

                   for (unsigned int noProduit=0; lesProduits.cardinal() > noProduit; noProduit++)
                   {
                        Produit unProduit = lesProduits.obtenirObjet(noProduit);
                        qDebug("Pour ce produit");

                        lePDF.ecrireTexte(unProduit.versChaine());
                        qDebug("On écrit son libelle sur le pdf");

                        CollVariete lesVarietes = Passerelle::chargerLesVarietes(unProduit.getId());
                        qDebug("Et on charge ses varietes");

                        for (unsigned int noVariete=0; lesVarietes.cardinal()>noVariete; noVariete++)
                        {
                            Variete uneVariete = lesVarietes.obtenirObjet(noVariete);
                            qDebug("Pour cette vairete");

                            lePDF.ecrireTexte(uneVariete.versChaine());
                            qDebug("On écrit son libelle sur le pdf");

                            CollLot lesLots = Passerelle::chargerLesLots(uneVariete.getId());
                            qDebug("Et on charge tous les lots de cette variete");

                            for (unsigned int noLot=0; lesLots.cardinal()>noLot; noLot++)
                            {
                                Lot unLot = lesLots.obtenirObjet(noLot);
                                qDebug("Pour ce lot");

                                lePDF.chargerImage(unLot.getImgVariete());
                                qDebug("On charge son image");
                                lePDF.ecrireTexte(unLot.versChaine());
                                qDebug("Et on écrit son détail");
                            }
                        }
                    }
                }
            }

           lePDF.imprimer();
           qDebug("lePDF.imprimer()");

       }




    return a.exec();
}
