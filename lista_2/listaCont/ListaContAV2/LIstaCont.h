#ifndef LISTACONT_H_INCLUDED
#define LISTACONT_H_INCLUDED

class ListaCont
{
public:
    ListaCont(int tam);
    ~ListaCont();

    int get(int k);
    void set(int k, int val);
    void insereFinal(int val);
    void removeFinal();
    void insereK(int k, int val);
    void removeK(int k);

    //Exercicio 1 da apostila de atividades
    bool troca(int posicao1, int posicao2);

    //Exercicio 2 da apostila de atividades
    //bool aumentaCapacidade(int novoMax);

private:
    int max;  //capacidade máxima de elementos
    int n; //quant de nós da lista
    int *vet; //vetor que armazena a lista
};

#endif // LISTACONT_H_INCLUDED
