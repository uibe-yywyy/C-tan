#include <iostream>
using namespace std;

int main(){
    struct Student
    {
        int num;
        string name;
        string sex;
        float score;
        /* data */
    };
    Student stu;
    Student *p = &stu;
    stu = {101,"ll","male",50};
    cout<<(*p).name<<" "<<(*p).sex<<" "<<(*p).score<<endl;
    return 0;
}