#include <iostream>
using namespace std;

int main(){
    int num[]={4,3,1,2,5};
    int aux,i,j;

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            if (num[j]>num[j+1])
            {
                aux=num[j];
                num[j]=num[j+1];
                num[j+1]=aux;
            }
            
        }
        
    }
    
    for ( i = 0; i < 5; i++)
    {
        cout<<num[i]<<endl;
    }
    

    return 0;
}
