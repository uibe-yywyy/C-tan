#include <iostream>
#include <string>
using namespace std;

int main(){
    string str[5];
    cout<<"please input string:";
    for(int i=0;i<5;i++){
        cin>>str[i];
    }
    int end=4;
    while(end>0){
        for(int i=0;i<end;i++){
            if(str[i]>str[i+1]){
                string temp;
                temp=str[i+1];
                str[i+1]=str[i];
                str[i]=temp;
            }
        }
        end-=1;
    }
    for(int i=0;i<5;i++){
        cout<<str[i]<<endl;
    }

    return 0;
}