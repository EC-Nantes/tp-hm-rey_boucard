//
//  VoitureAmphibie.hpp
//  TP_HM_Exc
//

#ifndef VoitureAmphibie_hpp
#define VoitureAmphibie_hpp

#include <stdexcept>
#include <iostream>
#include "Voiture.hpp"
#include "Bateau.hpp"

using namespace std;

class VoitureAmphibie : public Voiture, public Bateau
{
public:
    VoitureAmphibie(int _vitesseMax=0, int _nbPlaces=1, int _occupants=0);
    void demarrer();
    void arreter();
};

#endif /* VoitureAmphibie_hpp */