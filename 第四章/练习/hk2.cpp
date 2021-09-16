#include <iostream>
#include <cmath>
using namespace std;

int main(){
    void f1(double);
    void f2(double,double,double,double);
    void f3(double,double,double,double);
    double a,b,c;
    cout<<"please input a,b,c:";
    cin>>a>>b>>c;
    double s=b*b-4*a*c;
    if(s==0) f2(s,b,a,c);
    else if(s<0) f1(s);
    else if(s>0) f3(s,b,a,c);
    return 0;
}

void f1(double s){
    string ans = "error!";
    cout<<ans<<endl;
}

void f2(double s,double b,double a,double c){
    double x=(-b+sqrt(s))/2*a;
    cout<<"x1=x2="<<x<<endl;
}

void f3(double s,double b,double a,double c){
    double x1=(-b+sqrt(s))/2*a;
    double x2=(-b-sqrt(s))/2*a;
    cout<<"x1="<<x1<<" x2="<<x2<<endl;
}
