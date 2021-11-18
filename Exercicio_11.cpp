#include<iostream>
#define TAM_MAX  10

using namespace std; 

void matrizIndentidade(int mat[][TAM_MAX], int tam)
{
    for(int i=0; i<tam; i++)
    {
        for(int j=0;j<tam; j++)
        {
            if(i==j)
                mat[i][j] = 1; 
            else
                mat[i][j] = 0; 
        }
    }
}

void somaMatriz( int tam, int m1[][TAM_MAX], int m2[][TAM_MAX],int m3[][TAM_MAX])
{
    for(int i=0; i<tam; i++)
    {
        for(int j=0;j<tam; j++)
        {
            m3[i][j] = m1[i][j]+ m2[i][j];
        }
    }
}

//Não faço ideia se essa função tá funcionando
void multiplicaMatriz(int n, int m, int m1[][TAM_MAX], int m2[][TAM_MAX], int m3[][TAM_MAX])
{ 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            m3[i][j] = m1[i][j] * m2[i][j];
        }
    }
}

int main()
{
    int matriz[10][10];
    for(int i=0; i<10; i++)
    {
        for(int j=0;j<10;j++)
            cin>>matriz[i][j];
    }
    int matriz2[10][10];

    matrizIndentidade(matriz2, 10);

    int soma[10][10];
    somaMatriz(10, matriz, matriz2, soma);

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
            cout<<soma[i][j]<<" ";
        cout<<endl; 
    }

    multiplicaMatriz(10,10,matriz, matriz2, soma);

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
            cout<<soma[i][j]<<" ";
        cout<<endl; 
    }

}