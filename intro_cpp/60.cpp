#include <iostream>
using namespace std;

int main(){
    int lista[5]={1,2,3,4,5};
    int lista2[5];

    for(int i=0;i<5;i++){
        lista2[i]=lista[i]*2;
    }

    for (int i=0;i<5;i++){
        cout<<lista2[i]<<endl;
    }

    return 0;
}