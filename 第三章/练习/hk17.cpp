#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    int a=2;
    cout<<"please input n:";
    cin>>n;
    int sn=0;
    for(int i=1;i<=n;i++){
        for(int j=i-1;j>=0;j--){
            sn+=a*pow(10.0,j);
        }
    }
    cout<<"sn="<<sn<<endl;
    return 0;
}