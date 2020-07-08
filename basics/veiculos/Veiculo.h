#ifndef VEICULO_H
#define VEICULO_H

class Veiculo {
    int motor;
    int numero_de_rodas;

    public:
        Veiculo();

        void setRodas(int);
        int getRodas(void);
};

#endif