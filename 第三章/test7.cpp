#include <iostream>
using namespace std;

int main(){
    char c;
    cin>>c;
    c=(c>='A' && c<='Z')?(c+32):c; //条件表达式
    cout<<c<<endl;
    return 0;
}