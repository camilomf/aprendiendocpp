#include <iostream>
using namespace std;

void valNuevo(int&,int&);

int main(){
    int num1,num2;
    cout<<"Digite dos numeros"<<endl;cin>>num1>>num2;

    valNuevo(num1,num2);

    cout<<"valor num1: "<<num1<<endl;
    cout<<"valor num2: "<<num2<<endl;

    return 0;
}

void valNuevo(int &xnum,int& ynum){
    cout<<"valor x: "<<xnum<<endl;
    cout<<"valor y: "<<ynum<<endl;

    xnum=342;ynum=654;
    cout<<"valor x: "<<xnum<<endl;
    cout<<"valor y: "<<ynum<<endl;
   
}