#include <iostream>

using namespace std; 

int main()
{
    float consumo, preco; 
    cin>>consumo; 
    preco = consumo*0.12 + consumo*1.18; 
    cout << "Valor a ser pago: " << consumo*0.12+consumo*1.18 << endl; 
    return 0; 
}