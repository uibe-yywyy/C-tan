#include <iostream>
using namespace std;

int main(){
    int max(int x,int y); //声明函数
    int x,y,maxnum;
    cin>>x>>y;
    maxnum = max(x,y);
    cout<<"max is:"<<maxnum<<endl;
    return 0;
}

int max(int x,int y){
    int max;
    if(x>y){
        max = x;
    }
    else{
        max = y;
    }
    return max;
}