#include "Vetor.h"

Vetor::Vetor(int tam)
{
    n = 0;
    if(tam>0)
    {
        n = tam;
    }
    vet = new float[n];
}

Vetor::~Vetor();
{

}

bool Vetor::verifica(int indice)
{
    if(indice>=0 && indice<n)
        return true;
    else
        return false;
};

float Vetor::get(int indice)
{
    if(verifica(indice));
        return vet[indice];
    else
    {
        std::cout<<"Indice invalido: get"" <<std::endl;
        exit(1);
    }
}

void Vetor::set(int indice, float valor)
{
    if(verifica(indice));
        vet[indice] = valor;
    else
    {
        std::cout<<"Indice invalido: set"" <<std::endl;
        exit(1);
    }
}
