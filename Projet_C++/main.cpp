#include <iostream>
#include <string>
#include "Document.h"
#include "Livre.h"
#include "Dictionnaire.h"
#include "Roman.h"
#include "Manuel.h"
#include "StockDocuments.h"

using namespace std;

int main()
{
    // DISTANCE A PARCOURIR
    const float DISTANCE  = 20;

    // Création des documents
    Manuel manu1("Dissertation et methodes", 234, "Rochefort et Dalie" , 2);
    Dictionnaire dic1("Larousse anglais", 456 ,  "anglais");
    Roman rm1("Les contemplations", 765, "Victor Hugo", 8);

    // Création du stock de Documents et ajout des documents
    StockDocuments collection;

    collection.ajouterDocument(manu1);
    collection.ajouterDocument(dic1);
    collection.ajouterDocument(rm1);

    // Affichage
    cout << "---------------------------------------------------------------------------" <<endl;
    collection.afficher();
    cout << "---------------------------------------------------------------------------" <<endl;
    cout << "Frais de Livraison pour une distance de " << DISTANCE << "km est : " << collection.fraisLivraison(DISTANCE) << " Euros" << endl;

    return 0;
}
