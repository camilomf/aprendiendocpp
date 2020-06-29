#include <iostream>
using namespace std;

void matrizOriginal(int m[][3],int,int);
void matrizCuadrada(int m[][3],int,int);


int main(){
    const int fil=2,col=3;
    int m[fil][col]={{1,2,3},{4,5,6}};
    matrizCuadrada(m,fil,col);
    matrizOriginal(m,fil,col);

    
    return 0;
}

void matrizOriginal(int m[][3],int fil,int col){
    for (int i = 0; i < fil; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }    
}

void matrizCuadrada(int m[][3],int fil,int col){
    for (int i = 0; i < fil; i++)
    {
        for (int j = 0; j < col; j++)
        {
            m[i][j]*=m[i][j];
        }
    }    
}