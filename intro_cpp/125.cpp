#include <iostream>
using namespace std;

void pedirDatos();
void compOrdenamiento(int vec[],int tam);

int vec[100],tam;

int main(){

    pedirDatos();
    compOrdenamiento(vec,tam);

    return 0;
}

void pedirDatos(){
    cout<<"ingrese tamaño vector: "<<endl;cin>>tam;
    for (int i = 0; i < tam; i++)
    {
        cout<<"digite un numero"<<endl;cin>>vec[i];
    }
}


void compOrdenamiento(int vec[],int tam){
    char band='F';
    int i=0;

    while ((band=='F')&&(i<tam-1))
    {
        if(vec[i]>vec[i+1]) band='T';
        i++;
    }
    if(band=='F')cout<<"arreglo esta ordenado"<<endl;
    else cout<<"arreglo esta desordenado"<<endl;
}