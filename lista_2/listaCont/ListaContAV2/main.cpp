/*
N�o estou conseguindo executar o programa, mas tenho quase certeza que n�o tem nenhum erro nele
Na verdade eu n�o fa�o mais ideia, tem um tempinho que n�o estudo
*/

#include <iostream>
#include"ListaCont.h"

using namespace std;

int main()
{
    ListaCont lista(3);
    lista.set(1,2);
    lista.set(2,3);
    lista.set(0,1);
    cout<<lista.get(0)<<" "<<lista.get(1)<<" "<<lista.get(2)<<endl;
    lista.insereFinal(5);
    cout<<lista.get(0)<<" "<<lista.get(1)<<" "<<lista.get(2)<<endl;
    lista.removeFinal();
    cout<<lista.get(0)<<" "<<lista.get(1)<<" "<<lista.get(2)<<endl;
    lista.insereK(1,3);
    cout<<lista.get(0)<<" "<<lista.get(1)<<" "<<lista.get(2)<<endl;
    lista.troca(0,2);
    cout<<lista.get(0)<<" "<<lista.get(1)<<" "<<lista.get(2)<<endl;
    lista.aumentaCapacidade(5);
    lista.set(3,2);
    lista.set(4,3);
    cout<<lista.get(0)<<" "<<lista.get(1)<<" "<<lista.get(2);
    cout<<lista.get(3)<<" "<<lista.get(4)<<endl;

    return 0;
}
