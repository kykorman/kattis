#include <iostream>
using namespace std;

int main(){

        int intHands,intPts=0;
        char chrSuit,chrCurrSuit,chrCard;
        cin>>intHands>>chrSuit;

        for(int i =0;i<intHands*4;i++){
                cin>>chrCard>>chrCurrSuit;
                switch(chrCard){
                        case 'A':intPts+=11;break;
                        case 'T':intPts+=10;break;
                        case 'K':intPts+=4;break;
                        case '9':
                                if(chrCurrSuit==chrSuit)
                                        intPts+=14;
                                break;
                        case 'Q': intPts+=3;break;
                        case 'J':
                                if(chrCurrSuit==chrSuit)
                                        intPts+=20;
                                else
                                        intPts+=2;
                                break;
                        default:
                                intPts+=0;
                                break;
                }
        }
        cout<<intPts;

return 0;}
