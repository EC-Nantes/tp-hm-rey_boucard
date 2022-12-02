/*
 * Vehicule.cpp
 *
 *  Created on: 02 dec. 2022
 *      Author: REY Maxime, BOUCARD Romain
 */


#include "Vehicule.hpp"
#include <stdexcept>

using namespace std;

Vehicule::Vehicule(int vitesseMax, int nbPlaces, int occupants){
    this->vitesseMax_ = vitesseMax;
    this->nbPlaces_ = nbPlaces;
    this->occupants_ = occupants;
    this->etat_ = ARRET;
    this->vitesse_ = 0;
}

void Vehicule::demarrer(){
	if (this->etat_ == MARCHE){
		throw invalid_argument ("Vehicule deja en fonctionnement");
	}
	if (this->etat_ == PANNE_LEGERE || this->etat_ == PANNE_SEVERE){
        throw invalid_argument ("Vehicule en panne");
	}
    this->etat_ = MARCHE;
    this->vitesse_ += 1;
}

void Vehicule::arreter(){
    this->etat_ = ARRET;
    this->vitesse_ = 0;
}

void Vehicule::depanner(){
    this->etat_ = MARCHE;
    this->vitesse_ += 1;
}

void Vehicule::accelerer(int increment){
	if((this->vitesse_ + increment)>this->vitesseMax_){
		throw invalid_argument("Vitesse maximum depassee");
	}
	if((this->vitesse_ + increment) < 0){
		throw invalid_argument("Deceleration trop importante");
	}
	this->vitesse_ += increment;

}

void Vehicule::monter(int nbOcc){

	if((this->occupants_ + nbOcc)>this->nbPlaces_){
        throw invalid_argument("Places insuffisantes");
	}
	this->occupants_ += nbOcc;
}

void Vehicule::descendre(int nbOcc){
	if((this->occupants_ + nbOcc)<0){
        throw invalid_argument("Plus personne dans la voiture");
	}
    this->occupants_ -= nbOcc;
}

void Vehicule::mettreEnPanne(double random){
    if (random < 0.5){
        this->etat_ = PANNE_LEGERE;
    }else{
        this->etat_ = PANNE_SEVERE;
    }
    this->vitesse_ = 0;
}

string Vehicule::getEtat() const{
    string etat;
    switch (this->etat_)
    {
    case ARRET:
        etat = "Arret";
        break;
    case MARCHE:
        etat = "Marche";
        break;
    case PANNE_LEGERE:
        etat = "Panne_legere";
        break;
    case PANNE_SEVERE:
        etat = "Panne_severe";
        break;
    default:
        etat = "Error";
        break;
    }
    return etat;
}

Vehicule::~Vehicule(){

}
