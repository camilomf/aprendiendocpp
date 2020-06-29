#include <iostream>
using namespace std;

void pedirNumero();
void cuadrado(float num1);

float num1,num2;

int main (){
    pedirNumero();
    cuadrado(num1);

    return 0;
}

void pedirNumero(){
    cout<<"ingrese numero: "<<endl;cin>>num1;
}

void cuadrado(float num1){
    float multiplicacion;
    multiplicacion=num1*num1;
    cout<<"el cuadrado es: "<<multiplicacion<<endl;
}