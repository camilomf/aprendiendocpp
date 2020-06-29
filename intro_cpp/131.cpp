#include <iostream>
using namespace std;

struct Persona{
    char nombre[30];
    int edad;
}p1;

void pedirDatos();
void mostrar(Persona);

int main(){
    pedirDatos();
    mostrar(p1);
    return 0;
}

void pedirDatos(){
    cout<<"ingrese nombre: "<<endl;cin.getline(p1.nombre,30,'\n');
    cout<<"ingrese edad: "<<endl;cin>>p1.edad;

}

void mostrar(Persona p){
    cout<<p.nombre<<endl;
    cout<<p.edad<<endl;
}