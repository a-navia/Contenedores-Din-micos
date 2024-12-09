#ifndef VECITERADORES_H
#define VECITERADORES_H

#include <vector>

class vecIteradores {
public:
    static void vectorIteradores();
private:
    std::vector<int> numeros;
    std::vector<int>::iterator it;
};

#endif // VECITERADORES_H