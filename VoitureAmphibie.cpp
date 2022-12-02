/*
 * VoitureAmphibie.cpp
 *
 *  Created on: 02 dec. 2022
 *      Author: REY Maxime, BOUCARD Romain
 */


#include "VoitureAmphibie.hpp"
#include <stdexcept>

using namespace std;

VoitureAmphibie::VoitureAmphibie(int _vitesseMax, int _nbPlaces, int _occupants):Voiture(_vitesseMax, _nbPlaces, _occupants),Bateau(_vitesseMax, _nbPlaces, _occupants){
    
}
