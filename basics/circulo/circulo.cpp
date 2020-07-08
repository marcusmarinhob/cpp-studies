#include <iostream>
#include <math.h>

using namespace std;

struct ponto {
    int x, y;
};

class Circulo {
    float raio, area, circunf;
    ponto centro;

    public:
        Circulo();

        void calArea (void);
        void calcCircunf (void);

        void setRaio (float);
        void setCentro (ponto);

        float getRaio (void);
        float getArea (void);
        float getCircunf (void);
        ponto getCentro (void);
};

int main()
{
    cout << "Hello" << endl;
    return 0;
}