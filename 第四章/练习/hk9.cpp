#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"please input n:";
    cin>>n;
    char a='A',b='B',c='C';
    void hanno(int,char,char,char);
    hanno(n,a,b,c);
    return 0;

}



void move(int id,char from,char to){
    cout<<id<<"from "<<from<<" to "<<to<<endl;
}

void hanno(int n,char a,char b,char c){
    void move(int,char,char);
    if(n==1)move(1,a,c);
    else{
        hanno(n-1,a,c,b);
        move(n,a,c);
        hanno(n-1,b,a,c);
    }
}