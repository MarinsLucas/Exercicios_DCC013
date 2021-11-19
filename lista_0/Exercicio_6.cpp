#include<iostream>

using namespace std; 


void imprimeEstacao(int dia, int mes)
{
    switch(mes)
    {
        case 1: cout<<"Verao"<<endl;
            break; 
        case 2: cout<<"Verao"<<endl;
            break; 
        case 3: 
            if(dia>=20)
                cout<<"Outono"<<endl;
            else cout<<"Verao"<<endl;
            break; 
        case 4: cout<<"Outono"<<endl;
            break; 
        case 5: cout<<"Outono"<<endl;
            break; 
        case 6: if(dia>=21)
                cout<<"Inverno"<<endl;
            else cout<<"Outono"<<endl;
            break; 
        case 7: cout<<"Inverno"<<endl;
            break; 
        case 8: cout<<"Inverno"<<endl;
            break; 
        case 9: if(dia>=22)
                cout<<"Primavera"<<endl;
            else cout<<"Inverno"<<endl;
            break; 
        case 10: cout<<"Primavera"<<endl;
            break; 
        case 11: cout<<"Primavera"<<endl;
            break; 
        case 12: if(dia>=21)
                cout<<"Verão"<<endl;
            else cout<<"Primavera"<<endl;;
            break; 
    }
}

int main()
{
    int dia, mes; 
    cin>>dia>>mes;

    imprimeEstacao(dia, mes);
}