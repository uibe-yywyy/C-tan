#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char a[6]="LIGHT";
    for(int i=0;i<5/2;i++){
        char temp;
        temp=a[i];
        a[i]=a[4-i];
        a[4-i]=temp;
    }
    cout<<a<<endl;
    return 0;
}