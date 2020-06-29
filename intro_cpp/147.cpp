#include <iostream>
#include <stdlib.h>

using namespace std;

int maximoNum(int *,int);

int main(){
    const int nElementos = 5;
    int num[5] = {1,0,3,4,2};

    cout<<"max: "<<maximoNum(num,nElementos)<<endl;
    return 0;
}

int maximoNum(int *dir, int nElementos){
    int max = 0;

    for (int i = 0; i < nElementos; i++)
    {
        if(*(dir+i)>max) {
            max = *(dir+i);
        }
    }

    return max;
}