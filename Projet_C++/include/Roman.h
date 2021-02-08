#ifndef ROMAN_H
#define ROMAN_H
#include "Livre.h"

class Roman : public Livre
{
    protected:
        unsigned int nbPrix;

    public:
        Roman(string titre,unsigned int numen, string auteur, unsigned int nbPrix);
        int getPrixLitteraire();
        void setPrixLitteraire(unsigned int nbPrix_saisie);
        void afficher();

};

#endif // ROMAN_H
