#include <iostream>
using namespace std;

int main(){
    int c;
    double i,b;
    cout<<"please input the profit:";
    cin>>i;
    if(i<=100000){
        c=1;
    }
    else if(100000<i&&i<=200000){
        c=2;
    }
    else if(200000<i&&i<=400000){
        c=3;
    }
    else if(400000<i&&i<=600000){
        c=4;
    }
    else if(600000<i&&i<=1000000){
        c=5;
    }
    else if(1000000<i){
        c=6;
    }

    switch (c)
    {
    case 1:
        b=i*0.1;
        break;
    case 2:
        b=100000*0.1+0.075*(i-100000);
        break;
    case 3:
        b=100000*0.1+0.075*100000+(i-200000)*0.005;
        break;
    case 4:
        b=100000*0.1+100000*0.075+200000*0.005+(i-400000)*0.003;
        break;
    case 5:
        b=100000*0.1+100000*0.075+200000*0.005+200000*0.003+(i-600000)*0.0015;
        break;
    case 6:
        b=100000*0.1+100000*0.075+200000*0.005+200000*0.003+400000*0.0015+(i-1000000)*0.001;
        break;
    default:
        break;
    }
    cout<<"bonus="<<b<<endl;
}