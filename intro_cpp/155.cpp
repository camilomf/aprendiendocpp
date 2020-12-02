#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct Persona
{
    char nombre[5];
    int edad;
}persona, *p_persona = &persona;

void pedirDatos();
void mostrar(Persona *);

int main(){

    pedirDatos();
    mostrar(p_persona);

    return 0;
}

void pedirDatos(){
    
    cout<<"ingrese nombre ";cin.getline(p_persona->nombre,5,'\n');
    cout<<"ingrese edad ";cin>>p_persona->edad;
}

void mostrar(Persona *p_persona){
    cout<<"Nombre: "<<p_persona->nombre<<endl;
    cout<<"Edad: "<<p_persona->edad<<endl;
}
