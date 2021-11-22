#include<iostream>

using namespace std; 

float *alocaVetorF(int n);
double *alocaVetorD(int n);

int main()
{
    float *vet;
    double *vetDouble;
    vet = alocaVetorF(100);
    vetDouble = alocaVetorD(1000);
}

double *alocaVetorD(int n)
{
    double *vetor = new double[n];
    for(int i=0;i<n;i++)
    {
        vetor[i] = 0;
    }

    return vetor;
}
float *alocaVetorF(int n)
{
    float *vet = new float[n];
    for(int i=0;i<n;i++)
    {
        vet[i] = 0;
    }

    return vet;
}