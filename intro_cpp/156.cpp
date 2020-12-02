#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct Alumno{
    char nombre[5];
    int edad;
    float promedio;
} alumno[3], *p_alumno=alumno;

void pedirDatos();
void mejorProm(Alumno *);

int main(){
    pedirDatos();
    mejorProm(p_alumno);


    return 0;
}

void pedirDatos(){
    for (int i = 0; i < 3; i++)
    {   
        fflush(stdin);
        cout<<"ingrese nommbre ";cin.getline((p_alumno+i)->nombre,6,'\n');
        cout<<"ingrese edad ";cin>>(p_alumno+i)->edad;
        cout<<"ingrese prom ";cin>>(p_alumno+i)->promedio;
        cin.ignore();
    }

}

void mejorProm(Alumno *p_alumno){
    float mayor=0;
    int pos=0;
    for (int i = 0; i < 3; i++)
    {
        if((p_alumno+i)->promedio>mayor){
            mayor=(p_alumno+i)->edad;
            pos=i;
        } 
    }

    cout<<"\nMEJOR PROMEDIO"<<endl;
    cout<<"Nombre "<<(p_alumno+pos)->nombre<<endl;
    cout<<"Edad "<<(p_alumno+pos)->edad<<endl;
    cout<<"Promedio "<<(p_alumno+pos)->promedio<<endl;
}