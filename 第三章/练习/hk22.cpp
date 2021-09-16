#include <iostream>
using namespace std;

int main(){
    int n = 10,sn=1;
    for(int i=1;i<=n;i++){
        sn=(sn+1)*2;
    }
    cout<<"sn="<<sn<<endl;
    return 0;
}