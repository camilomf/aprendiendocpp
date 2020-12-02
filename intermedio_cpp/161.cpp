#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(int, Nodo *&);
void sacandoPila(int &, Nodo *&);

int main(){
    Nodo *pila = NULL;
    int dato;
    char rpt;

    do
    {
        cout<<"ingrese numero ";cin>>dato;
        agregarPila(dato,pila);
        cout<<"agregar otro elemento a pila ";cin>>rpt;

    } while (rpt=='S' || rpt=='s');

    cout<<"Sacando elementos de pila "<<endl;
    while (pila!=NULL)
    {
        sacandoPila(dato,pila);
        cout<<"Elemento ["<<dato<<"] sacado de la pila"<<endl;
    }
    
    

    return 0;
}

void agregarPila(int dato, Nodo *&pila){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato=dato;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
    cout<<"Elemento ["<<dato<<"] agregado a la pila"<<endl;
}

void sacandoPila(int &dato, Nodo *&pila){
    Nodo *aux = pila;
    dato = aux->dato;
    pila = aux->siguiente;
    delete aux;
}