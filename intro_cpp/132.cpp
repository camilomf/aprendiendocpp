#include <iostream>
using namespace std;

struct Complejo{
    float real,imaginaria;
}z1,z2;

void pedirDatos();
Complejo suma(Complejo,Complejo);
void mostrar(Complejo);

int main(){
    pedirDatos();
    z1=suma(z1,z2);
    mostrar(z1);
    return 0;
}

void pedirDatos(){
    cout<<"ingrese primer n complejo: "<<endl;cin>>z1.real>>z1.imaginaria;
    cout<<"ingrese segundo n complejo: "<<endl;cin>>z2.real>>z2.imaginaria;
}

Complejo suma(Complejo z1,Complejo z2){
    z1.real+=z2.real;
    z1.imaginaria+=z2.imaginaria;
    return z1;
}

void mostrar(Complejo z1){
    cout<<z1.real<<" "<<z1.imaginaria<<"i"<<endl;
}
