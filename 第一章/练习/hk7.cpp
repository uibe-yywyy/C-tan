#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    int f(int a,int b,int c);
    cin>>a>>b>>c;
    c = f(a,b,c);
    cout<<c<<endl;
    return 0;
}

int f(int a,int b,int c){
    int m;
    if(a<b) m = a;
    else m = b;
    if(m>c) m = c;
    return m;
}
