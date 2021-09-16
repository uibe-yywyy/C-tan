#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double p,s,sum=0,n=1;
    int i=1,m=1;
    s=m/n;
    while(fabs(s)>=1e-7){
        sum+=s;
        n+=2;
        m = -m;
        s = m/n;
    }
    p = sum*4;
    cout<<"pi="<<setiosflags(ios::fixed)<<setprecision(6)<<p<<endl;
    return 0;
}