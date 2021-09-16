#include <iostream>
using namespace std;

int main(){
    int max(int,int);
    int a,b;
    cout<<"please input a,b:";
    cin>>a>>b;
    cout<<"max="<<max(a,b)<<endl;
    return 0;
}

int max(int a,int b){
    return (a>b)?a:b;
}