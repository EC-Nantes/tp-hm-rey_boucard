#include <stdio.h>
#include "Vehicule.hpp"
#include "Voiture.hpp"
#include "Bateau.hpp"

using namespace std;

int main() {

    printf("Hello, World!\n");

    Vehicule car(50, 5, 0);
    car.demarrer();
    car.monter(3);
    cout << car.getEtat() << endl;
    try {
        car.accelerer(60);
    } catch (invalid_argument const& ex){
        cout << "#1:" << ex.what() << endl;
    }
    try {
        car.accelerer(-25);
    } catch (invalid_argument const& ex){
        cout << "#2:" << ex.what() << endl;
    }
    try {
        car.demarrer();
    } catch (invalid_argument const& ex){
        cout << "#3:" << ex.what() << endl;
    }
    try {
        car.monter(4);
    } catch (invalid_argument const& ex){
        cout << "#4:" << ex.what() << endl;
    }
    try {
        car.descendre(4);
    } catch (invalid_argument const& ex){
        cout << "#5:" << ex.what() << endl;
    }

    Voiture fefe(50, 5, 0);
    fefe.demarrer();
    cout << fefe.getEtat() << endl;
    Bateau yacht(50, 5, 0);
    yacht.demarrer();
    cout << yacht.getEtat() << endl;
    
    yacht.arreter();
    cout << yacht.getEtat() << endl;
    
    yacht.mettreEnPanne(0.2);
    cout << yacht.getEtat() << endl;
    fefe.mettreEnPanne(0.8);
    cout << fefe.getEtat() << endl;
    return 0;

}