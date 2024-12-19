//
// Created by navia on 19/12/2024.
//

#include "calculo.h"
#include <iostream>
#include <valarray>
void calculonumerico() {
    std::cout << "Calculo numerico ej4" << std::endl;
    std::valarray<double> valores = {1.0, 2.0, 3.0, 4.0, 5.0};
    std::cout << "Suma: " << valores.sum() << std::endl; //suma de los elementos del array
    std::cout << "Media: " << valores.sum() / valores.size() << std::endl;
//suma 5 a cada elemento del array
    valores += 5.0;
    std::cout << "Valores + 5.0: ";
    for(double valor : valores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;
    valores -= 5.0;
    std::cout << "Valores - 5.0: ";
    for(double valor : valores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    valores *= 5.0;
    std::cout << "Valores * 5.0: ";
    for(double valor : valores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    valores /= 5.0;
    std::cout << "Valores / 5.0: ";
    for(double valor : valores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;
}