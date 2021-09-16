#include <iostream>
using namespace std;

int main(){
    char a,b,c,str;
    for(str='x';str<='z';str++){
        if(str!='x'&&str!='z'){
            c=str;
        }
    }
    for(str='x';str<='z';str++){
        if(str!='x'&&str!=c){
            a=str;
        }
    }
    for(str='x';str<='z';str++){
        if(str!=a&&str!=c){
            b=str;
        }
    }
    cout<<"a vs "<<a<<endl;
    cout<<"b vs "<<b<<endl;
    cout<<"c vs "<<c<<endl;
    return 0;
}