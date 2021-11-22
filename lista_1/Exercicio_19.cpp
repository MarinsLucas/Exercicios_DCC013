#include<iostream>

using namespace std; 

float calculaMedia(float vet[], int n)
{
    float media =0;
    for(int i=0;i<n;i++)
    {
        media +=vet[i];
    }

    media = media/n;

    return media; 
}

int main()
{
    int n; 
    cin>>n; 
    float *pn = new float[n];
    float media=0; 

    for(int i=0;i<n;i++)
    {
        cin>>pn[i];
    }
    
    cout<< "Media = "<< calculaMedia(pn, n) <<endl;

    delete[] pn;
}