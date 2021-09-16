#include <iostream>
#include <string>
using namespace std;

int main(){
    string a="LIGHT";
    for(int i=0;i<5;i++){
        cout<<a[4-i];
    }
    return 0;
}