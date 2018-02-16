#include <iostream>
#include <string>
using namespace std;

int main(){

        int intRounds,intLost=0;

        cin>>intRounds;

        string strAbilities[intRounds];
        int intBattlesArr[intRounds]={0};

        for(int i =0;i<intRounds;i++)
                cin>>strAbilities[i];
        for(int i =0;i<intRounds;i++){
                for(int k =0;k<strAbilities[i].length()-1;k++){
                        if(strAbilities[i][k]=='C'&&strAbilities[i][k+1]=='D'){
                                intBattlesArr[i]=1;
                        }

                }
        }
        for(int i =0;i<intRounds;i++){
                if(intBattlesArr[i]==1)
                        intLost+=1;
        }
        cout<<intRounds-intLost<<endl;
return 0;}
