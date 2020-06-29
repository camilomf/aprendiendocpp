#include <iostream>
#include <string.h>
using namespace std;


int main (){
    char palabra[5];
    

    cout<<"ingrese palabra ";
    cin.getline(palabra,5,'\n');
    cout<<strlen(palabra)<<endl;

    if (strlen(palabra)<=4)
    {
        cout<<palabra<<endl;
    }
    else
    {
        cout<<"supera los 4 caracteres";
    }
    
    return 0;
}