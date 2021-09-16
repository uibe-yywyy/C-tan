#include <iostream>
using namespace std;

class matrix{
    public:
        matrix();
        friend matrix operator+(matrix &,matrix &);
        friend ostream& operator<<(ostream &,matrix &);
        friend istream& operator>>(istream &,matrix &);
    private:
        int m[2][3];
};

matrix::matrix(){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            m[i][j] = 0;
        }
    }
}

matrix operator+(matrix &m1,matrix &m2){
    matrix m3;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            m3.m[i][j] = m1.m[i][j]+m2.m[i][j];
        }
    }
    return (m3);
}

ostream& operator<<(ostream &out,matrix &m){
    out<<m.m[0][0]<<" "<<m.m[0][1]<<" "<<m.m[0][2]<<endl;
    out<<m.m[1][0]<<" "<<m.m[1][1]<<" "<<m.m[1][2]<<endl;
    return out;
}

istream& operator>>(istream &in,matrix &m){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            in>>m.m[i][j];
        }
    }
    return in;
}

int main(){
    matrix m1;
    matrix m2;
    cin>>m1;
    cin>>m2;
    matrix m3 = m1+m2;
    cout<<m3;
    return 0;
}