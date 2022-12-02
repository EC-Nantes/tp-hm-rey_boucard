/*
 * Vehicule.cpp
 *
 *  Created on: 02 dec. 2022
 *      Author: REY Maxime, BOUCARD Romain
 */


#include "Vehicule.hpp"

Vehicule::Vehicule(int vitesseMax, int nbPlaces, int occupants){
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
    this->occupants_ += nbOcc;
}

void Vehicule::descendre(int nbOcc){
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