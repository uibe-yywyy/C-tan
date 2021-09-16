#include <iostream>
using namespace std;

int main(){
    char diamond[][5]={{' ',' ','*'},{' ','*',' ','*',' '},{'*',' ',' ',' ','*'},{' ','*',' ','*',' '},{' ',' ','*'}};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<diamond[i][j];
        }
        cout<<endl;
    }
    return 0;
}