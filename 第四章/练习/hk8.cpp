#include <iostream>
using namespace std;

int main(){
    double f(int x,int n);
    int n,x;
    double res;
    cout<<"please input x,n:";
    cin>>x>>n;
    res=f(x,n);
    cout<<"res="<<res<<endl;
    return 0;
}

double f(int x,int n){
    if(n==0)return 1;
    else if(n==1)return x;
    else{
        return ((2*n-1)*x-f(x,n-1)-(n-1)*f(x,n-2))/n;
    }
}