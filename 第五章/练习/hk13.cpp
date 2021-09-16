#include <iostream>
using namespace std;

int main(){
    char a[10]="abcde";
    char b[5]="abcd";
    void strcat(char a[10],char b[5]);
    strcat(a,b);
    cout<<a<<endl;
    return 0;
}

void strcat(char a[10],char b[5]){
    for(int i=0;i<10;i++){
        if(a[i]=='\0'){
            int j;
            for(j=0;j<5;j++){
                a[i+j]=b[j];
            }
            //cout<<a<<endl;
            break;
        }
    }
}