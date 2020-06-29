#include <iostream>

using  namespace std;

int main () {
    int *numeros=NULL;
    int cantidad,suma=0;
    
    cout<<"ingrese tamaño ";cin>>cantidad;
    numeros = new int[cantidad];

    for (int i = 0; i < cantidad; i++)
    {
        cout<<"ingrese numero ";cin>>numeros[i];
        if(i!=0)suma+=numeros[i-1];
    }



    cout<<"----- \n";

    for (int i = 0; i < cantidad; i++)
    {
        if (numeros[i]==suma) cout<<"existe valor cuya suma de numeros son iguales "<<suma<<endl;
    }
    
    

    return 0;
}