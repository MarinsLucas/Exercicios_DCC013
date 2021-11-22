#include<iostream>

using namespace std; 

void preencheVetorF(int n, float *vet)
{
    cout<<"Digite valores para preencher o vetor de float"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>vet[i];
    }
}

void preencheVetorD(int n, double *vet)
{
    cout<<"Digite valores para preencher o vetor de double"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>vet[i];
    }
}

int main()
{
    int n;
    cout<<"Digite tamanho do vator"<<endl;
    cin>>n;
    float *vetF = new float[n];
    double *vetD = new double[n];
    preencheVetorF(n, vetF);
    preencheVetorD(n, vetD);

    delete[] vetF, vetD;
    return 0;
}