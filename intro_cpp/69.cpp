#include <iostream>
using namespace std;

int main (){
    int m1[3][3]={{1,2,3},{4,5,6},{7,8,9}},m2[3][3]={{9,8,7},{6,5,4},{3,2,1}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<" "<<m1[i][j]*m2[i][j];
        }
        cout<<"\n";
    }
    

    return 0;
}