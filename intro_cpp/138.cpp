#include <iostream>

using namespace std;

int datos(int,int);

int main(){
    int i,f;
    cout<<"ingrese numeros "<<endl;cin>>i;
    cout<<"ingrese numeros "<<endl;cin>>f;

    for(int j = i; j<f+1; j++){
        cout<<datos(j,f)<<" ";
    }

}

int datos(int i, int f){
    if(i==f){
        return i;
    }
    else
    {
        return datos(i,f-1);
    }
}