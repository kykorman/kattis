#include <iostream>
using namespace std;


int main(){

        int intCases;

        cin>>intCases;

        for(int k=0;k<intCases;k++){
                int intCS, intE,intTrue=0;

                cin>>intCS>>intE;

                int intCSArr[intCS]={0},intEArr[intE]={0};
                float fltEAvg=0, fltCSAvg=0;

                for(int i =0; i<intCS;i++)
                        cin>>intCSArr[i];

                for(int i =0; i<intE;i++)
                        cin>>intEArr[i];

                for(int i =0;i<intCS;i++)
                        fltCSAvg+=intCSArr[i];

                for(int i =0;i<intE;i++)
                        fltEAvg+=intEArr[i];

                fltCSAvg/=intCS;
                fltEAvg/=intE;

                for(int i =0;i<intCS;i++){
                        if(intCSArr[i]<fltCSAvg && intCSArr[i]>fltEAvg){
                                intTrue+=1;

                        }
                }
                cout << intTrue<<endl;
        }



return 0;}
