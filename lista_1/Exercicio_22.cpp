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

float *calculaSoma(int n, float vetA[], float vetB[])
{
    float *result = new float[n];
    for(int i=0;i<n;i++)
        result[i] = vetA[i] + vetB[i];

    return result; 
}

int main()
{
    int n; 
    cout<<"Digite o tamanho dos vetores"<<endl; 
    cin>>n;
    float *vetA = new float [n], *vetB = new float[n];
    preencheVetorF(n, vetA);
    preencheVetorF(n, vetB);
    
    float *result = calculaSoma(n, vetA, vetB);
    for(int i=0;i<n;i++)
        cout << result[i] << " ";
    
    cout<<endl; 
    delete[] vetA, vetB, result;

    return 0;
}