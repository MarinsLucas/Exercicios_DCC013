#include<iostream>

using namespace std; 

int soma(int a, int b)
{
    if(b == a)
    {
        return a;
    }
    else
    {
        return soma(a, b-1) + b;
    }
}

int main()
{
    int a,b; 
    cout<<"Digite dois valores quaisquer"<<endl;
    cin>>a>>b;
    cout<<"Soma "<< soma(a,b)<<endl;

    return 0;
}