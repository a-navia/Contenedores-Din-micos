#include "algoritmos.h"
#include <iostream>
#include <vector>
#include <algorithm>

void algoritmos() {
    std::cout << "Algoritmos ej3" << std::endl;
    //vector dinamico
    std::cout<<"vector"<<std::endl;
    std::vector<int> numeros = {50, 20, 60, 10, 30, 40};
    //recorrido de vector
    for(int num : numeros) {
        std::cout << num << std::endl;
    }
    //ordenar vector
    std::sort(numeros.begin(), numeros.end());
    //buscar maximo
    int maxNum = *std::max_element(numeros.begin(), numeros.end());
    std::cout << "Maximo: " << maxNum << std::endl;
}