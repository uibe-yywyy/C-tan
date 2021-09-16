#include <iostream>
using namespace std;
template <class numtype>

class compare{
    public:
        compare(numtype a,numtype b):x(a),y(b){};
        numtype max();
        numtype min();
    private:
        numtype x,y;
};

template <class numtype>
numtype compare<numtype>::max(){
    return (x>y)?x:y;
}
template <class numtype>
numtype compare<numtype>::min(){
    return (x>y)?y:x;
}

int main(){
    compare<int> comp1(3,7);
    cout<<comp1.max()<<endl;
    cout<<comp1.min()<<endl<<endl;

    compare<float> comp2(3.2,7.3);
    cout<<comp2.max()<<endl;
    cout<<comp2.min()<<endl<<endl;

    return 0;
}