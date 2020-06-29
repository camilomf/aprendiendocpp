#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void mostrar(int **,int, int);


int **puntero_matriz,nf,nc;

int main(){
    pedirDatos();
    mostrar(puntero_matriz,nf,nc);

    for (int i = 0; i < nf; i++)
    {
        delete[] puntero_matriz[i];
    }  
    delete[] puntero_matriz;
   

    return 0;
}

void pedirDatos(){
    cout<<"ingrese n filas ";cin>>nf;
    cout<<"ingrese n col ";cin>>nc;

    puntero_matriz = new int*[nf];
    for (int i = 0; i < nf; i++)
    {
        puntero_matriz[i] = new int[nc];
    }
    
    for (int i = 0; i < nf; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            cout<<"ingrese numero ";cin>>*(*(puntero_matriz+i)+j);
        }
        
    }
    
    
}

void mostrar(int **puntero_matriz, int nf, int nc){
    for (int i = 0; i < nf; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            cout<<"["<<*(*(puntero_matriz+i)+j)<<"]";
        }
        cout<<"\n";
    }
}
