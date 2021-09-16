#include <iostream>
using namespace std;

int main(){
    int a=0,b=0,f=0,d=0,e=0;
    char c;
    while((c=getchar())!='\n'){
        if((c>=65&&c<=90)||(c>=97&&c<=122)){
            a++;
        }
        else if(isspace(c)){
            b++;
        }
        else if(isdigit(c)){
            f++;
        }
        else{
            d++;
        }
    }
    cout<<"alpha="<<a<<" digit="<<f<<" space="<<b<<" others="<<d<<endl;
}