#include <iostream>
using namespace std;

int main(){
    int n,sum;
    cout<<"please input n:";
    cin>>n;
    int i=1;
    do{sum+=i;i++;}while(i<=n);
    cout<<"sum="<<sum<<endl;
    return 0;
}