#include <iostream>

using  namespace std;

int main () {
    int numeros[] = {1,2,3,4,5};
    int multilicacion=1;

    for (int i=0; i<sizeof(numeros)/sizeof(*numeros);i++){
        multilicacion*=numeros[i];
    }

    cout<<"multilicacion: "<<multilicacion<<endl;

    return 0;
}