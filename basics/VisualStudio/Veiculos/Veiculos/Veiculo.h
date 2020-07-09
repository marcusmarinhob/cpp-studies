#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>
#include <string.h>

using namespace std;

class Veiculo {
    int motor;
    int numero_de_rodas;

    public:
        Veiculo();

        void setRodas(int);
        int getRodas(void);
};

#endif