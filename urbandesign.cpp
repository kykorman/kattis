#include <iostream>
#include <stdio.h>
using namespace std;

double slope(int x1, int y1, int x2, int y2){


    double dblSlope;
    if(x1!=x2){
        dblSlope=(double)(y2-y1)/(x2-x1);
    }else
        dblSlope=20001;

    if(dblSlope==-0)
        dblSlope=0;


return dblSlope;}

double findb(int x, int y, double m){

    double b;
    b=y-m*x;
    if(m==20001)
        b=x;
return b;}

int intersect(double house[],double houseSlp, double streetSlp[],double houseB,double streetB[], int numStreets){
    int intersections=0;
    double tmpX,tmpY;
    if(houseSlp!=20001){
        for(int i=0;i<numStreets;i++){
            tmpX=(streetB[i]-houseB)/(houseSlp-streetSlp[i]);
            if(streetSlp[i]==20001){
                if((streetB[i]<=house[0]&&streetB[i]>=house[2])||(streetB[i]>=house[0]&&streetB[i]<=house[2])){
                    intersections++;
                }
            }else if((tmpX<=house[0]&&tmpX>=house[2])||(tmpX<=house[2]&&tmpX>=house[0])){
                intersections++;
            }
        }
    }
    else{
        for(int i=0;i<numStreets;i++){
            tmpX=house[0];
            tmpY=tmpX*streetSlp[i]+streetB[i];
            if((tmpY<=house[1]&&tmpY>=house[3])||(tmpY>=house[1]&&tmpY<=house[3])||(streetSlp[i]==20001&&streetB[i]==house[0])){
                intersections++;
            }

        }



    }
return intersections;}

int main(){

    int numStreets;
    cin>>numStreets;

    double streets[numStreets][4];
    double dblSSlope[numStreets];
    double dblSb[numStreets];

    for(int k=0;k<numStreets;k++){
        for(int i=0;i<4;i++){
            cin>>streets[k][i];
        }
    }

    int numHouses;
    cin>>numHouses;

    double houses[numHouses][4];
    double dblHSlope[numHouses];
    double dblHb[numHouses];

    for(int k=0;k<numHouses;k++){
        for(int i =0;i<4;i++){
            cin>>houses[k][i];
        }
    }
    for(int i=0;i<numStreets;i++){
        dblSSlope[i]=slope(streets[i][0],streets[i][1],streets[i][2],streets[i][3]);
        dblSb[i]=findb(streets[i][2], streets[i][3], dblSSlope[i]);
    }

    for(int i=0;i<numHouses;i++){

        dblHSlope[i]=slope(houses[i][0],houses[i][1],houses[i][2],houses[i][3]);
        dblHb[i]=findb(houses[i][0], houses[i][1], dblHSlope[i]);
    }



    int cross=0;
    for(int i=0;i<numHouses;i++){

        double houseVal[4];
        houseVal[0]=houses[i][0];
        houseVal[1]=houses[i][1];
        houseVal[2]=houses[i][2];
        houseVal[3]=houses[i][3];

        cross=intersect(houseVal, dblHSlope[i],dblSSlope, dblHb[i],dblSb, numStreets);
        if(cross%2==0)
            cout<<"same"<<endl;
        else
            cout<<"different"<<endl;
    }


return 0;}
