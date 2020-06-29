#include <iostream>
using namespace std;

int main(){
    int matriz1[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<matriz1[i][j];
        }
        cout<<"\n";
    } 
    cout<<"---"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<matriz1[j][i];
        }
        cout<<"\n";   
    }

    return 0;
}