#include "Livre.h"


Livre::Livre(string titre, unsigned int numen, string auteur):Document(titre, numen)
{
    this->auteur = auteur;
}

string Livre::getAuteur(){
    return this->auteur;
}

void Livre::setAuteur(string nomAuteur)
{
    this->auteur = nomAuteur;
}

void Livre::afficher(){
    Document::afficher();
    cout << " Auteur : " << this->auteur << " , ";
}


