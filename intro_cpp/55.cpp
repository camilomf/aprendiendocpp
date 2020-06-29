#include <iostream>

using  namespace std;

int main () {
    int *numeros=NULL;
    int cantidad;
    

    cout<<"ingrese tamaño ";cin>>cantidad;
    numeros = new int[cantidad];

    for (int i = 0; i < cantidad; i++)
    {
        cout<<"ingrese numero ";cin>>numeros[i];
    }

    cout<<"numeros ingresados \n";

    for (int i = 0; i < cantidad; i++)
    {
        cout<<"posicion "<<i<<" numero "<<numeros[i]<<endl;
    }
    
    cout<<"----"<<endl;
    cout<<cantidad<<endl;
    cout<<sizeof(numeros)/sizeof(*numeros)<<endl;

    return 0;
}