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

void Circulo::calcArea (void){
    area = 3.1415 * pow(raio, 2);
}

void Circulo::calcCircunf (void){
    circunf = 2 * 3.1415 * raio;
}

void Circulo::setRaio (float r) {
    raio = r;
}

void Circulo::setCentro (ponto p) {
    centro = p;
}

float Circulo::getRaio (void) {
    return raio;
}

float Circulo::getArea (void) {
    return area;
}

float Circulo::getCircunf (void) {
    return circunf;
}

ponto Circulo::getCentro (void){
    return centro;
}



/** Main ******************************************************/
int main() {
    ponto centro;
    Circulo circ;

    centro.x = 4;
    centro.y = 2;

    cout << endl;
    cout << "*************** " << endl;
    cout << "*   Circulo   *"  << endl;
    cout << "*************** " << endl;

    circ.setCentro(centro) ;
    circ.setRaio(2);

    circ.calcArea();
    circ.calcCircunf();

    cout << "Centro:   ("<< circ.getCentro().x << "," << circ.getCentro().y << ")" << endl;
    cout << "Raio:     " << circ.getRaio() << endl;
    cout << "Area:     " << circ.getArea() << endl;
    cout << "Circunf.: " << circ.getCircunf() << endl;

    cout << endl;

    return 0;
}