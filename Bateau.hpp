//
//  Bateau.hpp
//  TP_HM_Exc
//

#ifndef Bateau_hpp
#define Bateau_hpp

#include <stdexcept>
#include <iostream>
#include "Vehicule.hpp"

using namespace std;

class Bateau : public virtual Vehicule
{
public:
    Bateau(int _vitesseMax=0, int _nbPlaces=1, int _occupants=0);
    void demarrer();
    void arreter();
};

#endif /* Bateau_hpp */