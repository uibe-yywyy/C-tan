#include <iostream>
using namespace std;

int main(){
    int a = 12;
    a+=a;
    cout<<a<<endl;
    a=12;
    a-=3;
    cout<<a<<endl;
    a=12;
    a*=2+3;
    cout<<a<<endl;
    a=12;
    a/=a+a;
    cout<<a<<endl;
    int n=5;
    a=12;
    a%=(n%=2);
    cout<<a<<endl;
    a = 12;
    a+=a-=a*=a;
    cout<<a<<endl;
}