#include <iostream>
using namespace std;

//prototipo de funcion
template <class TIPOD>
void mostrarValor(TIPOD numero);

int main(){
    int num1=-4;
    double num2=-37.32321;
    float num3=-3.56;

    mostrarValor(num1);
    mostrarValor(num2);
    mostrarValor(num3);

    return 0;
}

template <class TIPOD>
void mostrarValor(TIPOD num){
    if(num<0)num=num*-1;
    cout<<"valor absoluto "<<num<<endl;
}