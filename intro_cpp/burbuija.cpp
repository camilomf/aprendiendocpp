#include <iostream>

using namespace std;

int main(){
    int numeros[]={2,3,5,-2,6};
    int i,j,aux;

    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if(numeros[j]>numeros[j+1]){
                aux=numeros[j];
                numeros[j]=numeros[j+1];
                numeros[j+1]=aux;
            }
        }
    }
    
    for (i = 0; i < 7; i++)
    {
        cout<<numeros[i]<<endl;
    }
    

    return 0;
}