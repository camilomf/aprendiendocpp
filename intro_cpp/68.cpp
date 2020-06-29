#include <iostream>
using namespace std;

int main (){
    int mat1[3][3]={{1,0,3},{4,5,6},{7,8,9}},mat2[3][3]={{1,4,7},{2,5,8},{3,6,9}};
    char band = 'F';

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mat1[j][i]==mat2[i][j]) band = 'T';
            else {
                band = 'F';
            }
            if(band=='F')break;
        }
        if(band=='F')break;
    }

    if(band=='T')cout<<"matriz es trasnpuesta"<<endl;
    else cout<<"matriz no es transpuesta"<<endl;
    
    
    return 0;
}