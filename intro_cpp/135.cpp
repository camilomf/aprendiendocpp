#include <iostream>
using namespace std;

int fact(int);

int main(){
    long num,n;
    cout<<"ingrese numero: ";cin>>num;
    n = fact(num);
    cout<<"suma consecutiva de "<<num<<": "<<n<<endl;
    return 0;
}

int fact(int n){
    if(n==1){
        n=1;
    }
    else if (n>1)
    {
        n=n+fact(n-1);
    }
    return n;
}

