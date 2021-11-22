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

float** transposta(int m, int n, float **mat)
{
    float **transp; 
    transp = new float* [n];
    for(int i=0;i<n;i++)
        transp[n] = new float[m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            transp[n][m] = mat[m][n];
        }
    }
}

int main()
{
    int m,n; 
    cout<<"Digite o número de linhas e de colunas da matriz"<<endl; 
    cin>>m>>n;
    float **mat;
    mat = alocaMatriz(m,n);
    float **transp;
    transp = transposta(m, n, mat); 

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<< transp[n][m] << " ";
        }
        cout<<endl; 
    }

    for(int i = 0;i < 10; i++) 
      delete[] mat[n]; 
   
   delete[] mat;
}