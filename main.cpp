#include <stdio.h>
#include "Vehicule.hpp"

using namespace std;

int main() {

    printf("Hello, World!\n");

    Vehicule car(50, 5, 1);
    car.demarrer();
    cout << car.getEtat() << endl;
    try {
        car.accelerer(40);
    } catch (invalid_argument const& ex){
        cout << "#1:" << ex.what() << endl;
    }
    cout << car.getEtat() << endl;
    try {
        car.accelerer(10);
    } catch (invalid_argument const& ex){
        cout << "#1:" << ex.what() << endl;
    }
    return 0;

}