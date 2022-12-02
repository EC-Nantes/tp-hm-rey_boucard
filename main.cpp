#include <stdio.h>
#include "Vehicule.hpp"

using namespace std;

int main() {

    printf("Hello, World!\n");

    Vehicule car(20, 5, 1);
    //car.accelerer(25);
    cout << car.getEtat() << endl;
    return 0;

}