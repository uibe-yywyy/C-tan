#include <iostream>
#include <string>
using namespace std;

int main(){
    string psd;
    string up="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string low="abcdefghijklmnopqrstuvwxyz";
    cout<<"please input password:";
    cin>>psd;
    cout<<"password:"<<psd<<endl;
    for(int i=0;i<20;i++){
        if(isupper(psd[i])){
            int j=0;
            for(j=0;j<26;j++){
                if(up[j]==psd[i]){
                    psd[i]=up[24-j+1];
                    break;
                }
            }
        }
        else if(islower(psd[i])){
            int j=0;
            for(j=0;j<26;j++){
                if(low[j]==psd[i]){
                    psd[i]=low[24-j+1];
                    break;
                }
            }
        }   
    }
    cout<<"passage:"<<psd<<endl;

    return 0;
}
