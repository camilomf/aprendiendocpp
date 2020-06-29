#include <iostream>

using namespace std;

int main(){
    int num, *dir_num;

    num = 20;

    dir_num = &num;

    cout<<*dir_num<<endl;
    cout<<dir_num<<endl;


    return 0;
}