#include <iostream>
#include <cmath>
using namespace std;

int main(){
    void gotbaha(int n);
    int n;
    cout<<"please input n:";
    cin>>n;
    gotbaha(n);
    return 0;
}

void gotbaha(int n){
    bool prime(int);
    for(int i=1;i<=n/2;i++){
        if(prime(i)&&prime(n-i)){
            cout<<"n="<<i<<"+"<<n-i<<endl;
        }
    }
}


bool prime(int n){
    for(int i=n-1;i>=sqrt(n);i--){
        if(n%i==0) return false;
    }
    return true;
}