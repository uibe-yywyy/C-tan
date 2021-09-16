#include <iostream>
using namespace std;

int main(){
    int a[10][100]={{1},{1,1}};
    for(int i=2;i<=10;i++){
        for(int j=0;j<=i;j++){
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<=i;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}