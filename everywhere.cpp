#include <iostream>
#include <string>

using namespace std;

int main(){

        int intTotalCases;

        cin>>intTotalCases;

        for(int i =0;i<intTotalCases;i++){
                int intCases,intCountCity=0;
                cin>>intCases;
                string strCity[intCases];

                for(int k = 0;k<intCases;k++)
                        cin>>strCity[k];

                for(int k = 0;k<intCases;k++){
                        for(int z = k+1;z<intCases;z++){
                                if(strCity[k]==strCity[z]){
                                        strCity[z]="A";
                                }
                        }
                }

                for(int k =0;k<intCases;k++){
                        if(strCity[k]!="A")
                                intCountCity++;
                }

                cout<<intCountCity<<endl;
        }

return 0;}
