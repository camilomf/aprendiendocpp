#include <iostream>
using namespace std;

void intercambio(float &x,float &y){
    float aux;
    aux=x;
    x=y;
    y=aux;
}

void quickSort(float a[],int primero, int ultimo){
    int i,central,j;
    float pivote;

    central = (primero+ultimo)/2;
    pivote = a[central];

    i=primero;
    j=ultimo;

    do
    {
        while(a[i]<pivote) i++;
        while(a[j]>pivote) j--;

        if(i<=j){
            intercambio(a[i],a[j]);
            i++;
            j--;
        }
        
    } while (i<=j);
    
    if(primero<j){
        quickSort(a,primero,j);
    }
    if(ultimo>i){
        quickSort(a,i,ultimo);
    }

}


int main(){

    float arreglo[] = {5,89,3,1,4,8,99,2,3,12,20,56,7,24};
    
    // cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    quickSort(arreglo,0,sizeof(arreglo)/sizeof(arreglo[0]));
    for (int i = 0; i < sizeof(arreglo)/sizeof(arreglo[0]); i++)
    {
        cout<<arreglo[i]<<", ";
    }
    cout<<endl;

    return 0;
}


