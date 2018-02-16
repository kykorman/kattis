#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.14159265358
int main(){

        int intRounds;
        cin>>intRounds;

        for(int i =0;i<intRounds;i++){
                float fltVelocity,fltHoriz,fltLow,fltHigh,fltTime,fltTheta;

                cin>>fltVelocity>>fltTheta>>fltHoriz>>fltLow>>fltHigh;

                fltTime=fltHoriz/(fltVelocity*cos(fltTheta*PI/180));
                if(fltVelocity*fltTime*sin(fltTheta*PI/180)-.5*9.81*fltTime*fltTime>=fltLow+1 && fltVelocity*fltTime*sin(fltTheta*PI/180)-.5*9.81*fltTime*fltTime<=fltHigh-1)
                        cout<<"Safe\n";
                else
                        cout<<"Not Safe\n";
        }

return 0;}
