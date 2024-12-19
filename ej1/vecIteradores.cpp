#include "vecIteradores.h"
#include <iostream>
#include <vector>

void vecIteradores::vectorIteradores() {
std::cout << "Contenedor secuencia ej1" << std::endl;

    std::vector<int> numeros;
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);
    numeros.push_back(40);
    numeros.push_back(50);

    std::vector<int>::iterator it;
    for (it = numeros.begin(); it != numeros.end(); ++it) {
        std::cout << *it << std::endl;
    }
}