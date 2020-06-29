#include <iostream>
using namespace std;

void pedirDatos();
void calcular(float num1,float num2);

float num1,num2;

int main(){
    pedirDatos();
    calcular(num1,num2);
}

void pedirDatos(){
    cout<<"ingrese numero a elevar: "<<endl;cin>>num1;
    cout<<"ingrese elevacion: "<<endl;cin>>num2;
}

void calcular(float num1,float num2){
    long calculo=1;
    for (int i = 0; i < num2; i++)
    {
        calculo=calculo*num1;
    }
    
    cout<<"resultado: "<<calculo<<endl;

}