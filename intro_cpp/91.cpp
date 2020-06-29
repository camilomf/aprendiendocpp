#include <iostream>
using namespace std;

int main (){
    int num[]={4,3,1,2,5};
    int i,j,aux,min;

    for ( i = 0; i < 5; i++)
    {
        min=i;
        for ( j = i+1; j < 5; j++)
        {
            if(num[j]<num[min]){
                min = j;
            }
        }
        aux=num[i];
        num[i]=num[min];
        num[min]=aux;
    }
    
    for ( i = 0; i < 5; i++)
    {
        cout<<num[i]<<endl;
    }

    return 0;
}