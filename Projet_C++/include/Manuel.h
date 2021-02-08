#ifndef MANUEL_H
#define MANUEL_H
#include "Livre.h"

class Manuel : public Livre
{
    protected:
        unsigned int niveauScolaire;

    public:
        Manuel(string titre, unsigned int numen, string auteur, unsigned int niveau);
        int getNiveauScolaire();
        void setNiveauScolaire(unsigned int niveau);
        void afficher();


};

#endif // MANUEL_H
