#include<iostream>
using namespace std;

int main(){
    int intR, intC, intZr, intZc;

    cin>>intR>>intC>>intZr>>intZc;
    string strScan[intR];


    for(int i=0;i<intR;i++){
        cin>>strScan[i];
    }
    for(int i=0;i<intR;i++){
            for(int r =0;r<intZr;r++){

        for(int k=0;k<intC;k++){
                for(int q=0;q<intZc;q++)
                    cout<<strScan[i][k];

            }
            cout<<endl;
        }

    }
return 0;}
