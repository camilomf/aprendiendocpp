#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void buscarVocal(char *);
void cantidad(int,int,int,int,int);

char nombre[30];
int a=0,e=0,i=0,o=0,u=0;

int main(){
    pedirDatos();
    buscarVocal(nombre);
    cantidad(a,e,i,o,u);
    return 0;
}

void pedirDatos(){
    cout<<"ingresar nombre ";
    cin.getline(nombre,30,'\n');
}

void buscarVocal(char *nombre){
    for (int j = 0; j < strlen(nombre); j++)
    {
        switch (*(nombre+j))
        {
        case 'a': a++;break;
        case 'e': e++;break;
        case 'i': i++;break;
        case 'o': o++;break;
        case 'u': u++;break;
        }
    }
}

void cantidad(int a,int e,int i,int o,int u){
    cout<<" CANTIDAD Vocales = "<<a+e+i+o+u<<endl;
    cout<<"A: "<<a<<endl;
    cout<<"E: "<<e<<endl;
    cout<<"I: "<<i<<endl;
    cout<<"O: "<<o<<endl;
    cout<<"U: "<<u<<endl;
}