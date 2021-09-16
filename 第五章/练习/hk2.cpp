#include <iostream>
using namespace std;

int main(){
    void select_sort(int array[]);
    int array[10];
    cout<<"please input the number:";
    for(int i=0;i<10;i++){
        cin>>array[i];
    }
    select_sort(array);
    return 0;
}

void select_sort(int array[]){
    int pos,end,max;
    end=9;
    for(;end>0;end--){
        max=0;
        for(pos=0;pos<=end;pos++){
            if(array[pos]>array[max]){
                max=pos;
            }
        }
        int temp;
        temp = array[max];
        array[max] = array[end];
        array[end] = temp;
    }

    for(int i=0;i<10;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}