#include <iostream>
#include <math.h>
using namespace std;

int main(){

    float fltMax;
    int intW, intH,intCurrent, intMatches;

    cin>>intMatches>> intW>> intH;


    fltMax=pow(intW*intW+intH*intH, .5);

    for(int i=0;i<intMatches;i++){
        cin>>intCurrent;
        if (intCurrent<=fltMax)
            cout<<"DA"<<endl;
        else
            cout<<"NE"<<endl;

    }

return 0;}
