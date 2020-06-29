#include <iostream>
using namespace std;

void intercambio(float &x,float &y){
   float aux;
   aux=x;
   x=y;
   y=aux;
}

void ordenacionShell(float a[],int n){
    int salto,i,j,k;
    salto = n/2;
    // cout<<"salto: "<<salto<<endl;
    
    while(salto>0){
        for (i = salto; i < n; i++)
        {
            // cout<<"valor i: "<<i<<endl;
            j=i-salto;
            // cout<<"valor j: "<<j<<endl;
            while(j>=0){
                k=j+salto;
                // cout<<"valor k: "<<k<<endl;
                if(a[j]<=a[k]){
                    j = -1;
                }
                else
                {
                    intercambio(a[j],a[k]);
                    // cout<<a[j]<<" <-> "<<a[k]<<endl;
                    // float aux=a[j];
                    // a[j]=a[k];
                    // a[k]=aux;
                    // cout<<a[j]<<" <-> "<<a[k]<<endl;
                    j-=salto;
                }
            }
        }
        salto = salto/2;
        // cout<<"nuevo valor salto: "<<salto<<endl;
    }

}

int main(){
    float arreglo[] = {4,6,1,9,55,12,5,2,99,105,21,34,48,14};
    
    for(int i =0;i<14;i++){
        cout<<arreglo[i]<<", ";
    }
    cout<<endl;

    ordenacionShell(arreglo,14);
    
    for(int i =0;i<14;i++){
        cout<<arreglo[i]<<", ";
    }

    cout<<endl;
    return 0;
}

