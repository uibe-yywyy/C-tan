#include <iostream>
using namespace std;

int main(){
    int f(int);
    int n;
    cout<<"please input n:";
    cin>>n;
    cout<<"answer="<<f(n)<<endl;
    return 0;
}

int f(int n){
    if(n==1)return 1*1;
    else{
        return (n*n)+f(n-1);
    }
}