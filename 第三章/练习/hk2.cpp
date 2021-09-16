#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main(){
    double pi = M_PI;
    double r,h;
    cout<<"please input r,h:";
    cin>>r>>h;
    double c,s,area,v1,v2;
    c = pi*2*r;
    s = pi*r*r;
    area = 4*pi*r*r;
    v1 = (double)(4/3)*pi*r*r*r;
    v2 = h*s;
    cout<<setiosflags(ios::fixed)<<setprecision(2);
    cout<<"c="<<c<<endl;
    cout<<"s="<<s<<endl;
    cout<<"area"<<area<<endl;
    cout<<"v1="<<v1<<endl;
    cout<<"v2="<<v2<<endl;
    return 0;
}