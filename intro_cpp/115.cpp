#include <iostream>
using namespace std;

void pedirDatos();
float parteFraccionaria(float n);


float num;

int main(){
    pedirDatos();
    float resultado = parteFraccionaria(num);
    cout<<"resultado: "<<resultado<<endl;
    
    return 0;
}

void pedirDatos(){
    cout<<"ingrese un numero: "<<endl;cin>>num;
}

float parteFraccionaria(float n){
    int entero=n;
    float resultado = n-entero;
    return resultado;
}