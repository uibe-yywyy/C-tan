#include <iostream>
using namespace std;

int main(){
    int year;
    bool leap;
    cout<<"please input the year";
    cin>>year;
    if(year%4==0){
        if(year%100!=0){
            leap = true;
        }
        else{
            if(year%400==0){
                leap = true;
            }
            else{
                leap = false;
            }
        }
    }
    else{
        leap = false;
    }
    if(leap){
        cout<<"is";
    }
    else{
        cout<<"is not";
    }
    cout<<" a leap year."<<endl;
    return 0;
}