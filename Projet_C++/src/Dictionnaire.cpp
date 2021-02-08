#include "Dictionnaire.h"

Dictionnaire::Dictionnaire(string titre , unsigned int numen, string langue):Document(titre, numen)
{
    this->langue = langue;
}
// GETTERS
string Dictionnaire::getLangue(){
    return this->langue;
}

float Dictionnaire::getPrixParticulier()
{
    return this->prix_particulier;
}
// SETTERS
void Dictionnaire::setLangue(string langue)
{
    this->langue = langue;
}

void Dictionnaire::setPrixParticulier(float prix_particulier)
{
    this->prix_particulier = prix_particulier;
}

// AUTRES METHODES
void Dictionnaire::afficher(){
    cout << " Dictionnaire : ";
    Document::afficher();
    cout << " Langue : " << this->langue << endl;
}

float Dictionnaire::fraisLivraison(float distance){
    float total = Document::fraisLivraison(distance) + this->prix_particulier;
    return total;
}


