#include <iostream>
using namespace std;

int main(){
    int a[10];
    int i;
    for(i=0;i<10;i++){
        cin>>a[i];
    }
    cout<<endl;
    for(i=0;i<10;i++){
        cout<<*(a+i)<<" ";
        //cout<<a[10]<<" ";
    }
    cout<<endl;
    return 0;
}

// int main(){
//     int a[10];
//     int i,*p=a;
//     for(i=0;i<10;i++){
//         cin>>*(p+i);
//     }
//     cout<<endl;
//     for(p=a;p<a+10;p++){
//         cout<<*p<<" ";
//     }
//     cout<<endl;
//     return 0;
// }