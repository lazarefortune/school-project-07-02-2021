#include "Roman.h"


Roman::Roman(string titre, unsigned int numen, string auteur, unsigned int nbPrix):Livre(titre, numen, auteur)
{
    this->nbPrix = nbPrix;
}

int Roman::getPrixLitteraire(){
    return this->nbPrix;
}

void Roman::setPrixLitteraire(unsigned int nbPrix_saisie){
    this->nbPrix = nbPrix_saisie;
}

void Roman::afficher(){
    cout << " Roman : ";
    Livre::afficher();
    cout << " NbPrix : " << this->nbPrix << endl;
}


