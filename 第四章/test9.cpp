#include <iostream>
using namespace std;

int main(){
    int max(int,int,int);
    int max(int,int);
    int a=8,b=-12,c=27;
    cout<<"max(a,b,c)="<<max(a,b,c)<<endl;
    cout<<"max(a,b)="<<max(a,b)<<endl;
}

int max(int a,int b,int c){
    if(b>a)a=b;
    if(c>a)a=c;
    return a;
}

int max(int a,int b){
    return (a>b)?a:b;
}