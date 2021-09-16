#include <iostream>
using namespace std;

int main(){
    int a[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int i=0,j=14,m,k,pos;
    cout<<"please input k:";
    cin>>k;
    if(a[15]<k||a[0]>k){
        cout<<"no"<<endl;
    }
    while(i<=j){
        m=(i+j)/2;
        if(a[m]>k){
            j=m-1;
        }
        else if(a[m]<k){
            i=m+1;
        }
        else{
            pos=m;
            break;
        }
    }
    cout<<"pos="<<pos<<endl;
    return 0;
}