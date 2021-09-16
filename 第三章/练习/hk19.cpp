#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int n;
    bool iswater(int i);
    for(int i=100;i<=999;i++){
        if(iswater(i)){
            cout<<setw(5)<<i;
            n+=1;
        }
        if(n%5==0){
            cout<<endl;
        }
        
    }
}

bool iswater(int i){
    double a,b,c;
    a = i/100;
    b = (i/10)%10;
    c = i%10;
    return pow(a,3)+pow(b,3)+pow(c,3)==i;
}