#include<iostream>
#include"Circulo.h"
#include"Ponto2D.h"

using namespace std; 

Circulo::Circulo(Ponto2D a, float r)
{
    Ponto2D centro(a.getX(), a.getY());
    raio = r; 
}

Circulo::~Circulo(){}

void Circulo::imprimeCoord()
{
    cout<<"Imprimindo as coordenadas do centro: X = "<<centro->getX()<<" Y = "<<centro->getY()<<endl;  
}

void Circulo::imprimeRaio()
{
    cout<<"Raio do circulo = "<<raio<<endl;
}

float Circulo::Calc2P()
{
    return 2*3.14159*raio; 
}


