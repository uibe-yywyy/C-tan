#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"please input a,b,c:";
    cin>>a>>b>>c;
    int max;
    max = (a>b)?a:b;
    max = (max>c)?max:c;
    cout<<"max="<<max<<endl;
    return 0;
}