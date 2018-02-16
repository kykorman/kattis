#include <iostream>
#include <string>
using namespace std;

int main(){

        int intHowMany=-1,k=0;

        for(int q = 1;intHowMany!=0;q++){
                cin>>intHowMany;
                if(intHowMany==0)
                        continue;
                string strNames[intHowMany];

                for(int i =0;i<intHowMany;i++){
                        cin>>strNames[i];

                }
                cout<<"SET "<<q<<endl;
                for(int i =0;i<intHowMany;i+=2){

                                cout<<strNames[i]<<endl;
                }

                if(intHowMany%2==1)
                        k=intHowMany-2;
                else
                        k=intHowMany-1;

                for(k;k>0;k-=2){
                        cout<<strNames[k]<<endl;
                }
        }


return 0;}
