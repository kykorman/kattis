#include <iostream>
using namespace std;

int main(){

        int intD1,intD2,intMaxDie,intMark=-1,intMax=0;

        cin>>intD1>>intD2;

        intMaxDie=intD1+intD2;

        int intProbs[intD1+intD2+1]={0},intMarkArr[intD1+intD2+1]={0};

        for(int i=1;i<=intD1;i++){
                for(int k =1;k<=intD2;k++){
                        intProbs[i+k]+=1;
                }
        }

        for(int i =0;i<intMaxDie;i++){
                if(intProbs[i]>intMax)
                        intMax=intProbs[i];
        }

        if(intMark==-1)
                intMark=intMax;

        for(int i = 0;i<intMaxDie;i++){
                if(intProbs[i]==intMax)
                        cout<<i<<endl;
        }

return 0;}
