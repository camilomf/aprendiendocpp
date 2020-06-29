#include <iostream>
using namespace std;

void transformar(int,int&,int&,int&);

int main (){
    int totalseg,horas,minutos,segundos;
    cout<<"ingrese segundos: "<<endl;cin>>totalseg;
    transformar(totalseg,minutos,horas,segundos);

    cout<<"horas: "<<horas<<endl;
    cout<<"minutos: "<<minutos<<endl;
    cout<<"segundos: "<<segundos<<endl;

    return 0;
}

void transformar(int totalseg,int& minutos,int& horas,int& segundos){
    horas=totalseg/3600;
    totalseg%=3600;
    minutos=totalseg/60;
    segundos=totalseg%60;
}