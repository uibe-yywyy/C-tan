#include <iostream>
#include <string>
using namespace std;

struct Person
{
    string name;
    int count;
    /* data */
};

int main(){
    Person leader[3] = {"a",0,"b",0,"c",0};
    int i,j;
    string name;
    for(i=0;i<10;i++){
        cin>>name;
        for(j=0;j<3;j++){
            if(name==leader[j].name){
                leader[j].count+=1;
            }
        }
    }
    cout<<"投票完毕"<<endl;
    cout<<"投票结果："<<endl;
    for(i=0;i<3;i++){
        cout<<"name:"<<leader[i].name<<"  count:"<<leader[i].count<<endl;
    }
    return 0;
}
