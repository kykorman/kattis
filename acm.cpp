#include <iostream>
#include <string>
using namespace std;

int main(){
        int intNumRight=0,intMinute=0;
        int intMinutes=0;
        string strTmp;
        char strProb[100];

        for(int i=0;1;i++){
                cin>>intMinutes;

                if(intMinutes!=-1){
                        cin>>strProb[i]>>strTmp;

                        if(strTmp=="right"){

                                intNumRight+=1;
                                intMinute+=intMinutes;

                                for(int k =0;k<i;k++){
                                        if(strProb[k]==strProb[i])
                                                intMinute+=20;
                                }

                        }
                }
                else{
                        cout<<intNumRight<<" "<<intMinute<<endl;
                        return 0;
                }

        }

return 0;}
