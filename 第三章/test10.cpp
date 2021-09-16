#include <iostream>
using namespace std;

int main(){
    int n,sum;
    cout<<"please input n:";
    cin>>n;
    int i=1;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<"sum="<<sum;
    return 0;
}