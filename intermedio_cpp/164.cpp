#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void insertarCola(Nodo *&,Nodo *&, int);
void eliminarCola(Nodo *&,Nodo *&, int &);
bool cola_vacia(Nodo *);

int main (){
    Nodo *frente=NULL;
    Nodo *fin=NULL;
    int dato;

    char resp;

    do
    {
        cout<<"ingrese dato ";cin>>dato;
        insertarCola(frente,fin,dato);
        cout<<"agregar otro dato? ";cin>>resp;
    } while (resp == 's' || resp == 'S');
    

    cout<<"-------------------"<<endl;

    while (frente!=NULL)
    {   
        eliminarCola(frente,fin,dato);
    }

    return 0;
}

void insertarCola(Nodo *&frente,Nodo *&fin, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL; 

    if(cola_vacia(frente)){
        frente=nuevo_nodo;
    }else
    {
        fin->siguiente = nuevo_nodo;
    }

    fin = nuevo_nodo;

    cout<<"Elemento ["<<n<<"] agregado a la cola"<<endl;
     
}

void eliminarCola(Nodo *&frente,Nodo *&fin, int &n){
    n = frente->dato;
    Nodo *aux = frente;

    if(frente==fin){
        frente=NULL;
        fin=NULL;
    }
    else{
        frente = frente->siguiente;
    }
    cout<<"Elemento ["<<n<<"] eliminado de la cola"<<endl;
    delete aux;
}

bool cola_vacia(Nodo *frente){
    return (frente == NULL ) ? true : false;
}