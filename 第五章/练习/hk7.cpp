#include <iostream>
using namespace std;

int main(){
    int a[3][3]={{1,3,4},{2,4,5},{6,5,23}};
    bool flag=false;
    for(int i=0;i<3;i++){
        int max=0;
        for(int j=0;j<3;j++){
            if(a[i][j]>a[i][max]){
                max=j;
            }
        }    
        int min=0;
        for(int n=0;n<3;n++){
            if(a[n][max]<a[min][max]){
                min=n;
            }
        }
        if(min==i){
            cout<<"an="<<a[i][max]<<endl;
            flag=true;
        }
    }
    if(!flag){
        cout<<"no an"<<endl;
    }
    return 0;
}