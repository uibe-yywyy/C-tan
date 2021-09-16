#include <iostream>
using namespace std;

struct Student
{
    int num;
    string name;
    float socre[3];
    /* data */
};

int main(){
    void print(Student);
    Student stu;
    stu.num = 100;
    stu.name = "ll";
    stu.socre[0] =100;
    stu.socre[1] = 99;
    stu.socre[2] = 98;
    print(stu);

    return 0;
}

void print(Student stu){
    cout<<stu.num<<" "<<stu.name<<" "<<stu.socre[0]<<endl;
}