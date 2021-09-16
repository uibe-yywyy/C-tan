#include <iostream>
using namespace std;
class Student{
    public:
        Student(int,string,string);
        int num;
        string name;
        string sex; //必须是公用成员
};


class Teacher{
    public:
        Teacher(int,string,string);
        Teacher(Student &s){num = s.num;name = s.name;sex = s.sex;} //转换构造函数
        void display();
    private:
        int num;
        string name;
        string sex;
};

void Teacher::display(){
    cout<<num<<" "<<name<<" "<<sex<<endl;
}

Student::Student(int c,string n,string s){
    num = c;
    name = n;
    sex = s;
}

Teacher::Teacher(int c,string n,string s){
    num = c;
    name = n;
    sex = s;
}

int main(){
    Student s1(123,"yyw","male");
    Teacher t1(101,"yff","female");
    Teacher t2 = Teacher (s1); //装换
    t2.display();
    return 0;
}