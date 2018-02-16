#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
        string input;
        cin>>input;
        char res;
        int cards[4][15]={0};
        int num;
        char tmp[4];

        cards[0][14]=13;
        cards[1][14]=13;
        cards[2][14]=13;
        cards[3][14]=13;

        for(int i=0;i<input.length();i+=3){
                res = input[i];

                tmp[0]=input[i+1];
                tmp[1]=input[i+2];

                num=atoi(tmp);
                if(res=='P'){
                        if(cards[0][num]){
                                cout<<"GRESKA\n";
                                return 0;
                        }else{
                                cards[0][num]=1;
                                cards[0][14]--;
                        }
                }else if(res=='K'){
                        if(cards[1][num]){
                                cout<<"GRESKA\n";
                                return 0;
                        }else{
                                cards[1][num]=1;
                                cards[1][14]--;
                        }
                }else if(res=='H'){
                        if(cards[2][num]){
                                cout<<"GRESKA\n";
                                return 0;
                        }else{
                                cards[2][num]=1;
                                cards[2][14]--;
                        }
                }else if(res=='T'){
                        if(cards[3][num]){
                                cout<<"GRESKA\n";
                                return 0;
                        }else{
                                cards[3][num]=1;
                                cards[3][14]--;
                        }
                }
        }
        printf("%d %d %d %d\n", cards[0][14],cards[1][14],cards[2][14],cards[3][14]);
return 0;}
