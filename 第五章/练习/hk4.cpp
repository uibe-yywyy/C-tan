#include <iostream>
using namespace std;

int main(){
    int array[10]={1,3,5,6,9,17,24,56,98};
    int n;
    cout<<"please input n:";
    cin>>n;

    if(array[0]>n){
        for(int i=8;i>=0;i--){
            array[i+1]=array[i];
        }
        array[0]=n;
    }
    else if(array[8]<=n){
        array[9]=n;
    }
    else{
        int pos;
        for(int i=0;i<=9;i++){
            if(array[i]<=n && array[i+1]>n){
                pos=i+1;
                break;
            }
        }
        for(int j=9;j>=pos;j--){
            array[j]=array[j-1];
        }
        array[pos]=n;
    }

    for(int i=0;i<10;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}