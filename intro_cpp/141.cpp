#include <iostream>

using namespace std;

int main (){
    int numero, *dir_num, cont=0;

    cout<<"ingrese num ";cin>>numero;
    dir_num = &numero;

    for (int i =1; i<*dir_num;i++){
        if(*dir_num%i==0){
            cont++;
        }
    }
    
    if(cont>2){
        cout<<"num no es primo "<<dir_num<<endl;
    }
    else{
        cout<<"num es primo "<<dir_num<<endl;
    }


    return 0;
}