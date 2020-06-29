#include <iostream>
using namespace std;

int fibonacci(int);

int main(){
    int num,n,nElementos;

    do{
        cout<<"ingrese numero: ";cin>>nElementos;
    } while (nElementos<=0);
    
    cout<<"serie fibonacci: "<<endl;
    for (long i = 0; i < nElementos; i++)
    {
        cout<<fibonacci(i)<<" ";
    }
    cout<<"\n";
    return 0;
}

int fibonacci(int n){
    if(n<2){
        return n;
    }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

