#include <iostream>
using namespace std;

void pedirDatos();
void comprobarSimetria(int m[][100],int,int);

int m[100][100],fil,col;

int main(){
    pedirDatos();
    comprobarSimetria(m,fil,col);

    return 0;
}

void pedirDatos(){
    cout<<"ingrese n filas: "<<endl;cin>>fil;
    cout<<"ingrese n columans: "<<endl;cin>>col;

    for (int i = 0; i < fil; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<"ingrese valor: "<<endl;cin>>m[i][j];
        }
    }
}

void comprobarSimetria(int m[][100],int fil,int col){
    int cont=0;

    if(fil==col){
        for (int i = 0; i < fil; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if(m[i][j]==m[j][i]) cont++;
            }
        }
    }

    if(cont==(fil*col)){
        cout<<"la matriz es simetrica"<<endl;
    }    
    else cout<<"la matriz no es simetrica"<<endl;
}