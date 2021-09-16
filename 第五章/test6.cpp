#include <iostream>
using namespace std;

int main(){
    int max_value(int x,int max);
    int i,j,row=0,col=0,max;
    int a[3][4]={{5,12,23,56},{19,28,37,46},{-12,-34,6,8}};
    max = a[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            max = max_value(a[i][j],max);
            if(max==a[i][j]){
                row=i;
                col=j;
            }
        }
    }
    cout<<"max="<<max<<" ,row="<<row<<" ,col="<<col<<endl;
    return 0;
}

int max_value(int x,int max){
        return (x>max)?x:max;
}