//
// Created by navia on 19/12/2024.
//
#include "usoLambda.h"
#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>

void usoLambda() {
    std::cout << "Uso de lambda ej5" << std::endl;
    auto cuadrado = [](int num) { return num * num; };

    std::cout << "Cuadrado de 5: " << cuadrado(5) << std::endl;

    auto numeros= std::vector<int>{1, 2, 3, 4, 5};
    std::for_each(numeros.begin(), numeros.end(), [](int num) {
        std::cout << num << "";
    });
    std::cout << std::endl;

    std::for_each(numeros.begin(), numeros.end(), [&cuadrado](int num) {
        std::cout << cuadrado(num) << " ";
    });
    std::cout << std::endl;

    auto ptr = std::make_shared<int>(10);
    std::cout << "Valor apuntado por ptr: " << *ptr << std::endl;

}
