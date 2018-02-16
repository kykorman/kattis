#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    int junk,numNums;
    cin>>numNums;
    for(int i=0;i<numNums;i++){
        int num,numLess=0,junk[1002]={0};
        double avg=0;
        cin>>num;
        for(int k=0;k<num;k++){
            cin>>junk[k];
            avg+=junk[k];
        }
        avg/=num;
        for(int k=0;k<num;k++){
            if(junk[k]>avg)
                numLess++;

        }


        printf("%.3f%%\n", (double)100*numLess/num);

    }


return 0;}
