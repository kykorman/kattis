#include <iostream>
using namespace std;

int main(){

        int intNumerator, intDenominator, intMixed[2];

        cin>>intNumerator>>intDenominator;
        while(intNumerator!=0||intDenominator!=0){
                intMixed[0]=intNumerator/intDenominator;
                intMixed[1]=intNumerator%intDenominator;
                cout<<intMixed[0]<<" "<<intMixed[1]<<" / "<<intDenominator<<endl;
                cin>>intNumerator>>intDenominator;
        }

return 0;}
