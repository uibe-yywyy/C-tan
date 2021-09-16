#include <iostream>
using namespace std;

int main(){
    int m,n;
    int a,b;
    cout<<"please input m,n:";
    cin>>m>>n;
    for(int i=(m>n)?n:m;i>=1;i--){
        if(m%i==0&&n%i==0){
            a=i;
            break;
        }
    }

    for(int i=(m>n)?m:n;i<=m*n;i++){
        if(i%m==0&&i%n==0){
            b=i;
            break;
        }
    }
    cout<<"a="<<a<<" b="<<b<<endl;
}