#include "contenedores.h"
#include <iostream>
#include <list>
#include <stack>

void contentenedor(){
    std::list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::stack<float, std::list<float>> pila(lista);
    std::stack<float, std::list<float>> tempPila = pila;
    while(!tempPila.empty()) {
        std::cout << tempPila.top() << std::endl;
        tempPila.pop();
    }

    pila.push(6.6);
    std::cout << "top de la pila: " << pila.top() << std::endl;
    pila.pop();
    std::cout << "top de la pila: " << pila.top() << std::endl;

    while (!pila.empty()) {
        std::cout << pila.top() << std::endl;
        pila.pop();
    }
}
