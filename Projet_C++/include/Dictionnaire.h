#ifndef DICTIONNAIRE_H
#define DICTIONNAIRE_H
#include "Document.h"

class Dictionnaire : public Document
{
    protected:
        string langue;
        float prix_particulier = 10;

    public:
        Dictionnaire(string titre , unsigned int numen, string langue);
        // getters
        string getLangue();
        float getPrixParticulier();
        // setters
        void setLangue(string langue);
        void setPrixParticulier(float prix_particulier);
        // autres methodes
        void afficher();
        float fraisLivraison(float distance);


};

#endif // DICTIONNAIRE_H
