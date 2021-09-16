#include <iostream>
using namespace std;

int main(){
    char c1='C',c2='h',c3='i',c4='n',c5='a';
    char transform(char x);
    c1 = transform(c1);
    c2 = transform(c2);
    c3 = transform(c3);
    c4 = transform(c4);
    c5 = transform(c5);
    cout<<c1<<c2<<c3<<c4<<c5<<endl;
}

char transform(char x){
    x = x+4;
    return x;
}