#include<iostream>

using namespace std; 
/* Media do salário da população
   Media de numero de filhos
   maior salário
   percentual de pessoas com salário até R$100,00
*/
int main()
{
    int pop; 
    cin>>pop;   
    float *sal = new float[pop], *nFilhos = new float[pop]; //o vscode está dando problema com declarar com variável no número de elementos do vetor
    float mediaFilhos =0 , mediaSal =0 , maiorSal =0, salBaixo =0; 


    for(int i =0 ; i<pop; i++)
    {
        cout<<"Digite o salário e número de filhos"<<endl; 
        cin>>sal[i]>>nFilhos[i];
    }

    for(int i=0;i<pop;i++)
    {
        mediaFilhos += nFilhos[i];
        mediaSal += sal[i];
        if(sal[i] > maiorSal)
            maiorSal = sal[i];
        
        if(sal[i] < 100)
            salBaixo++;
    }
    
    mediaFilhos = mediaFilhos/pop;
    mediaSal = mediaSal/pop; 
    salBaixo = (salBaixo/pop)*100;

    cout<<"Média do salário da população = " << mediaSal << endl; 
    cout<<"Média do número de filhos = " << mediaFilhos << endl; 
    cout<<"Maior salário = "<< maiorSal <<endl;
    cout<<"Percentual de pessoas com salário menor de 100 reais = " << salBaixo << endl; 

    delete sal;
    delete nFilhos;
    return 0;    
}