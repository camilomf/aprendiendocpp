#include <iostream>
using namespace std;

struct Persona{
    char nombre[20];
    int edad;
}
persona1 = {"Jose",20},
persona2= {"Juan",15};

int main(){
    cout<<"nombre 1 "<<persona1.nombre<<endl;

    return 0;
}