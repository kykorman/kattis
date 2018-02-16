#include <iostream>
using namespace std;

int main(){

    int intCases;
        int intNums[2]={0},intSum=0;

    cin>>intCases;

    for(int i= 0;i<intCases;i++){
        intNums[1]=1;
        for(int k=0;intNums[1]!=0;k++){

            if(k==0)
                cin>>intNums[0];
            else if(k>0){
                intNums[0]=intNums[1];
                cin>>intNums[1];

                if((intNums[1]-intNums[0]*2>0)&&intNums[1]!=0){
                    intSum+=intNums[1]-intNums[0]*2;

                }
            }
            else
                cin>>intNums[1];

        }
    cout<<intSum<<endl;
    intSum=0;
    }

return 0;}
