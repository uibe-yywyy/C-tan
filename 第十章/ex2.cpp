#include <iostream>
using namespace std;

class complex{
    public:
        complex(float,float);
        void display();
        friend complex operator+(complex &,complex &);
    private:
        float r;
        float i;
};

complex::complex(float a,float b){
    r = a;
    i = b;
}

void complex::display(){
    cout<<r<<"+"<<i<<"i"<<endl;
}

complex operator+(complex &c1,complex &c2){
    return(complex(c1.r+c2.r,c1.i+c2.i));
}

int main(){
    complex c1(1,2);
    complex c2(2,3);
    complex c3 = c1+c2;
    c3.display();
    return 0;
}
