#ifndef AUTOMOVEL_H
#define AUTOMOVEL_H

#include "Veiculo.h"

class Automovel:public Veiculo {
    string tipo;

    public:
        Automovel();

        void setTipo(string);
        string getTipo(void);
};

#endif