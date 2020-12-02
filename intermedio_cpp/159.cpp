#include <iostream>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};


void agregarPila(int,Nodo *&);

int main (){
    int dato;
    Nodo *pila = NULL;

    
    return 0;
}

void agregarPila(int dato, Nodo *&pila){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato=dato;
    nuevo_nodo->siguiente=pila;
    pila=nuevo_nodo;
}