#include <iostream>

using namespace std;

int main(){
    int numeros[10], *dir_numeros,menor=0;

    for (int  i = 0; i < 10; i++)
    {
        cout<<"ingresar numeros ";cin>>numeros[i];
    }

    dir_numeros = numeros;
    menor = *dir_numeros;

    for (int i = 0; i < 10; i++)
    {
        if(*dir_numeros<menor){
            menor=*dir_numeros;
        }
        dir_numeros++;
    }
    
    cout<<"numero menor "<<menor<<endl;

    return 0;
}