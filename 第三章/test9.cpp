#include <iostream>
using namespace std;

int main(){
    int c,s;
    double p,w,d,f;
    cout<<"please input p,w,s:";
    cin>>p>>w>>s;
    c = (s>=3000)?12:s/250;
    switch(c){
        case 1:d=2;break;
        case 2:
        case 3:d=5;break;
        case 4:
        case 5:
        case 6:
        case 7:d=8;break;
        case 8:
        case 9:
        case 10:
        case 11:d=10;break;
    }
    f = p*w*s*(1-d/100.0);
    cout<<"feight="<<f<<endl;
    return 0;
}