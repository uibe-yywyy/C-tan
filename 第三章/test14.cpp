#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    bool prime;
    int i=100;
    int n=0;
    for(;i<=200;i++){
        for(int j=2;j<(int)sqrt(i);j++){
            if(i%j==0){
                prime = false;
                break;
            }
            prime = true;
        }
        if(prime){
            cout<<setw(5)<<i;
            n+=1;
        }
        if(n%10==0){
            cout<<endl;
        }
    }
    cout<<endl;
    return 0;
}