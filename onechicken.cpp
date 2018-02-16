#include <iostream>
using namespace std;

int main(){
        int intSub, intStart,intRes=0;

        cin>>intSub>>intStart;

        intRes=intStart-intSub;

        if(intRes==-1)
                cout<<"Dr. Chaz needs "<<intRes*-1<<" more piece of chicken!\n";
        else if(intRes<0)
                cout<<"Dr. Chaz needs "<<intRes*-1<<" more pieces of chicken!\n";
        else if(intRes==1)
                cout<<"Dr. Chaz will have "<<intRes<<" piece of chicken left over!\n";
        else
                cout<<"Dr. Chaz will have "<<intRes<<" pieces of chicken left over!\n";

return 0;}
