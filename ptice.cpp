#include <iostream>
#include <string>
using namespace std;

int main(){
    int intMax=0, intAdrian=0, intBruno=0, intGoran=0, intNumQuestions, intMod;
    string strAnswers;
    char chrBruno, chrAdrian,chrGoran;
    cin>>intNumQuestions>>strAnswers;

    for(int i =0;i<intNumQuestions;i++){
        intMod=i%6;
        if(intMod==0 || intMod==1)
            chrGoran='C';
        else if(intMod==2|| intMod==3)
            chrGoran='A';
        else
            chrGoran='B';

        intMod=i%3;

        if(intMod==0)
            chrAdrian='A';
        else if(intMod==1)
            chrAdrian='B';
        else
            chrAdrian='C';

        intMod=i%4;

        if(intMod==0)
            chrBruno='B';
        else if(intMod==1)
            chrBruno='A';
        else if(intMod==2)
            chrBruno='B';
        else
            chrBruno='C';



        if(strAnswers[i]==chrAdrian)
            intAdrian++;
        if(strAnswers[i]==chrBruno)
            intBruno++;
        if(strAnswers[i]==chrGoran)
            intGoran++;

        if(intAdrian>intMax)
            intMax=intAdrian;
        if(intBruno>intMax)
            intMax=intBruno;
        if(intGoran>intMax)
            intMax=intGoran;
    }

        cout<<intMax<<endl;

        if(intAdrian==intMax)
            cout<<"Adrian\n";
        if(intBruno==intMax)
            cout<<"Bruno\n";
        if(intGoran==intMax)
            cout<<"Goran\n";
return 0;}
