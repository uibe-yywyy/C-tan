#include <iostream>
using namespace std;
struct Date
{
    int month;
    int day;
    int year;
    /* data */
};

struct Student
{
    int num;
    string name;
    string sex;
    Date birthday;
    float score;
    /* data */
} student1,student2 = {1002,"wangli","female",5,23,1992,90};

int main(){
    student1 = student2;
    cout<<student1.name<<endl;
    cout<<student1.num<<endl;
    cout<<student1.sex<<endl;
    cout<<student1.birthday.day<<'.'<<student1.birthday.month<<'.'<<student1.birthday.year<<endl;
    cout<<student1.score<<endl;
    return 0;
}
