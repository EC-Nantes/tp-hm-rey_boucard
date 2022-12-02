//
//  Voiture.hpp
//  TP_HM_Exc
//

#ifndef Voiture_hpp
#define Voiture_hpp

#include <stdexcept>
#include <iostream>
#include "Vehicule.hpp"

using namespace std;

class Voiture : public virtual Vehicule
{
public:
    Voiture(int _vitesseMax=0, int _nbPlaces=1, int _occupants=0);
    void demarrer();
    void arreter();
};

#endif /* Voiture_hpp */