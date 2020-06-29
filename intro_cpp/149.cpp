#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void buscar(int *,int);
// void mostrar(int *,int);

int nElementos, *elemento;

int main(){
    pedirDatos();
    buscar(elemento, nElementos);
    // mostrar(elemento, nElementos);

    delete[] elemento;

    return 0;
}

void pedirDatos(){
    cout<<"ingresar cantidad ";cin>>nElementos;
    elemento = new int[nElementos];

    for (int i = 0; i < nElementos; i++)
    {
        cout<<"ingrese numero ";cin>>*(elemento+i);
    }
}

void buscar(int *elemento, int nElementos){
    int aux;
    char band='F';
    cout<<"ingrese n a buscar ";cin>>aux;
    for (int i = 0; i < nElementos; i++)
    {
        if(aux==*(elemento+i)){
            cout<<"n encontrado "<<aux<<" en la posicion ["<<i<<"]"<<endl;
            band='T';
            break;
        }
    }
    if(band=='F') {
        cout<<"no existe el n "<<aux<<endl;
    }
}

// void mostrar(int *elemento, int nElementos){
//     for (int i = 0; i < nElementos; i++)
//     {
//         cout<<"["<<i<<"] = "<<*(elemento+i)<<endl;
//     }
    
// }