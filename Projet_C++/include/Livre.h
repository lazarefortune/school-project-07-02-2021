#ifndef LIVRE_H
#define LIVRE_H
#include "Document.h"


class Livre : public Document
{
    protected:
        string auteur;

    public:
        Livre(string titre , unsigned int numen, string auteur);
        string getAuteur();
        void setAuteur(string nomAuteur);
        void afficher();

};

#endif // LIVRE_H
