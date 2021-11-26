#ifndef Ponto2D_H_INCLUDED
#define Ponto2D_H_INCLUDED

class Ponto2D
{
    private:
    float x, y; 

    public:
    Ponto2D(float a, float b);
    ~Ponto2D();
    float getX();
    float getY();
    float calculaDist(Ponto2D a, Ponto2D b);

};

#endif