#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char cadena[]="anitalavalatina";
    char cadena1[30];
    char aux[]=" ";
    int i=0;

    while(i<strlen(cadena)){
        aux=cadena[i];
        cadena1=strcat(cadena1,aux);
        // cout<<cadena1[i];
        i++;
    }

    cout<<"\n"<<cadena1<<" "<<cadena<<endl;

    // for (int i = strlen(cadena); i >=0; i--)
    // {
        // cadena1[aux]=cadena[i];
        // cout<<cadena[i];
    // }
    // cout<<cadena1<<endl;

    return 0;
}