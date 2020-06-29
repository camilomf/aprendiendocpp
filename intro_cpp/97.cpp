#include <iostream>
using namespace std;

int main(){
    int num[]={1,2,3,4,5,6};
    int inf,sup,mitad,dato=5;
    bool band=false;

    inf=0;
    sup=sizeof(num)/sizeof(num[0]);

    while(inf<=sup){
        mitad=(inf+sup)/2;
        if(num[mitad]==dato){
            band=true;
            break;
        }
        if(num[mitad]>dato){
            sup=mitad;
            mitad=(inf+sup)/2;
        }
        if(num[mitad]<dato){
            inf=mitad;
            mitad=(inf+sup)/2;
        }

    }

    if(band==false) cout<<"dato no encontrado"<<endl;
    else cout<<"encontrado en la posicion "<<mitad+1<<endl;

    return 0;
}
