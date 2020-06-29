#include <iostream>

using namespace std;

int main(){
    int arreglo[5]={2,3,3,4,4},sum=0,mayor=0;

    for (int i = 0; i < 5; i++)
    {
        sum+=arreglo[i];
        if(arreglo[i]>mayor) mayor=arreglo[i];
    }
    
    if(mayor==(sum-mayor)){
        cout<<"existe numero"<<endl;
    }
    else {
        cout<<"no existe"<<endl;
    }



    return 0;
}
