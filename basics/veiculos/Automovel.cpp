#include "Automovel.h"

Automovel::Automovel(){
    tipo= "";
    setRodas(4);
}

void Automovel::setTipo(string t){
    tipo = t;
}

string Automovel::getTipo(void){
    return tipo;
}