#include <iostream>
#include <cmath>
#include <iomanip> //使用io流控制符所引用的头文件
using namespace std;

int main(){
    double a,b,c;
    cout<<"please enter a,b,c:";
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && a+c>b){
        double area,s;
        s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<setiosflags(ios::fixed)<<setprecision(4);
        cout<<"area="<<area<<endl;
    }
    return 0;
}