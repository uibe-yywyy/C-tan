#include <iostream>
using namespace std;

int main(){
    int bigf(int,int);
    int smallf(int,int);
    int x,y;
    cout<<"please input x,y:";
    cin>>x>>y;
    cout<<"big="<<bigf(x,y)<<endl;
    cout<<"small="<<smallf(x,y)<<endl;
    return 0;
}

int bigf(int x,int y){
    int i = (x>y)?y:x;
    for(;i>=1;i--){
        if(x%i==0&&y%i==0) return i;
    }
}

int smallf(int x,int y){
    int i=(x>y)?x:y;
    for(;i<=x*y;i++){
        if(i%x==0&&i%y==0) return i;
    }
}