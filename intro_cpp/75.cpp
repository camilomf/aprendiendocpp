#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char nombre[]="Hola";
    char palabra[]="hola";

    if(strcmp(nombre,palabra)==0) cout<<"son iguales"<<endl;
    else cout<<"no son iguales"<<endl;

    return 0;
}