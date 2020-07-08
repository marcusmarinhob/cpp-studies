#include <iostream>
#include <math.h>

using namespace std;

struct ponto {
    int x, y;
};

/** Definição da classe ******************************************/
class Circulo {
    float raio, area, circunf;
    ponto centro;

    public:
        Circulo();

        void calcArea (void);
        void calcCircunf (void);

        void setRaio (float);
        void setCentro (ponto);

        float getRaio (void);
        float getArea (void);
        float getCircunf (void);
        ponto getCentro (void);
};

/** Definição dos Métodos da classe Circulo ********************/
Circulo::Circulo() {
    // Inicialização dos valores no construtor
    raio = 0.0;
    area = 0.0;
    circunf = 0.0;
}





/** Main ******************************************************/
int main() {
    cout << "Hello" << endl;
    return 0;
}