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

    int mayor=numeros[0];

    cout<<"numero mayor \n";

    for (int i = 0; i < cantidad; i++)
    {
        if (numeros[i]>mayor) mayor=numeros[i];     
    }
    
    cout<<"n mayor "<<mayor<<endl;

    return 0;
}