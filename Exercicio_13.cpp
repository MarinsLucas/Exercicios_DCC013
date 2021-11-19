#include<iostream>

using namespace std; 

void quebraString(string s, char c)
{  
    string *novaString = new string;
    int index = 0;  
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==c)
        {
            cout<<*novaString<<endl; 
            delete novaString;
            novaString = new string; 
            index = 0;
        }
        else
        novaString[index] = s[i];
        index++;
    }
}

int main()
{
    string s; 
    char c; 
    cout<<"Digite uma string:"<<endl; 
    getline(cin, s);
    cout<<"Digite um caractere"<<endl; 
    cin>>c; 

}
