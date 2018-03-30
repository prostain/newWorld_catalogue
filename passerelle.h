#ifndef PASSERELLE_H
<<<<<<< HEAD
#define PASSERELLE_H

#include <iostream>
#include <QString>
#include "collEquipement.h"
#include "equipement.h"
#include "collBatVoyageur.h"
#include "bateauVoyageur.h"
#include "jeuEnregistrement.h"

using namespace std;


class Passerelle {
 public : //à portée de classe (statique);

    static CollEquipement chargerLesEquipements(QString unIdBateau);// Retourne la collection des Equipements du bateau dont l'identifiant est passé en paramètre.;

    static CollBateauVoyageur chargerLesBateauxVoyageurs();// Instancie et retourne une collection d’objets de la classe BateauVoyageur, à partir des
                                                              // données lues dans la base de données "dbBat". Cette méthode instancie également
                                                              // la collection lesEquipements de chaque objet de la classe BateauVoyageur.
};

#endif


#endif // PASSERELLE_H
=======
    #define PASSERELLE_H

#include <iostream>
#include "coll.h"
#include "collProduit.h"
#include "collVariete.h"
#include <QString>

using namespace std;
class Passerelle
{
public:
    static ColEquipement chargerLesRayons();
    static ColBateauVoyageur chargerLesProduits();
};

#endif
>>>>>>> 14b7184ff94b7df253e80c6a7ee277437646b986
