#include <iostream>

using namespace std;

int main (){
    int m,n,dato;
    cout<<"ingrese valor f ";cin>>m;
    cout<<"ingrese valor c ";cin>>n;
    int **arreglo = new int *[m];
    for (int i = 0; i < m; i++)
    {
        arreglo[i] = new int[n];
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            dato=1+rand()%(100);
            arreglo[i][j]=dato;
        } 
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arreglo[i][j]<<"|";
        }
        cout<<"\n";
    }
    


    return 0;
}