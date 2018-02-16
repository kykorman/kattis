#include <iostream>
using namespace std;

int main(){
        int intSum=0,intMax[2]={0};

        for(int i =0;i<5;i++){
                int tmp1,tmp2,tmp3,tmp4;
                cin>>tmp1>>tmp2>>tmp3>>tmp4;

                intSum=tmp1+tmp2+tmp3+tmp4;
                if(intMax[1]<intSum){
                        intMax[0]=i;
                        intMax[1]=intSum;
                }
        }

        cout<<intMax[0]+1<<" "<<intMax[1]<<endl;

return 0;}
