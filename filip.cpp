#include <iostream>
#include <string>
using namespace std;

int main(){


        string strNum1,strNum2;
        char chrSwap;
        int intNum1,intNum2;

                cin>>strNum1>>strNum2;

        chrSwap=strNum1[2];
        strNum1[2]=strNum1[0];
        strNum1[0]=chrSwap;

        chrSwap=strNum2[2];
        strNum2[2]=strNum2[0];
        strNum2[0]=chrSwap;

        intNum1=atoi(strNum1.c_str());
        intNum2=atoi(strNum2.c_str());

        if(intNum1>intNum2)
                cout<<intNum1<<endl;
        else
                cout<<intNum2<<endl;


return 0;}

