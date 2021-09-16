#include <iostream>
#include <cmath>
using namespace std;
#define s(a,b,c) (a+b+c)/2
#define area(a,b,c) sqrt((s(a,b,c)-a)*s(a,b,c)*(s(a,b,c)-b)*(s(a,b,c)-c))

int main(){
    float a,b,c;
    cout<<"please input a,b,c:";
    cin>>a>>b>>c;
    if(a+b<c||a+c<b||b+c<a){
        cout<<"error"<<endl;
    }
    else{
        cout<<"area="<<area(a,b,c)<<endl;
    }
    return 0;
}