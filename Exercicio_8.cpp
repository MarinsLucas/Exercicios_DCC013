#include<iostream>

using namespace std; 

bool divisivel(int n)
{
    if(n%3==0 && n%5==0)
        return true; 
    else return false; 
}
int main()
{
    bool div; 
    int n; 
    cin >> n; 
    div = divisivel(n);

    if(div)
        cout<<"É divisivel"<<endl;
    else
        cout<<"Não é divisivel"<<endl;
}