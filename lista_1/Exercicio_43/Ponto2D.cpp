#include<iostream>
#include "Ponto2D.h"
#include <math.h>

using namespace std; 

Ponto2D::Ponto2D(float a, float b)
{   
    x = a; 
    y = b; 
}

Ponto2D::~Ponto2D() {}

float Ponto2D::getX()
{
    return x;
}

float Ponto2D::getY()
{
    return y;
}

float Ponto2D::calculaDist(Ponto2D a, Ponto2D b)
{
    float dist;
    dist = sqrt((a.x - b.x)*(a.x - b.x)+(a.y - b.y)*(a.y - b.y));
    return dist; 
}

//Não sei se está funcionando
Ponto2D* Ponto2D::CentroGeometrico(Ponto2D *v, int n)
{
    float xGeometrico=0, yGeometrico=0; 
    for(int i = 0; i<n;i++)
    {
        xGeometrico += v[i].getX();
        yGeometrico += v[i].getY();
    }
    xGeometrico = xGeometrico/n;
    yGeometrico = xGeometrico/n;

    Ponto2D *novoPonto = new Ponto2D(xGeometrico, yGeometrico);
    return novoPonto; 
}