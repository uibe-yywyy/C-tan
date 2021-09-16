#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char a[6]="*****";
    char s[11]="";
    for(int i=0;i<5;i++){
        strcpy(s,"");
        for(int j=0;j<i;j++){
            strcat(s," ");
        }
        cout<<strcat(s,a)<<endl;
        
    }
    return 0;
}