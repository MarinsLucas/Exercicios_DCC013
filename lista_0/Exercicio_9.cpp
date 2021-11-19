#include<iostream>

using namespace std; 

int main()
{
    float media =0; 
    int valores[20];

    for(int i=0;i<20;i++)
    {
        cin>>valores[i];
        media +=valores[i];
    }
    
    media = media/20; 

    cout<<"Valor | Media"<<endl; 
    cout<<"_____________"<<endl;

    for(int i =0;i<20;i++)
    {
        if(valores[i] < 10)
        {
            cout<<valores[i]<<"  -- "<<media<<endl; 
        }
        else
            cout<<valores[i]<<" -- "<<media<<endl;
    }
}