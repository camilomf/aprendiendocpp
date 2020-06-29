#include <iostream>
#include <string.h>
using namespace std;

int main (){
    char nombre[]="Hola Hola Hola Hola Hola Hola Hola Hola Hola Hola Hola Hola Hola Hola Hola Hola Hola Hola Hola Hola Hola Hola Hola Hola Hola";
    char nombre2[20];

    strcpy(nombre2,nombre);

    cout<<nombre2<<endl;
    cout<<strlen(nombre2)<<endl;

    return 0;
}