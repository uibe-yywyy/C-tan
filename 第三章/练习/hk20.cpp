#include <iostream>
using namespace std;

int main(){
    bool judgePerfect(int);
    for(int i=1;i<=1000;i++){
        if(judgePerfect(i)){
            cout<<i<<','<<"factors are:";
            for(int j=1;j<=i/2;j++){
                if(i%j==0){
                    cout<<j<<' ';
                }
            }
            cout<<endl;
        }
    }

    return 0;
}

bool judgePerfect(int n){
    int sn=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sn+=i;
        }
    }
    return sn==n;
}