#include <iostream>
#include <stdlib.h>

using namespace std;

void intercambio(float *,float *);

int main(){
    float a=20.9,b=6.04;

    cout<<"dir a "<<&a<<"valor a: "<<a<<endl;
    cout<<"dir b "<<&b<<"valor b: "<<b<<endl;

    intercambio(&a,&b);

    cout<<"intercambio"<<endl;
    cout<<"dir a "<<a<<endl;
    cout<<"dir b "<<b<<endl;

    return 0;
}

void intercambio(float *a, float *b){
    swap(*a,*b);
}