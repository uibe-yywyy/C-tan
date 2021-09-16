#include <iostream>
using namespace std;
#include "arraymax.h"

void Arraymax::set_value(){
    int i;
    for(i=0;i<10;i++){
        std::cin>>array[i];
    }
}

void Arraymax::max_value(){
    int i;
    max = array[0];
    for(i=0;i<10;i++){
        if(max<array[i]){
            max = array[i];
        }
    }
}

void Arraymax::show_value(){
   std::cout<<"max:"<<max<<std::endl;
}