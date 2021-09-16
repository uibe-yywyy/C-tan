#include <iostream>
using namespace std;

int main(){
    int fac(int);
    int a,b,c,m;
    cout<<"please input a,b,c:";
    cin>>a>>b>>c;
    m = fac(a)+fac(b)+fac(c);
    cout<<"a!+b!+c!="<<m<<endl;
    return 0;
}

int fac(int n){
    if(n==1)return 1;
    else return n*fac(n-1);
}