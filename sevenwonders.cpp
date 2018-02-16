#include <iostream>
#include <string>
using namespace std;

int main(){

        int intT=0, intC=0, intG=0,intSum=0;

        string strCards;

        cin>>strCards;

        for(int i =0;i<strCards.length();i++){
                if(strCards[i]=='T')
                        intT++;
                else if(strCards[i]=='C')
                        intC++;
                else
                        intG++;
        }

        intSum=intT*intT+intC*intC+intG*intG;

        bool swapped = false;
        do{
                swapped=false;
                if(intT>0&&intC>0&&intG>0){
                        intT--;intG--;intC--;
                        intSum+=7;
                        swapped=true;
                }
        }while(swapped);

        cout<<intSum<<endl;

return 0;}
