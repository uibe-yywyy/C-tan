#include <iostream>
using namespace std;

int main(){
    int a[100]={1,1};
    for(int i=2;i<100;i++){
        if(a[i]==0){
            for(int j=2*i;j<100;j+=i){
                a[j]=1;
            }
        }
    }

    int n=0;
    for(int i=0;i<100;i++){
        if(a[i]==0){
            cout<<i<<" ";
            n++;
        }
        if(n%5==0) cout<<endl;
    }
}