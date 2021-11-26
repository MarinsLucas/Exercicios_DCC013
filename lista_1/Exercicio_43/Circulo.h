#ifndef Circulo_H_INCLUDED
#define Circulo_H_INCLUDED
#include "Ponto2D.h"
class Circulo
{
    private:
        Ponto2D *centro; 
        float raio;  
    public:
        Circulo(Ponto2D a, float r);
        ~Circulo();
        imprimeCoord();
        imprimeRaio();
        Calc2P();
};

#endif