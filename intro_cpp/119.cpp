#include <iostream>
using namespace std;

void referencia(int&,int&);

int main(){
    int num=1,num2=2;
    cout<<"valor x: "<<num<<endl;
    cout<<"valor y: "<<num2<<endl;
    referencia(num,num2);



    return 0;
}

void referencia(int &x,int &y){
    int aux;
    aux=x;
    x=y;
    y=aux;
    cout<<"nuevos valor x: "<<x<<endl;
    cout<<"nuevos valor y: "<<y<<endl;
}