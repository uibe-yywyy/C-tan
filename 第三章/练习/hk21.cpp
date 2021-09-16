#include <iostream>
using namespace std;

int main(){
    int n=20;
    double s1=1,s2=2,sn,temp;
    for(int i=1;i<=n;i++){
        sn+=s2/s1;
        temp=s1;
        s1=s2;
        s2=s2+temp;
    }
    cout<<"sn="<<sn<<endl;

    return 0;
}