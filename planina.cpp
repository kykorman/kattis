#include <iostream>
#include <math.h>
using namespace std;

int main(){

        int intTop;
        long long intTmp;
        cin>>intTop;
        intTmp=pow(pow(2,intTop)+1,2);
        if(intTop>0)
                printf("%d\n",intTmp);
        else
                cout<<4<<endl;
return 0;}
