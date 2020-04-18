// Project3_Cours2_Jour4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Pneu.h"
#include "Usine.h"
#include "Voiture.h"
#include "Camion.h"

/*
- Lister les véhicules
// mettez v1 & c1 dans vector Vehicules => parcours le vector et afficher le détail
// afficher le détail si c'est un camion ou une voiture
pneu de camion taille =5
pneu de voiture taille = 1
*/

int main()
{
    //pneus camion 8
    vector<shared_ptr<Pneu>> vpc;
    for (int i = 0; i < 8; ++i)
    {
        shared_ptr<Pneu> pPneuCamion = Usine::CreateObject(TypePneu::camion);
        vpc.push_back(pPneuCamion);
    }
    
    // pneus voiture 4
    vector<shared_ptr<Pneu>> vpv;
    for (int i = 0; i < 4; ++i)
    {
        shared_ptr<Pneu> pPneuVoiture = Usine::CreateObject(TypePneu::voiture);
        vpv.push_back(pPneuVoiture);
    }

    Voiture v1;
    v1.Monter(vpv);
    v1.Info();

    Camion c1;
    c1.Monter(vpc);
    c1.Info();

    vector<Vehicule*> vV;
    vV.push_back(&v1);
    vV.push_back(&c1);
    for (Vehicule* ptr : vV)
    {
        ptr->Info();
    }
}

