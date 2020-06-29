#include <iostream>
using namespace std;

void pedirDatos();
void encontrarMenor(int m[][100],int,int,int v[]);
void mostrarMenor(int v[],int);

int m[100][100],fil,col,menor=100,v[100];

int main(){
    pedirDatos();
    encontrarMenor(m,fil,col,v);
    mostrarMenor(v,fil);

    return 0;
}

void pedirDatos(){
    cout<<"ingrese n filas: "<<endl;cin>>fil;
    cout<<"ingrese n columans: "<<endl;cin>>col;

    for (int i = 0; i < fil; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<"ingrese valor ["<<i<<"]"<<"["<<j<<"]"<<endl;cin>>m[i][j];
        }
    }
}

void encontrarMenor(int m[][100],int fil,int col,int v[]){
    int cont=0;
    for (int i = 0; i < fil; i++)
        {
            menor=99999;
            for (int j = 0; j < col; j++)
            {
                if(m[i][j]<menor){
                    menor=m[i][j];
                    v[cont]=m[i][j];
                }
            }
            cont++;
        }
}

void mostrarMenor(int v[],int fil){
    for (int i = 0; i < fil; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
    

    for (int i = 0; i < fil; i++)
    {
        cout<<"Menor: "<<v[i]<<endl;
    }
    
}