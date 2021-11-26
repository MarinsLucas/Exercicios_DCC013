/* Não sei se está funcionando, não entendi como 
integra todos os arquivos juntos... Será que tem 
que ser no code::block?? */

#include<iostream>
#include "Ponto2D.h"

using namespace std; 

int main()
{
    //Declarando variável
    Ponto2D a(13.2 , 14.5); 
    Ponto2D b(5, 1);
    cout <<"Coordenadas do ponto A:"<<endl; 
    cout<<"X = " << a.getX()<< endl;
    cout<<"Y = " << a.getY()<< endl;

    cout <<"Coordenadas do ponto B:"<<endl; 
    cout<<"X = " << b.getX()<< endl;
    cout<<"Y = " << b.getY()<< endl;

    cout<<"Calculando a distância entre A e B"<<endl; 
    cout<<"Distância = "<<a.calculaDist(a, b);

    return 0; 
}