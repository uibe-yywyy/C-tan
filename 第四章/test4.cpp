#include <iostream>
using namespace std;

int max(int,int);
int max_4(int,int,int,int);
int main(){
    int a,b,c,d;
    printf("please input a,b,c,d:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("max=%d\n",max_4(a,b,c,d));
    return 0;
}

int max(int a,int b){
    return (a>b)?a:b;
}

int max_4(int a,int b,int c,int d){
    int m = max(a,b);
    m = max(m,c);
    m = max(m,d);
    return m;
}