#include <iostream>
using namespace std;

main(){
    void swap(int *p1,int *p2);
    int *p1,*p2,a,b;
    cin>>a>>b;
    p1 = &a;
    p2 = &b;
    if (a<b)swap(p1,p2);
    cout<<"max="<<*p1<<endl;
    return 0;
}

void swap(int *p1,int *p2){
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}