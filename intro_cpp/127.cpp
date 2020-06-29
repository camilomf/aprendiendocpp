#include <iostream>
using namespace std;

void pedirDatos();
void numeroImpar(int vec[],int tam);

int vec[100],tam;

int main(){

    pedirDatos();
    numeroImpar(vec,tam);
    
    return 0;
}

void pedirDatos(){
    cout<<"ingrese tamaño vector: "<<endl;cin>>tam;
    for (int i = 0; i < tam; i++)
    {
        cout<<"digite un numero"<<endl;cin>>vec[i];
    }
}


void numeroImpar(int vec[],int tam){
    for (int i = 0; i < tam; i++)
    {
        if(vec[i]%2!=0)cout<<"numero impar: "<<vec[i]<<endl;
    }
    
}
