#include <iostream>
using namespace std;

int fact(int);


int main(){
    long num,n;
    cout<<"ingrese numero: ";cin>>num;
    n = fact(num);
    cout<<"fatorial de "<<num<<": "<<n<<endl;
    return 0;
}

int fact(int n){
    if(n==0){
        n=1;
    }
    else{
        n=n*fact(n-1);
    }
    return n;
}
