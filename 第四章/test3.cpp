#include <iostream>
using namespace std;

int main(){
    float a,b;
    cout<<"please input a,b:";
    cin>>a>>b;
    float add(float,float);
    cout<<"sum="<<add(a,b)<<endl;
    return 0;
}

float add(float a,float b){
    return a+b;
}