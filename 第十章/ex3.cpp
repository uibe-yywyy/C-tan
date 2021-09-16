#include <iostream>
using namespace std;

class complex{
    public:
        complex(float,float);
        void display();
        friend complex operator+(complex &,complex &);
        friend complex operator+(int i,complex &);
        friend complex operator+(complex &,int i);
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

complex operator+(int i,complex &c){
    return(complex(c.r+i,c.i));
}

complex operator+(complex &c,int i){
    return(complex(c.r+i,c.i));
}




int main(){
    complex c1(1,2);
    complex c2(2,3);
    complex c3 = c1+c2;
    complex c4 = c1+2;
    complex c5 = 1+c1;
    c3.display();
    c4.display();
    c5.display();
    return 0;
}