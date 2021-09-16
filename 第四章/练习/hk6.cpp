#include <iostream>
using namespace std;

int main(){
    double f(double);
    double fl(double);
    int a,b,c,d;
    a=1;
    b=2;
    c=3;
    d=4;
    double x0=1,x1=x0-f(x0)/fl(x0);
    do{
        x0=x1;
        x1=x0-f(x0)/fl(x0);
    }
    while(abs(x1-x0)>=1e-5);
    cout<<x1<<endl;
    return 0;
}

double f(double x){
    return x*x*x+2*x*x+3*x+4;
}

double fl(double x){
    return 3*x*x+4*x+3;
}