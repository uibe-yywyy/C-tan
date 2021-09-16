#include <iostream>
using namespace std;

class complex{
    public:
        complex(float,float);
        void display();
        float a;
        float b;
};

complex::complex(float r,float i){
    a = r;
    b = i;
}

void complex::display(){
    cout<<a<<"+"<<b<<"i"<<endl;
}

complex operator+(complex &c1,complex &c2){
    return (complex(c1.a+c2.a,c1.b+c2.b));
}

int main(){
    complex c1(1,2);
    complex c2(2,3);
    complex c3 = c1+c2;
    c3.display();
    return 0;
}
