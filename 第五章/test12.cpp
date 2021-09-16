#include <iostream>
#include <string>

using namespace std;

string name[50],num[50];
int n;

int main(){
    void input_data();
    void search(string name);
    string fname;
    cout<<"please input the number:";
    cin>>n;
    input_data();
    cout<<"please input the name:";
    cin>>fname;
    search(fname);
    return 0;
}

void input_data(){
    int i;
    for(i=0;i<n;i++){
        cout<<"input name and no of student"<<i+1<<":";
        cin>>name[i]>>num[i];
    }
}

void search(string fname){
    int i;
    bool flag=false;
    for(i=0;i<n;i++){
        if(name[i] == fname){
            cout<<name[i]<<" has been found,the no is:"<<num[i]<<endl;
            flag=true;
            break;
        }
    }
    if(flag==false){
        cout<<"can't find"<<endl;
    }
}