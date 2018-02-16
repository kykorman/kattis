#include <iostream>
#include <math.h>
using namespace std;

int main(){

        int intRounds,intSum=0;

        cin>>intRounds;
        int intNums[intRounds];
        for(int i =0;i<intRounds;i++){
                cin>>intNums[i];
        }

        for(int i=0;i<intRounds;i++){
                int intMod;

                intMod=intNums[i]%10;
                intNums[i]-=intNums[i]%10;
                intNums[i]/=10;

                intNums[i]=pow(intNums[i],intMod);

                intSum+=intNums[i];
        }

        cout<<intSum<<endl;
return 0;}
