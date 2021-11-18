#include<iostream>

using namespace std; 

void zeraVetor(int vet[], int tam){
    for(int i=0;i<tam;i++)
    {
        vet[i] = 0;
    }
    return;
}

void insereValor(int vet[], int tam, int valor, int pos)
{
    if(pos>=tam)
    {
        cout<< "Posicao invalida"<<endl;
        return;
    }
    vet[pos] = valor; 
    return; 
}

void excluiValor(int vet[], int tam, int pos)
{
    if(pos>=tam)
    {
        cout<< "Posicao invalida"<<endl;
        return;
    }
    vet[pos] = 0; 
    return; 
}

int maiorElemento(int vet[], int tam)
{
    int maior = -2147483648; 
    for(int i=0;i<tam;i++)
    {
        if(vet[i]>maior)
            maior = vet[i];
    }
    return maior; 
}

float calcMedia(int vet[], int tam)
{
    float media = 0; 
    for(int i=0;i<tam;i++)
    {
        media += vet[i];
    }
    media = media/tam;
    return media; 
}

bool procuraValor(int vet[], int tam, int valor)
{
    for(int i=0;i<tam;i++)
    {
        if(vet[i]==valor)
        {
            return true; 
        }
    }
    return false; 
}

int main()
{
    int *vet = new int[50];
    int val, pos;
    zeraVetor(vet, 50);
    cout<<"Digite valor para adicionar no vetor"<<endl;
    cin>>val; 
    cout<<"Digite posição para adicionar o valor digitado anterior (menor do que 50)"<< endl;
    cin>>pos; 
    insereValor(vet, 50, val, pos);
    cout<<"Digite posição para excluir do vetor (menor do que 50)"<< endl;
    cin>>pos; 
    excluiValor(vet, 50, pos);
    int maior = maiorElemento(vet, 50);
    cout<<"O maior valor do vetor é "<<maior<<endl; 
    float media = calcMedia(vet, 50);
    cout<<"A media dos valores do vetor é "<<media<<endl; 
    cout<<"Digite o valor para procurar no vetor"<<endl; 
    cin>>val; 
    bool tem = procuraValor(vet, 50, val);
    if(tem)
        cout<<"tem"<<endl; 
    else
        cout<<"nn tem"<<endl; 
}