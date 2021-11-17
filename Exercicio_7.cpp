#include<iostream>

using namespace std; 

float fat(int ind)
{
    float fatorial; 
    fatorial = ind; 
    for(int i=1;i<ind;i++)
    {
        fatorial = fatorial * ind - i; 
    }

    return fatorial; 
}

float calcSoma(int n)
{
    float soma =0;
    for(int i=0; i<n; i++)
    {
        soma += (n - i)/fat(i + 1);
    }
    return soma; 
}

int main()
{
    int n; 
    cin>>n; 
    cout<<calcSoma(n)<<endl;
}