#include <iostream>

using namespace std;

int main (){
    int numero, *dir_num;

    cout<<"ingrese num ";cin>>numero;
    dir_num = &numero;

    if(numero%2==0){
        cout<<"par "<<dir_num<<" "<<*dir_num<<endl;
    }
    else
    {
        cout<<"impar "<<dir_num<<" "<<*dir_num<<endl;
    }
    


    return 0;
}