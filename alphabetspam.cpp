#include <iostream>
#include <string>
using namespace std;

int main(){

        string strSpam;

        cin>>strSpam;

        double intWhite=0, intLower=0,intUpper=0,intSymbol=0;

        for(int i=0;i<strSpam.length();i++){
                switch(strSpam[i]){
                        case '!' ... '@':intSymbol++;break;
                        case 'A' ... 'Z':intUpper++;break;
                        case '[' ... '^': intSymbol++;break;
                        case '_': intWhite++;break;
                        case '`': intSymbol++;break;
                        case 'a' ... 'z':intLower++;break;
                        case '{' ... '~':intSymbol++;break;
                }
        }
        intLower/=strSpam.length();
        intUpper/=strSpam.length();
        intWhite/=strSpam.length();
        intSymbol/=strSpam.length();

        printf("%.16f\n",intWhite);
        printf("%.16f\n",intLower);
        printf("%.16f\n",intUpper);
        printf("%.16f\n",intSymbol);


return 0;}
