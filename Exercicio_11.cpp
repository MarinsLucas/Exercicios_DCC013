#include<iostream>

using namespace std; 

void matrizIndentidade(int mat[][], int tam)
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

void somaMatriz( int tam, int m1[][], int m2[][],int m3[][])
{
    for(int i=0; i<tam; i++)
    {
        for(int j=0;j<tam; j++)
        {
            m3[i][j] = m1[i][j]+ m2[i][j];
        }
    }
}

void 