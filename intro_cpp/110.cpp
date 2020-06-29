 #include <iostream>
 using namespace std;

//prototipo
int findMax(int x,int y);


int main (){
    int n1,n2,max;
    cout<<"digite dos numeros "<<endl;cin>>n1>>n2;
    max=findMax(n1,n2);
    cout<<"num max: "<<max<<endl;

    return 0;
}

//Definicion de funcion
int findMax(int x,int y){
    int numMax;

    if(x>y)numMax=x;
    else numMax=y;

    return numMax;
}