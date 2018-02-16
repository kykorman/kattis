#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(){

    string strEnc,strFH,strLH,strEnd;
    int intFH=0,intLH=0,i;
    cin>>strEnc;

    for(i=0;i<strEnc.length()/2;i++){
        intFH+=strEnc[i]-65;
        intLH+=strEnc[strEnc.length()/2+i]-'A';
    }

    for(i=0;i<strEnc.length()/2;i++){
        strEnc[i]=(((strEnc[i]-65)+intFH)%26)+65;
        strEnc[i+strEnc.length()/2]=(((strEnc[i+strEnc.length()/2]-65)+intLH)%26)+65;
    }
    for(i=0;i<strEnc.length()/2;i++){
        printf("%c",((strEnc[i]+strEnc[strEnc.length()/2+i])%26)+65);
    }
    cout<<endl;
return 0;}
