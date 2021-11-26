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