#include <iostream>

using namespace std;

int main (){
    int *num,cont=0;

    cout<<"ingrese numero ";cin>>*num;

    for (int i = *num; i >= 1; i--){
        if(*num%i == 0 ) {
            cont++;
        }
       
    }

    if(cont<=2) cout<<*num<<" es numero primo"<<endl;
    else cout<<*num<<" no es numero primo"<<endl;
    
    return 0;
}
