#include <iostream>
using namespace std;

int main(){
    int sum_matrix(int a[3][3],bool left);
    int a[3][3]={{1,22,11},{12,1,3},{1,2,41}};
    bool left=true;
    cout<<"sum1:"<<sum_matrix(a,left)<<endl;
    cout<<"sum2:"<<sum_matrix(a,!left)<<endl;
    return 0;
}

int sum_matrix(int a[3][3],bool left){
    int s=0;
    if(left){
        for(int i=0;i<3;i++){
            s+=a[i][i];
        }
    }
    else{
        for(int i=0;i<3;i++){
            s+=a[i][2-i];
        }
    }
    return s;
}