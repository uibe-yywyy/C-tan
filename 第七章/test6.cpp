#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    enum color{red,yellow,blue,white,black} pri;
    int i,j,k,n=0,loop;
    for(i = red;i<=black;i++){
        for(j = red;j<=black;j++){
            if(i!=j){
                for(k = red;k<=black;k++){
                    if(k!=i && k!=j){
                        n+=1;
                        cout<<setw(3)<<n;
                        for(loop=0;loop<=2;loop++){
                            switch (loop)
                            {
                            case 1:pri = color(i);break;
                            case 2:pri = color(j);break;
                            case 3:pri = color(k);break;
                            default:
                                break;
                            }
                            switch (pri)
                            {
                            case red:cout<<setw(8)<<"red";break;
                            case yellow:cout<<setw(8)<<"yellow";break;
                            case blue:cout<<setw(8)<<"blue";break;
                            case white:cout<<setw(8)<<"white";break;
                            case black:cout<<setw(8)<<"black";break;
                            default:
                                break;
                            }
                        }
                        cout<<endl;
                    }
                }
            }
        }
    }



    return 0;
}