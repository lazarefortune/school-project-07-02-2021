#include "Manuel.h"

Manuel::Manuel(string titre, unsigned int numen,string auteur, unsigned int niveau):Livre(titre, numen, auteur)
{
    this->niveauScolaire = niveau;
}

int Manuel::getNiveauScolaire(){
    return this->niveauScolaire;
}

void Manuel::setNiveauScolaire(unsigned int niveau)
{
    this->niveauScolaire = niveau;
}

void Manuel::afficher()
{
    cout << " Manuel : ";
    Livre::afficher();
    cout << " Niveau : " << this->niveauScolaire << endl;
}


