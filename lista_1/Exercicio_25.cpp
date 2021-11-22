#include<iostream>

using namespace std; 

int soma(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return soma(n-1) + n;
    }
}

int main()
{
    int n; 
    cout<<"Digite um valor ai qualquer"<<endl;
    cin>>n;
    cout<<"Soma "<< soma(n)<<endl;

    return 0;
}