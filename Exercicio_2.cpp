#include<iostream>
#include<iomanip> //necessário para usar o setprecision e setionsflags

using namespace std; 

int main()
{
    double f = 3.14159;
    cout<< setiosflags(ios::fixed) <<setprecision(4)<< f << endl; //Essa linha define a precisão e o número de casas decimais para imprimir

    return 0;
}