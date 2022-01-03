#include"no.h"
#include"ListaEncad.h"
#include<iostream>

using namespace std;

ListaEncad::ListaEncad()
{
    primeiro = NULL;
}

ListaEncad::~ListaEncad()
{
    No *p = primeiro;
    while(p !=NULL)
    {
        No *t = p->getProx();
        delete p;

        p = t;
    }
}

void ListaEncad::insereInicio(int val)
{
    No *p = new No();

    p->setInfo(val);
    p->setProx(primeiro);

    primeiro = p;
}

bool ListaEncad::busca(int val)
{
    No *p = primeiro;
    while(p!=NULL)
    {
        if(p->getInfo()==val)
            return true;
        p = p->getProx();
    }

    return false;
}

//Exercicio 3
int ListaEncad::getComprimento()
{
    int f=0;
    No *p = primeiro;
    while(p!=NULL)
    {
       f++
       p = p->getProx();
    }

    return f;
}

int ListaEncad::contaMaiores(int val)
{
    int f=0;
    No *p = primeiro;
    while(p!=NULL)
    {
       if(p->getInfo() > val)
          f++
       p = p->getProx();
    }

    return f;
}


