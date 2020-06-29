#include <iostream>
using namespace std;

int main (){
    int a,b;
    cout<<"ingrese filas ";cin>>a;
    cout<<"ingrese columnas ";cin>>b;
    int matriz[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<<"ingrese valor en la posicion "<<i<<" "<<j<<" ";cin>>matriz[i][j];
        }
        
    }
    
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<<matriz[i][j];
        }
        cout<<"\n";
    }
    


    return 0;
}