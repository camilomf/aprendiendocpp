#include <iostream>
using namespace std;

int potencia(int,int);

int main(){
    int num,exp,resultado;
    cout<<"ingrese numero: ";cin>>num;
    cout<<"ingrese potencia: ";cin>>exp;
    cout<<"resultado: "<<potencia(num,exp)<<endl;
    return 0;
}

int potencia(int base,int exp){
    int pot;
    if(exp==1){
        pot=base;
    }
    else if (exp>1)
    {
        pot=base*potencia(base,exp-1);
    }
    return pot;
}

