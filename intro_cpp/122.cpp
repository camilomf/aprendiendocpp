#include <iostream>
using namespace std;

void convertir(int,int&,int&,int&);

int main (){
    int dias,anno,mes,dia;
    cout<<"ingrese dias: "<<dias<<endl;cin>>dias;
    convertir(dias,anno,mes,dia);

    cout<<"año: "<<anno<<endl;
    cout<<"mes: "<<mes<<endl;
    cout<<"dias: "<<dia<<endl;

    return 0;
}

void convertir(int dias,int& anno,int& mes,int& dia){
    anno=dias/365;
    dias%=365;
    mes=dias/30;
    dias%=30;
    dia=dias%30;
}

