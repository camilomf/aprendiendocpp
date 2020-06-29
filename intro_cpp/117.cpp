#include <iostream>
using namespace std;

void pedirDatos();
void maximo(float num[]);

float num[3];

int main(){
    pedirDatos();
    maximo(num);
    return 0;
}

void pedirDatos(){
    for (int i = 0; i < 3; i++)
    {
        cout<<"ingrese numero: "<<endl;cin>>num[i];
    }
    
    
}

void maximo(float num[]){
    float maximo=0;
    for (int i = 0; i < 3; i++)
    {
        if(num[i]>maximo)maximo=num[i];
    }
    cout<<"resultado: "<<maximo<<endl;
}