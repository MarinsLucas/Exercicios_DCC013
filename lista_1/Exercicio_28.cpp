#include<iostream>
//Não está funcionando com recursividade
using namespace std; 

bool ehPalindromo(char a[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i] != a[n-1-i])
            return false;
    }
    return true; 
}

int main()
{
    int n; 
    cout<<"Digite o tamanho do vetor de caracteres:"<<endl; 
    cin>>n;
    char *a = new char[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(ehPalindromo(a, n)) 
        cout<< "É palindromo"<<endl; 
    else cout<< "Não é palindromo"<<endl; 

    delete[] a;
    return 0;
}