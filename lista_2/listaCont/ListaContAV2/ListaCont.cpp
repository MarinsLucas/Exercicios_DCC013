#include <iostream>
#include "ListaCont.h"

using namespace std;

ListaCont::ListaCont(int tam)
{
    max = tam;
    n=0;
    vet = new int[max];
}

ListaCont::~ListaCont()
{
    delete [] vet;
}

int ListaCont::get(int k)
{
    if(k>=0 && k<n)
        return vet[k];
    else
    {
        cout<<"Indice invalido" <<endl;
        exit(1);
    }
}

void ListaCont::set(int k, int val)
{
    if(k>=0 && k<n)
        vet[k] = val;
     else
    {
        cout<<"Indice invalido" <<endl;
        exit(2);
    }
}

void ListaCont::insereFinal(int val)
{
    if(n==max)
    {
        cout<<"Vetor Cheio!" <<endl;
        exit(3);
    }
    vet[n]= val;
    n++;
}

void ListaCont::removeFinal()
{
    if(n==0)
    {
        cout<<"Lista Vazia!" <<endl;
        exit(6);
    }
    n--;
}

void ListaCont::insereK(int k, int val)
{
    if(n==max)
    {
        cout<<"Vetor Cheio" <<endl;
        exit(3);
    }
    if(k>=0 && k<n)
    {
        for(int i = n-1; i>=k;i--) //repetição que vai da maior posição até a posição escolhida
            vet[i+1] = vet[i];

        vet[k] = val;
        n=n++;
    }
     else
    {
        cout<<"Indice invalido" <<endl;
        exit(4);
    }
}

void ListaCont::removeK(int k)
{
    if(k>=0 && k<n)
    {
        for(int i = k; i< n-1;i++)
            vet[i] = vet[i+1];

        n--;
    }
     else
    {
        cout<<"Indice invalido" <<endl;
        exit(5);
    }
}

//Exercício 1 da Lista
bool ListaCont::troca(int posicao1, int posicao2)
{
    if((posicao1>=0 && posicao1<n) && (posicao2>=0 && posicao2<n))
    {
        int aux;
        aux = vet[posicao1];
        vet[posicao1] = vet[posicao2];
        vet[posicao2] = aux;
        return true;
    }
    else
    {
        cout<<"Indices invalidos" <<endl;
        return false;
    }
}

//Exercício 2 da Lista
bool ListaCont::aumentaCapacidade(int novoMax);
{
    if(novoMax<max)
    {
        int *aux = new int[novoMax];
        for(int i=0;i<n;i++)
            aux[i] = vet [i];
        delete [] vet;

        vet = aux;

        return true;
    }
    else
    {
        cout<<"Novo limite inválido"<<endl;
        return false;
    }
}




