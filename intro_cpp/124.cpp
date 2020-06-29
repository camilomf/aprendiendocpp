#include <iostream>
using namespace std;

void pedirDatos();
int suma(int vec[],int tam);

int vec[100],tam;

int main (){

    pedirDatos();
    int resultado=suma(vec,tam);
    cout<<"resultado: "<<resultado<<endl;

    return 0;
}

void pedirDatos(){
    cout<<"ingrese tamaño: "<<endl;cin>>tam;
    for (int i = 0; i < tam; i++)
    {
        cout<<"digite un numero"<<endl;cin>>vec[i];
    }
}

int suma(int vec[],int tam){
    int resultado=0;
    for (int i = 0; i < tam; i++)
    {
        resultado+=vec[i];
    }
    return resultado;
}