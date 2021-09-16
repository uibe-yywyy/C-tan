#include <iostream>
using namespace std;

class student{
    public:
        int sno;
        int grade;
        student(int,int);
};

student::student(int s,int g){
    sno = s;
    grade = g;
}

int main(){
    void max(student *p);
    student s1(1,2);
    student s2(1,3);
    student s3(1,4);
    student s4(1,5);
    student s5(1,6);
    student s[5] = {s1,s2,s3,s4,s5};
    student *p = s;
    max(p);
    return 0;
}   

void max(student *p){
    int max=p->grade;
    int n=p->sno;
    for(int i=1;i<=5;i++){
        if((p+i)->grade>max){
            max = (p+i)->grade;
            n = (p+i)->sno;
        }
    }
    cout<<max<<";"<<n<<endl;
}