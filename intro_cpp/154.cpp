#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void comprobarMatriz(int **,int, int);

int **matriz, nfil, ncol;


int main (){
    pedirDatos();
    comprobarMatriz(matriz,nfil,ncol);

    return 0;
}

void pedirDatos(){
    cout<<"ingrese numero de fila ";cin>>nfil;
    ncol=nfil;
    
    matriz = new int*[nfil];

    for (int i = 0; i < nfil; i++)
    {
        matriz[i] = new int[ncol];
    }

    for (int i = 0; i < nfil; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            cout<<"ingrese numero en la posicion ["<<i<<"]"<<"["<<j<<"] ";cin>>*(*(matriz+i)+j);

        }
    }
}

void comprobarMatriz(int **matriz,int nfil, int ncol){
    bool band=true;

    for (int i = 0; i < ncol; i++)
    {
        for (int j = 0; j < nfil; j++)
        {
            cout<<"|["<<*(*(matriz+i)+j)<<"]";
            cout<<"["<<*(*(matriz+j)+i)<<"]";
        }
        cout<<"\n";
    }
}