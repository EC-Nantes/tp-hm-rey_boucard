/*
 * Voiture.cpp
 *
 *  Created on: 02 dec. 2022
 *      Author: REY Maxime, BOUCARD Romain
 */


#include "Voiture.hpp"
#include <stdexcept>

using namespace std;

Voiture::Voiture(int _vitesseMax, int _nbPlaces, int _occupants):Vehicule(_vitesseMax, _nbPlaces, _occupants){
    
}

void Voiture::demarrer(){
    if (this->etat_ == MARCHE){
		throw invalid_argument ("Vehicule deja en fonctionnement");
	}
	if (this->etat_ == PANNE_LEGERE || this->etat_ == PANNE_SEVERE){
        throw invalid_argument ("Vehicule en panne");
	}
    this->etat_ = MARCHE;
    this->vitesse_ += 1;
    cout << "Demarrage d'une voiture" << endl;
}

void Voiture::arreter(){
    this->etat_ = ARRET;
    this->vitesse_ = 0;
    cout << "Arret d'une voiture" << endl;
}