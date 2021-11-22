#include<iostream>

using namespace std; 

int main()
{
    int n; 
    cin>>n; 
    float *pn = new float[n];
    float media=0; 
    for(int i=0;i<n;i++)
    {
        cin>>pn[i];
        media +=pn[i];
    }

    media = media/n;

    cout<<"Média = "<< media<<endl;

    delete[] pn;
}