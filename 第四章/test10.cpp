#include <iostream>
using namespace std;

template <typename T>
T max(T a,T b,T c){
    if(b>a)a=b;
    if(c>a)c=a;
    return a;
}

int main(){
    int i1=10,i2=13,i3=9,i;
    double d1=12.3,d2=14.442,d3=90.12,d;
    long l1=1231,l2=1231241,l3=2314234,l;
    i=max(i1,i2,i3);
    d=max(d1,d2,d3);
    l=max(l1,l2,l3);
    cout<<"i_max="<<i<<endl;
    cout<<"d_max="<<d<<endl;
    cout<<"l_max="<<l<<endl;
    return 0;
}