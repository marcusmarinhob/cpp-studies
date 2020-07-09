#include "Veiculo.h"

Veiculo::Veiculo(){
    numero_de_rodas = 0;
    motor = 0;
}

void Veiculo::setRodas(int n){
    numero_de_rodas = n;
}

int Veiculo::getRodas(void){
    return numero_de_rodas;
}