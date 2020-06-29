#include <iostream>

using namespace std;

int main(){
    int numeros[10], *dir_numeros;

    for (int  i = 0; i < 10; i++)
    {
        cout<<"ingresar numeros ";cin>>numeros[i];
    }

    dir_numeros = numeros;

    for (int i = 0; i < 10; i++)
    {
        if(*dir_numeros%2==0){
            cout<<"par ["<<*dir_numeros<<"] dir memoria"<<dir_numeros<<endl;
        }
        dir_numeros++;
    }
    
    

    return 0;
}