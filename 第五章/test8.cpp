#include <iostream>
using namespace std;

int main(){
    int max_value(int array[3][4]);
    int a[3][4]={{5,12,23,56},{19,28,37,46},{-12,-34,6,8}};
    cout<<"the max value is "<<max_value(a)<<endl;
    return 0;
}

int max_value(int array[3][4]){
    int i,j,max;
    max=array[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            if(array[i][j]>max){
                max=array[i][j];
            }
        }
    }
    return max;
}