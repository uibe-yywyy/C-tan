#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char a[10]="abcde";
    char b[5]="abcd";
    strcat(a,b);
    cout<<a<<endl;
    return 0;
}