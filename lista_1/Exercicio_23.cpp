#include<iostream>

using namespace std; 

float** alocaMatriz(int m, int n)
{
    float **mat = new float *[m];
    for(int i=0;i<m;i++)
    {
        mat[m] = new float[n];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            mat[m][n]= 0;
        }
    }

    return mat; 

}

int main()
{
    int m,n; 
    cout<<"Digite o número de linhas e de colunas da matriz"<<endl; 
    cin>>m>>n;
    float **mat;
    mat = alocaMatriz(m,n);

    for(int i = 0;i < 10; i++) 
      delete[] mat[n]; 
   
   delete[] mat;
}