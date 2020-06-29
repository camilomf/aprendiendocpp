#include <iostream>
using namespace std;

struct Fecha{
    int dia,mes,anno;
}f1,f2;

void pedirDatos();
Fecha calculo(Fecha,Fecha);
void mostrar(Fecha);

int main(){
    pedirDatos();
    Fecha f=calculo(f1,f2);
    mostrar(f);
    return 0;
}

void pedirDatos(){
    cout<<"ingrese primera Fecha: "<<endl;
    cout<<"ingrese dia: ";cin>>f1.dia;
    cout<<"ingrese mes: ";cin>>f1.mes;
    cout<<"ingrese anno: ";cin>>f1.anno;

    cout<<"ingrese segunda Fecha: "<<endl;
    cout<<"ingrese dia: ";cin>>f2.dia;
    cout<<"ingrese mes: ";cin>>f2.mes;
    cout<<"ingrese anno: ";cin>>f2.anno;
}

Fecha calculo(Fecha f1,Fecha f2){
    Fecha f;
    if((f1.dia>=f2.dia)&&(f1.mes>=f2.mes)&&(f1.anno>=f2.anno)) f=f1;
    else f=f2;
    return f;
}

void mostrar(Fecha f){
    cout<<"mayor: "<<f.dia<<"/"<<f.mes<<"/"<<f.anno<<endl;
}
