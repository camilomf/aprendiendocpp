#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void mostrarDatos();

int cant,*num;

int main(){
    
    pedirDatos();
    mostrarDatos();

    delete[] num;

    return 0;
}

void pedirDatos(){
    cout<<"Ingrese cantidad ";cin>>cant;

    num = new int[cant];

    for (int i = 0; i < cant; i++)
    {
        cout<<"ingrese nota ";cin>>num[i];
    }
}

void mostrarDatos(){
    cout<<"Notas"<<endl;
    for (int i = 0; i < cant; i++)
    {
        cout<<"nota "<<num[i]<<endl;
    }
}