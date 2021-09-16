#include <iostream>
using namespace std;

int main(){
    int a1[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int a2[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    bool isR(int year);
    int year,month,day;
    cout<<"please input year,month,day:";
    cin>>year>>month>>day;
    int sumday=day;
    if(isR(year)){
        for(int i=0;i<month-1;i++){
            sumday+=a2[i];
        }
        cout<<"is the "<<sumday<<endl;
    }
    else{
        for(int i=0;i<month-1;i++){
            sumday+=a1[i];
        }
        cout<<"is the "<<sumday<<endl;
    }
    return 0;
}

bool isR(int year){
    if((year%4==0&&year%100!=0)||year%400==0){
        return true;
    }
    else{
        return false;
    }
}