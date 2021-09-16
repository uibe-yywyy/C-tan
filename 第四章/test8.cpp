#include <iostream>
using namespace std;

int main(){
    int max(int,int,int);
    double max(double,double,double);
    long max(long,long,long);
    int i1,i2,i3,i;
    cin>>i1>>i2>>i3;
    i=max(i1,i2,i3);
    cout<<"i_max="<<i<<endl;
    double d1,d2,d3,d;
    cin>>d1>>d2>>d3;
    d=max(d1,d2,d3);
    cout<<"d_max="<<d<<endl;
    long l1,l2,l3,l;
    cin>>l1>>l2>>l3;
    l=max(l1,l2,l3);
    cout<<"l_max="<<l<<endl;
}

int max(int a,int b,int c){
    if(b>a)a=b;
    if(c>a)a=c;
    return a;
}

double max(double a,double b,double c){
    if(b>a)a=b;
    if(c>a)a=c;
    return a;
}

long max(long a,long b,long c){
    if(b>a)a=b;
    if(c>a)a=c;
    return a;
}