#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <iostream>
#include <string>

using namespace std;

class Document
{
    protected:
        string titre;
        unsigned int numen;
        float prix_fixe = 2;
        float prix_unitaire = 0.05;

    public:
        Document(string titre, unsigned int numen);
        // Getters
        string getTitre();
        unsigned int getNumen();
        float getPrixFixe();
        float getPrixUnitaire();
        // Setters
        void setTitre(string titre);
        void setNumen(unsigned int numen);
        void setPrixFixe(float prix_fixe);
        void setPrixUnitaire(float prix_unitaire);
        // Autres methodes
        virtual void afficher();
        virtual float fraisLivraison(float distance);
};

#endif // DOCUMENT_H
