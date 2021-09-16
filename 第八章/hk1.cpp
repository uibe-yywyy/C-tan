#include<iostream>
using namespace std;

class Time{
    public:
        void set_time();
        void show_time();
    private:
        int hour;
        int minute;
        int sec;
};

Time t;
int main(){
    t.set_time();
    t.show_time();
    return 0;
}

void Time::set_time(){
    cout<<"please input"<<endl;
    cin>>hour;
    cin>>minute;
    cin>>sec;
};

void Time::show_time(){
    cout<<"hour:"<<hour<<"minute:"<<minute<<"sec:"<<sec<<endl;
}