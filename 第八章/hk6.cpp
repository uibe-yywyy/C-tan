#include <iostream>
using namespace std;

class rectangle{
    private:
        float w;
        float l;
        float h;
        float v;
    public:
        void setvalue();
        void calculate();
        void display();
};

void rectangle::setvalue(){
    cout<<"please input"<<endl;
    cin>>w;
    cin>>l;
    cin>>h;
}

void rectangle::calculate(){
    v = w*l*h;
}

void rectangle::display(){
    cout<<"v:"<<v<<endl;
}

int main(){
    rectangle a;
    a.setvalue();
    a.calculate();
    a.display();
    return 0;
}