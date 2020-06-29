#include <iostream>
using namespace std;

int main(){
    int dato=2,a[]={1,4,2,3};
    char band='F';
    for(int i =0;i<sizeof(a)/sizeof(a[0]);i++){
        if(dato==a[i]){
            cout<<"encontrado en la posicion "<<i+1<<endl;
            band = 'T';
            break;
        } 
    }
    if(band=='F')cout<<"dato no encontrado"<<endl;
    
    return 0;
}
