#include <iostream>

using  namespace std;

int main () {
    int numeros[] = {1,2,3,4,5};
    
    for (int i=sizeof(numeros)/sizeof(*numeros)-1; i>=0;i--){
        cout<<numeros[i]<<endl;   
    }

    cout<<"--"<<sizeof(numeros)/sizeof(*numeros)<<endl;
    return 0;
}