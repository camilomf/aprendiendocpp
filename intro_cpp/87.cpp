#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main (){
    char cadena[]="muricelago";
    int a=0,e=0,i=0,o=0,u=0;

    for (int j = 0; j < strlen(cadena); j++)
    {
        switch (cadena[j])
        {
        case 'a':a++;break;
        case 'e':e++;break;
        case 'i':i++;break;
        case 'o':o++;break;
        case 'u':u++;break;
        }
    }

    cout<<"a: "<<a<<endl;
    cout<<"e: "<<e<<endl;
    cout<<"i: "<<i<<endl;
    cout<<"o: "<<o<<endl;
    cout<<"u: "<<u<<endl;
    

    return 0;
}