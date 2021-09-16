#include <iostream>
using namespace std;

struct student
{
    int num;
    float score;
    student *next;
};

int main(){
    student a,b,c,*head,*p;
    a.num = 1;a.score = 100;
    b.num = 2;b.score = 99;
    c.num = 3;c.score = 98;
    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;
    p = head;
    while(p!=NULL){
        cout<<(*p).num<<" "<<(*p).score<<endl;
        p = (*p).next;
    }
}