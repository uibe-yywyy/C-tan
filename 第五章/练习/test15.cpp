#include <iostream>
#include <string>
using namespace std;

int main(){
    string str[5];
    cout<<"please input string:";
    for(int i=0;i<5;i++){
        cin>>str[i];
    }
    cout<<"answer:"<<endl;
    for(int i=0;i<5;i++){
        if(str[i][0]=='A'){
            cout<<str[i]<<endl;
        }
    }
    return 0;
}