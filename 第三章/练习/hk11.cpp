#include <iostream>
using namespace std;

int main(){
    int s;
    char g;
    cout<<"please input scores:";
    cin>>s;
    if(90<=s&&s<=100){
        g = 'A';
    }
    else if(80<=s&&s<90){
        g = 'B';
    }
    else if(70<=s&&s<80){
        g = 'C';
    }
    else if(60<=s&&s<70){
        g = 'D';
    }
    else if(0<=s&&s<60){
        g = 'E';
    }
    cout<<"the grade is:"<<g<<endl;
    return 0;
}