#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cout<<"please input a,b,c,d:";
    cin>>a>>b>>c>>d;
    int max(int,int);
    int m = max(max(max(a,b),c),d);
    cout<<"max="<<m;
    return 0;
}

int max(int x,int y){
    return (x>y)?x:y;
}