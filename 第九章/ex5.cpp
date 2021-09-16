#include <iostream>
using namespace std;

class shop{
    public:
        void total();
        shop(int s,int num,float p):sno(s),num(num),price(p){};
        static void display();
        static float average();
    private:
        int sno; //销售员号
        static float discount; //折扣
        static float sum; //总价格
        static int n; //总数
        float price; //单价
        int num;
};

void shop::total(){
    if(n>10){
       sum+=(price*num)*0.98*discount;
    }
    else{
        sum+=(price*num)*discount;
    }
    n+=num;
}

float shop::average(){
    return (sum/n);
}

void shop::display(){
    cout<<"sum is:"<<sum<<"avg is:"<<average()<<endl;
}

float shop::sum=0;
int shop::n=0;
float shop::discount=0.9;

int main(){
    shop s1(101,5,23.5);
    shop s2(102,12,24.56);
    shop s3(103,100,21.5);
    s1.total();
    s2.total();
    s3.total();
    shop::display();
    return 0;
}