#include<iostream>
#define TAM 1000
using namespace std; 

char *Cstyle(char str[])
{
    char *s;
    int i; 
    for(i=0; str[i]!= '\0';i++)
    {
        s[i] = str[i];
    }
    s[i] = '\0';
    return s;
}

int main()
{
    char str[TAM];
    scanf("%[^\n]s", str);
    cout<< Cstyle(str) <<endl; 
}