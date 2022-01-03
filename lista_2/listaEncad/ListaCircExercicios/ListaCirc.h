#ifndef LISTACIRC_H_INCLUDED
#define LISTACIRC_H_INCLUDED

class ListaCirc
{
public:
    ListaDupla();
    ~ListaDupla();
    bool busca(int val);
    void insereInicio(int val);
    void removeInicio();
    void insereFinal(int val);
    void removeFinal();

private:
    int n;
    NoDuplo* primeiro;
    NoDuplo* ultimo;
};

#endif // LISTACIRC_H_INCLUDED
