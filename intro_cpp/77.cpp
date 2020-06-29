#include <iostream>
#include <string.h>
using namespace std;

int main (){
    char palabra[]="hola ";
    char palabra2[]="Mundo";
    char cadena[30];

    strcpy(cadena,palabra);
    strcat(cadena,palabra2);
    cout<<cadena<<endl;

    return 0;
}