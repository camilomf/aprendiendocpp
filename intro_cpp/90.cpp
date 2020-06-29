#include <iostream>
using namespace std;

int main(){
    int num[]={4,3,1,2,5};
    int i,pos,aux;

    for (i = 0; i < 5; i++)
    {
        pos = i;
        aux = num[i];
        while((pos>0) &&(num[pos-1]>aux)){
            num[pos]=num[pos-1];
            pos--;
        }
        num[pos]=aux;
    }
    
    for ( i = 0; i < 5; i++)
    {
        cout<<num[i]<<endl;
    }
    


    return 0;
}