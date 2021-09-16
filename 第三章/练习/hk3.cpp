#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double f,c;
    cout<<"please input f:";
    cin>>f;
    c = (5.0/9.0)*(f-32); //注意，int类型相除会自动向0取整，即使变为double类型也不行，所以需要将int类型变为两个double类型相除
    cout<<"c="<<c<<endl;
    return 0;
}