//错误2
#include <iostream>
using namespace std;

int main(){
    int a = 1,b = 2; //错误4
    int c; //错误1
    c = a+b;
    cout<<"a+b="<<c<<endl; //错误3
    return 0;
}