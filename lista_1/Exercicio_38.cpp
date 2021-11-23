#include<iostream>

using namespace std;

typedef struct Reta
{
    float a[2]; 
    float b[2];
} Reta;

typedef struct Endereco
{
    string rua; 
    int num;
} Endereco; 

typedef struct Voo
{
    float distancia; 
    float tempo; 
} Voo; 

typedef struct coordenada
{
    float latitude; 
    float longitude;
}coordenada; 

typedef struct conta_bancaria
{
    int num; 
    float saldo; 
    string correntista;
}conta_bancaria; 

typedef struct carro
{
    string estado; 
    string placa; 
     //será que isso funciona??
    int ano_de_registro;
    bool infracoes;
}carro; 

typedef struct carro_ext
{
    string pais; 
    int dia, mes, ano; 
    string placa; 
}carro_ext; 


