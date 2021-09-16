#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double res,x;
    cout<<"please input x:";
    cin>>x;
    cout<<"sinh(x)="<<sinh(x)<<endl;
    return 0;
}

double sinh(double x){
    double res;
    res = (exp(x)-exp(-x))/2;
    return res;
}