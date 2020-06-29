#include <iostream>
#include <string.h>
using namespace std;

int main (){
    char nombre[20];

    cout<<"digite su nombre ";
    cin.getline(nombre,20,'\n');
    cout<<nombre<<endl;
    return 0;
}