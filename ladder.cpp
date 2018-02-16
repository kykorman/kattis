#include <iostream>
#include <math.h>
#define PI 3.14159265358
using namespace std;

int main(){

        float fltH, fltTheta;
        int intResult;

        cin>>fltH>>fltTheta;

        intResult=ceil(fltH/sin(fltTheta*PI/180));

        cout<<intResult;
return 0;}
