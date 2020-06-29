#include <iostream>
using namespace std;

void pedirDatos();
void cambiarSigno(int vec[],int tam);
void mostrar(int vec[],int tam);

int vec[100],tam;

int main(){

    pedirDatos();
    cambiarSigno(vec,tam);
    mostrar(vec,tam);

    return 0;
}

void pedirDatos(){
    cout<<"ingrese tamaño vector: "<<endl;cin>>tam;
    for (int i = 0; i < tam; i++)
    {
        cout<<"digite un numero"<<endl;cin>>vec[i];
    }
}


void cambiarSigno(int vec[],int tam){
    for (int i = 0; i < tam; i++)
    {
        vec[i]*=-1;
    }
    
}

void mostrar(int vec[],int tam){
    for (int i = 0; i < tam; i++)
    {
        cout<<"cambio de signo: "<<vec[i]<<endl;
    }
    
}