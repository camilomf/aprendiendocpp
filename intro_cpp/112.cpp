#include <iostream>
using namespace std;

void pedirDatos();
void mult(float x,float y);
float num1,num2;

int main (){
    pedirDatos();
    mult(num1,num2);
    return 0;
}

void pedirDatos(){
    cout<<"ingrese numeros: "<<endl;cin>>num1>>num2;
}

void mult(float x,float y){
    float multiplicacion;
    multiplicacion=x*y;
    cout<<"la multiplicacion de los dos numeros es: "<<multiplicacion<<endl;
}

