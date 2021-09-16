#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a=2;
    double x1=1,x2=(0.5)*(x1+a/x1);
    while(fabs(x2-x1)>1e-10){
        x1 = x2;
        x2 = (0.5)*(x1+a/x1);
    }
    cout<<"sqrt(a)="<<x2<<endl;
}