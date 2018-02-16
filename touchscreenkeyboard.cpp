#include <iostream>
#include <string>
using namespace std;

int intRefRow[10000], intRefCol[10000];

string strTOP="qwertyuiop", strMID="asdfghjkl0", strBOT="zxcvbnm000";

string checkString(string A, string B){
        for(int i =0;i<A.length();i++){
                if(A[i]<B[i])
                        return A;
                if(A[i]>B[i])
                        return B;
        }

return A;}


int checkDist(string strTmp, int A){

    int intLen=0,intRow[strTmp.length()], intColumn[strTmp.length()];

    if(A==1){
        for(int i=0;i<=9999;i++){
            intRefRow[i]=0;
            intRefCol[i]=0;
        }
        for(int k=0; k<strTmp.length();k++){
            for(int i=0; i<10;i++){
                if(strTmp[k]==strTOP[i]){
                    intRefRow[k]=i;
                    intRefCol[k]=1;
                    continue;
                }
                else if(strTmp[k]==strMID[i]){
                    intRefRow[k]=i;
                    intRefCol[k]=2;
                    continue;
                }
                else if(strTmp[k]==strBOT[i]){
                    intRefRow[k]=i;
                    intRefCol[k]=3;
                    continue;
                }
            }
        }
    return 0;}
    else{
        for(int i=0;i<strTmp.length();i++){
            intRow[i]=0;
            intColumn[i]=0;
        }

        for(int k=0; k<strTmp.length();k++){
            for(int i=0; i<10;i++){
                if(strTmp[k]==strTOP[i]){
                    intRow[k]=i;
                    intColumn[k]=1;
                    continue;
                }
                else if(strTmp[k]==strMID[i]){
                    intRow[k]=i;
                    intColumn[k]=2;
                    continue;
                }
                else if(strTmp[k]==strBOT[i]){
                    intRow[k]=i;
                    intColumn[k]=3;
                    continue;
                }
            }
        }

        for(int i=0;i<strTmp.length();i++){
            int intTmpR=intRow[i], intTmpC=intColumn[i];

            intTmpR-=intRefRow[i];
            intTmpC-=intRefCol[i];

            if(intTmpR<0)
                intTmpR*=-1;
            if(intTmpC<0)
                intTmpC*=-1;
            intLen+=intTmpR+intTmpC;
        }
    }
return intLen;}

int main(){
        int intTotalRounds, intTmpRounds;

        cin>>intTotalRounds;

        for(int i=0; i<intTotalRounds; i++){

                string strTmp[10], strFirst;
                int intFirst,intTmp[10],intRounds;

                cin >> strFirst>> intRounds;
                intFirst=checkDist(strFirst,1);

                for(int k=0; k<intRounds; k++){
                    cin>>strTmp[k];
                    intTmp[k]=checkDist(strTmp[k], 0);
                }

                bool swapped = false;
                do{
                    swapped = false;
                        int intSwap=0;
                        string strSwap="";
                        for (int j =1; j < intRounds; j++){
                            if (intTmp[j-1] > intTmp[j]){  

                                intSwap = intTmp[j];
                                intTmp[j] = intTmp[j-1];
                                intTmp[j-1] = intSwap;

                                strSwap = strTmp[j];
                                strTmp[j] = strTmp[j-1];
                                strTmp[j-1]=strSwap;

                                swapped = true;
                            }
                        }

                } while (swapped);
                do{
                    swapped =false;
                    for(int k=0;k<intRounds;k++){
                        string strSwap;
                        if (intTmp[k] == intTmp[k+1]){
                            strSwap = checkString(strTmp[k],strTmp[k+1]);
                            if (strSwap == strTmp[k+1]){
                                strTmp[k+1]=strTmp[k];
                                strTmp[k]=strSwap;
                                swapped = true;
                            }
                        }
                    }
                }while(swapped);

                for(int q=0;q<intRounds;q++){
                    cout<<strTmp[q]<<" "<<intTmp[q]<<endl;
                        }
                }

return 0;}
