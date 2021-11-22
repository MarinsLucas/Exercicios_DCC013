#include<iostream>

using namespace std;

int numDigitos(int num)
{
    if(num < 10)
    {
        return 1;
    }
    else
    {
        return numDigitos(num/10) + 1; 
    }   
}

int main()
{
    int num; 
    cout<<"Digite um número"<<endl; 
    cin>>num;
     
    cout<<numDigitos(num)<<endl;
}
