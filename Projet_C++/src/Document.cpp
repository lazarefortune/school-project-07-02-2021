#include "Document.h"

Document::Document(string titre,unsigned int numen)
{
    this->titre = titre;
    this->numen = numen;
}
// GETTERS
string Document::getTitre(){
    return this->titre;
}

unsigned int Document::getNumen()
{
    return this->numen;
}

float Document::getPrixFixe(){
    return this->prix_fixe;
}

float Document::getPrixUnitaire()
{
    return this->prix_unitaire;
}
// SETTERS
void Document::setTitre(string titre)
{
    this->titre = titre;
}

void Document::setNumen(unsigned int numen)
{
    this->numen = numen;
}

void Document::setPrixFixe(float prix_fixe)
{
    this->prix_fixe = prix_fixe;
}

void Document::setPrixUnitaire(float prix_unitaire)
{
    this->prix_unitaire = prix_unitaire;
}
// AUTRES METHODES
void Document::afficher(){
    cout << "Titre : " << this->titre << " , " << " numen : " << this->numen << " , ";
}

float Document::fraisLivraison(float distance){
    float total = this->prix_fixe + this->prix_unitaire*distance;
    return total;
}

