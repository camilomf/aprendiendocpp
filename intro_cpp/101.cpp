#include <iostream>
#include <string>
using namespace std;

struct info_direccion{
    char direccion[20];
    char ciudad[20];
    char provincia[20];
};

struct empleado{
    char nombre[5];
    struct info_direccion dir_empleado;
    double salario;        
}empleados[2];

int main(){

    // char name[10];
    // cout << "Please, enter your full name: ";
    // cin.getline(name,10);
    // cout << "Hello, " << name << "\n";

    for (int i = 0; i < 2; i++)
    {        
        fflush(stdin); 
        cout<<"Ingrese su nombre: ";
        cin.getline(empleados[i].nombre,5,'\n');
        cout<<"Ingrese su direccion: ";
        cin.getline(empleados[i].dir_empleado.direccion,20,'\n');
        cout<<"Ingrese su ciudad: ";
        cin.getline(empleados[i].dir_empleado.ciudad,20,'\n');
        cout<<"Ingrese su provincia: ";
        cin.getline(empleados[i].dir_empleado.provincia,20,'\n');
        cout<<"Ingrese su salario: ";
        cin>>empleados[i].salario;
        cout<<"\n";
        cin.ignore();
    }

    for (int i = 0; i < 2; i++)
    {
        cout<<"nombre: "<<empleados[i].nombre<<"\n";
        cout<<"direccion: "<<empleados[i].dir_empleado.direccion<<" ";
        cout<<"ciudad: "<<empleados[i].dir_empleado.ciudad<<" ";
        cout<<"provincia: "<<empleados[i].dir_empleado.provincia<<"\n";
        cout<<"salario: "<<empleados[i].salario<<"\n";
    }
    
    

    return 0;
}