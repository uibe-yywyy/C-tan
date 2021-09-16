#include <iostream>
#include <string>
using namespace std;

int main(){
    string a="*****";
    string s="";
    for(int i=0;i<5;i++){
        s="";
        for(int j=0;j<i;j++){
            s+=" ";
        }
        s+=a;
        cout<<s<<endl;
    }

    return 0;
}