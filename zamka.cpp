#include <iostream>
using namespace std;

int main(){
        int intDigAddTo, intLow, intHigh,intLowOut,intHighOut, intCurrDig;

        cin>>intLow>>intHigh>>intDigAddTo;

        for(int i =intHigh;i>=intLow;i--){

        intCurrDig=i%100000/10000+i%10000/1000+i%1000/100+i%100/10+i%10;
                if(intCurrDig==intDigAddTo)
                        intLowOut=i;
        }
        for(int i =intLow;i<=intHigh;i++){
        intCurrDig=i%100000/10000+i%10000/1000+i%1000/100+i%100/10+i%10;
                if(intCurrDig==intDigAddTo)
                        intHighOut=i;
        }

        cout<<intLowOut<<endl<<intHighOut<<endl;
return 0;}
