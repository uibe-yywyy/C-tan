#include <iostream>
#include <cmath>
using namespace std;

int main(){
    bool isPrimer(int x);
    int n;
    cout<<"please input n:";
    cin>>n;
    if(isPrimer(n)) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    return 0;
}

bool isPrimer(int x){
    for(int i=x-1;i>=sqrt(x);i--){
        if(x%i==0){
            return false;
        }
    }
    return true;
}