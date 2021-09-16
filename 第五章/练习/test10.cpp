#include <iostream>
using namespace std;

int main(){
    char a[10];
    cout<<"please input char:";
    cin>>a;
    int u=0,l=0,d=0,s=0,o=0;
    for(int i=0;i<10;i++){
        if(isupper(a[i]))u+=1;
        else if(islower(a[i]))l+=1;
        else if(isdigit(a[i]))d+=1;
        else if(isspace(a[i]))s+=1;
        else o+=1;
    }
    cout<<"u="<<u<<" l="<<l<<" d="<<d<<" s="<<s<<" o="<<o<<endl;
    return 0;
}