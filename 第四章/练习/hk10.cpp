#include <iostream>
using namespace std;

int main(){
    void convert(int);
    int number;
    cout<<"please input number:";
    cin>>number;
    if(number<0){
        cout<<"-";
        number=-number;
    }
    convert(number);
    cout<<endl;
    return 0;
}

void convert(int n){
    int i;
    char c;
    if(((i=n/10)!=0)){
        convert(i);
    }
    c=n%10+'0';
    cout<<c;
}