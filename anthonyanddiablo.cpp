#include <iostream>
using namespace std;
#define PI 3.141592653589
int main(){
        double fltArea,fltPerim,fltRadius,fltCArea;

        cin>>fltArea>>fltPerim;
        fltRadius=fltPerim/(2*PI);
        fltCArea=PI*fltRadius*fltRadius;

        if(fltCArea>=fltArea)
                cout<<"Diablo is happy!\n";
        else
                cout<<"Need more materials!\n";
return 0;}
