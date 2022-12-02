/*
 * Vehicule.cpp
 *
 *  Created on: 02 dec. 2022
 *      Author: REY Maxime, BOUCARD Romain
 */


#include "Vehicule.hpp"

Vehicule::Vehicule(int vitesseMax=0, int nbPlaces=1, int occupants=0){
    this->vitesseMax_ = vitesseMax;
    this->nbPlaces_ = nbPlaces;
    this->occupants_ = occupants;
    this->etat_ = ARRET;
    this->vitesse_ = 0;
}

void Vehicule::demarrer(){
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
    this->vitesse_ += increment;
}

void Vehicule::monter(int nbOcc){
    
}

void Vehicule::descendre(int nbOcc){
    
}

void Vehicule::mettreEnPanne(double random){
    
}