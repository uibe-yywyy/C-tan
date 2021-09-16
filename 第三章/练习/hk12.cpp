#include <iostream>
#include <cmath>
using namespace std;

void printnum(int n){
    cout<<n%10;
}

int main(){
    int n,temp;
    cout<<"please input n:";
    cin>>n;
    int m=0;
    temp = n;
    while(temp>0){
        temp=temp/10;
        m+=1;
    }
    cout<<"m="<<m<<endl;
    
    int temp2 = n;
    while(temp2>0){
        printnum(temp2);
        temp2/=10;
    }
    cout<<endl;

    for(int i=m-1;i>=0;i--){
        double m=10;
        int j=n/pow(m,i);
        cout<<j;
        n%=(int)pow(m,i);
    }
}