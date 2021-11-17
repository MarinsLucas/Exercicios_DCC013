#include<iostream>

using namespace std; 

int main()
{
    cout<<"=============== CADASTRO DE ALUNOS =================="<<endl; 
    cout<<"[1] Incluir aluno"<<endl<<"[2] Excluir aluno"<<endl<<"[3] Alterar aluno"<<endl<<"[4] Sair"<<endl;
    cout<<"====================================================="<<endl;

    int index; 

    cin>>index; 

    switch (index)
    {
    case 1:
        cout<<"Incluir aluno";
        break;
    case 2:
        cout<<"Excluir aluno";
        break;
    case 3:
        cout<<"Alterar aluno";
        break;
    case 4: 
        cout<<"Sair";
        break;
    default:
        break;
    }

    cout<<endl; 

    return 0; 
}