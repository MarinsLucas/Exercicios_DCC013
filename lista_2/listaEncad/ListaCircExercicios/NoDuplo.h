#ifndef NODUPLO_H_INCLUDED
#define NODUPLO_H_INCLUDED

class NoDuplo
{
public:
    NoDuplo();
    ~NoDuplo();
    void setAnt(NoDuplo* p);
    void setProx(NoDuplo* p);
    void setInfo(int val);
    NoDuplo* getAnt();
    NoDuplo* getProx();
    int getInfo();

private:
    int info;
    NoDuplo* ant;
    NoDuplo* prox;

#endif // NODUPLO_H_INCLUDED
