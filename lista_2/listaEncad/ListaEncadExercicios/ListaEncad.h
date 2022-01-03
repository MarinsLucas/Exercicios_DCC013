#ifndef LISTAENCAD_H_INCLUDED
#define LISTAENCAD_H_INCLUDED
#include"no.h"

class ListaEncad
{
public:
    ListaEncad();
    ~ListaEncad();

    void insereInicio(int val);
    bool busca(int val);
    //Exercicio 3
    int getComprimento();

    //Exercicio 4
    int contaMaiores(int val);

    //Exercicio 5
    //void insereOrdenado(int val) [NAO VOU IMPLEMENTAR PARA NÃO SACANEAR TODO O TAD]

private:
    No* primeiro;
};

#endif // LISTAENCAD_H_INCLUDED
