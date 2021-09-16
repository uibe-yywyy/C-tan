#include <iostream>
using namespace std;
class Date;
class Time{
    public:
        Time(int,int,int);
        void display(Date &);
    private:
        int hour;
        int min;
        int sec;
};


class Date{
    friend Time;
    public:
        Date(int,int,int);
        //friend void display(Date &);
    private:
        int mon;
        int day;
        int year;
};

void Time::display(Date &d){
    cout<<d.year<<"/"<<d.mon<<"/"<<d.day<<"/"<<hour<<"/"<<min<<"/"<<sec<<endl;
}

Time::Time(int h,int m,int s){
    hour = h;
    min = m;
    sec = s;
}

Date::Date(int m,int d,int y){
    mon = m;
    day = d;
    year = y;
}

/* void display(Time &t,Date &d){
    cout<<d.year<<"/"<<d.mon<<"/"<<d.day<<"/"<<t.hour<<"/"<<t.min<<"/"<<t.sec<<endl;
}

int main(){
    Time t1(10,13,56);
    Date d1(12,25,2004);
    display(t1,d1);
    return 0;
} */

int main(){
    Time t1(10,13,56);
    Date d1(12,25,2004);
    t1.display(d1);
    return 0;
}