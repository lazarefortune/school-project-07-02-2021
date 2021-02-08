#include "StockDocuments.h"

StockDocuments::StockDocuments()
{
    this->collection = {};
}

void StockDocuments::ajouterDocument(Document &nouveauDoc){
    this->collection.push_back(&nouveauDoc);
}

float StockDocuments::fraisLivraison(float distance)
{
    float total = 0;
    for(unsigned int i = 0; i< this->collection.size(); i++){
        total += this->collection[i]->fraisLivraison(distance);
    }
    return total;
}

void StockDocuments::afficher(){
    for(unsigned int i = 0; i< this->collection.size(); i++){
        this->collection[i]->afficher();
    }
}

StockDocuments::~StockDocuments()
{
    //dtor
}
