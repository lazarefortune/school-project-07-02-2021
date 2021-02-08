#ifndef STOCKDOCUMENTS_H
#define STOCKDOCUMENTS_H
#include <iostream>
#include <string>
#include <vector>
#include "Document.h"

using namespace std;

class StockDocuments
{
    private:
        vector<Document*> collection;
    public:
        StockDocuments();
        // Autres méthodes
        void afficher();
        void ajouterDocument(Document &nouveauDoc);
        float fraisLivraison(float distance);
        virtual ~StockDocuments();



};

#endif // STOCKDOCUMENTS_H
