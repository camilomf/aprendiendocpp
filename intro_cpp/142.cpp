#include <iostream>

using namespace std;

int main (){
    int numero[] = {1,2,3,4,5}, *dir_numeros;
    dir_numeros = numero;

    for (int i = 0; i < 5; i++)
    {
        cout<<"elemento arreglo "<<i<<" ["<<*dir_numeros++<<"]"<<" posicion "<<dir_numeros<<endl;
    }
    

    return 0;
}