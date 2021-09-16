#include <iostream>
using namespace std;

class complex{
    public:
        complex(double a,double b){r = a,i = b;}
        complex(double a){r = a;i = 0;}
        complex(){r = 0;i = 0;}
        operator double(){return r;}
        void display();
    private:
        double r;
        double i;
};

void complex::display(){
    cout<<r<<"+"<<i<<"i"<<endl;
}

int main(){
    complex c1(3,4);
    double d;
    d = 2.5+c1;
    cout<<d<<endl;
    complex c2(d);
    c2.display();
}