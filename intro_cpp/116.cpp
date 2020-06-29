#include <iostream>
using namespace std;

template <class TIPOD>
void despliegue(TIPOD dato);


int main(){

    int dato1=4;
    float dato2=15.65;
    long dato3=437823;
    double dato4=473.432;

    despliegue(dato1);
    despliegue(dato2);
    despliegue(dato3);
    despliegue(dato4);

    return 0;
}

template <class TIPOD>
void despliegue(TIPOD dato){
    cout<<"el dato es: "<<dato<<endl;
}