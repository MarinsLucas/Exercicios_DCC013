#include <iostream>
#include <cstdlib>
#include "Ponto.h"
#include "ListaCont.h"

using namespace std;

ListaCont::ListaCont(int tam)
{
    cout << "Criando objeto ListaCont" << endl;
    max = tam;
    n = 0;
    vet = new int[max];
}

ListaCont::~ListaCont()
{
    cout << "Destruindo objeto ListaCont" << endl;
    delete [] vet;
}

int ListaCont::get(int k)
{
    if(k >= 0 && k < n)
        return vet[k];
    else
    {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
}

void ListaCont::set(int k, int val)
{
    if(k >= 0 && k < n)
        vet[k] = val;
    else
    {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
}

void ListaCont::insereFinal(int val)
{
    if(n == max)
    {
        cout << "ERRO: Vetor Cheio!" << endl;
        exit(1);
    }
    vet[n] = val;
    n = n + 1;
}

void ListaCont::removeFinal()
{
    if(n == 0)
    {
        cout << "ERRO: Lista Vazia!" << endl;
        exit(1);
    }
    n = n - 1;
}

void ListaCont::insereK(int k, int val)
{
    if(n == max)
    {
        cout << "ERRO: Vetor Cheio!" << endl;
        exit(1);
    }
    if(k >= 0 && k < n)
    {
        for(int i = n-1; i >= k; i--)
            vet[i+1] = vet[i];
        vet[k] = val;
        n = n + 1;
    }
    else
    {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
}

void ListaCont::removeK(int k)
{
    if(k >= 0 && k < n)
    {
        for(int i = k; i < n-1; i++)
            vet[i] = vet[i+1];
        n = n - 1;
    }
    else
    {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
}

void ListaCont::insereInicio(int val)
{
    if(n == 0)
    {   //lista vazia. Sera o unico no da lista
        vet[n] = val;
        n = n + 1;
    }
    else
        insereK(0, val);
}

void ListaCont::removeInicio()
{
    removeK(0);
}

void ListaCont::imprime()
{
    for(int i=0;i<n;i++)
    {
        cout<<vet[i]<<" ";
    }
}

ListaCont* ListaCont::retornaPares()
{
    int i, j = 0;  //vari�veis para contagem
    int *vetAux = new int[n]; //criando um vetor auxiliar com n posi��es (do mesmo tamanho da lista)

    //procurando por pares
    for(i=0;i<n;i++)
    {
        if(vet[i]%2==0)
        {
            vetAux[j] = vet[i];
            for(int k = i; k < n-1; k++)  //caso haja par, retiramos da lista original e copiamos ele para o vetor auxiliar
                vet[k] = vet[k+1];
            n = n - 1;
            j++;
        }
    }
    if(j==0)
        return NULL; //n�o havendo nenhum par, retorna-se NULL

    ListaCont *l = new ListaCont(j);//criamos ponteiro que aponta para uma nova lista

    for(i=0; i<j; i++)
        l->insereFinal(vetAux[i]); //inserimos todos os elementos pares


    delete [] vetAux;

    return l;
}


