#include <iostream>
using namespace std;

int main(){

    int intStatues,intPrinters=1,intDays=1;

    cin>>intStatues;

    while(!0){
        if(intPrinters<intStatues/2&&intPrinters==1){
            intPrinters=2;
        }
        else if(intPrinters<intStatues/2){
            intPrinters*=2;
        }
        else{
            intStatues-=intPrinters;
        }
        if(intStatues<=0){
            cout<<intDays<<endl;
            return 0;
        }
            intDays++;

    }

return 0;}
