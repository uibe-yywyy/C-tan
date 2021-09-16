#include <iostream>
using namespace std;

class student{
    public:
        student(int s,int g){
            sno = s;
            grade = g;
        }
        void display(){
            cout<<sno<<";"<<grade<<endl;
        }
    private:
        int sno;
        int grade;
};

int main(){
    student s1(1,2);
    student s2(2,3);
    student s3(3,4);
    student s4(4,5);
    student s5(5,6);
    student s[5]={s1,s2,s3,s4,s5};
    student *p = s;
    
    //s[1].display();
    p->display();
    (p+2)->display();
    (p+4)->display();
    return 0;
}