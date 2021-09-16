#include <iostream>
using namespace std;

int main(){
    int n=20,sn;
    int f(int);
    for(int i=1;i<=n;i++){
        sn+=f(i);
    }
    cout<<"sn="<<sn<<endl;
}

int f(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*f(n-1);
    }
}