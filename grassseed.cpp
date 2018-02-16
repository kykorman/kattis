#include <iostream>
using namespace std;

int main(){

        int intLawns;
        double dblTotal=0,dblCost;

        cin>>dblCost>>intLawns;

        for(int i =0;i<intLawns;i++){

                double dblWidth, dblLength;

                cin>>dblWidth>>dblLength;

                dblTotal+=dblWidth*dblLength*dblCost;

        }

        printf("%.7f\n",dblTotal);
return 0;}
