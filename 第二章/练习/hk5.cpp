#include <iostream>
using namespace std;

int main(){
    cout<<3.5*3+2*7-'a'<<endl;
    cout<<26/3+34%3+2.5<<endl;
    cout<<26/3<<endl;
    cout<<45/2+(int)3.14159/2<<endl;
    int a,b,c;
    a = 3;
    a=b=(c=a+=6);
    cout<<a<<endl;
    a = 3*5,a=b=3*2;
    cout<<a<<endl;
    a = 3;
    cout<<(int)(a+6.5)%2+(a=b=5)<<endl;
    float x=2.5,y=4.7;
    a = 7;
    cout<<x+a%3*(int)(x+y)%2/4<<endl;
    a = 2,b=3,x=3.5,y=2.5;
    cout<<(float)(a+b)/2+(int)x%(int)y<<endl;
}