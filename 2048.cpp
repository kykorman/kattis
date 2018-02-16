#include <iostream>
#include <stdio.h>
int intInput[16]={0};
using namespace std;

void combineRight();void combineLeft();void combineUp();void combineDown();
void swipeRight();void swipeLeft();void swipeUp();void swipeDown();


void swipeRight(){
        combineRight();
    for(int i =3;i>0;i--){
        if(intInput[i]==intInput[i-1]&&intInput[i]!=0){
            intInput[i]+=intInput[i];
            intInput[i-1]=0;
        }if(intInput[4+i]==intInput[4+i-1]&&intInput[4+i]!=0){
            intInput[4+i]+=intInput[4+i];
            intInput[4+i-1]=0;
        }if(intInput[8+i]==intInput[8+i-1]&&intInput[8+i]!=0){
            intInput[8+i]+=intInput[8+i];
            intInput[8+i-1]=0;
        }if(intInput[12+i]==intInput[12+i-1]&&intInput[12+i]!=0){
            intInput[12+i]+=intInput[12+i];
            intInput[12+i-1]=0;
        }
    }

combineRight();
}
void combineRight(){

    for(int i =0;i<3;i++){
        if(intInput[i+1]==0&&intInput[i]!=0){
            intInput[i+1]=intInput[i];
            intInput[i]=0;
            combineRight();}
        if(intInput[4+i+1]==0&&intInput[4+i]!=0){
            intInput[4+i+1]=intInput[4+i];
            intInput[4+i]=0;
            combineRight();}
        if(intInput[8+i+1]==0&&intInput[8+i]!=0){
            intInput[8+i+1]=intInput[8+i];
            intInput[8+i]=0;
            combineRight();}
        if(intInput[12+i+1]==0&&intInput[12+i]!=0){
            intInput[12+i+1]=intInput[12+i];
            intInput[12+i]=0;
            combineRight();}
    }

}

void combineLeft(){
    for(int i =0;i<3;i++){
        if(intInput[i]==0&&intInput[i+1]!=0){
            intInput[i]=intInput[i+1];
            intInput[i+1]=0;
            combineLeft();}
        if(intInput[4+i]==0&&intInput[4+i+1]!=0){
            intInput[4+i]=intInput[4+i+1];
            intInput[4+i+1]=0;
            combineLeft();}
        if(intInput[8+i]==0&&intInput[8+i+1]!=0){
            intInput[8+i]=intInput[8+i+1];
            intInput[8+i+1]=0;
            combineLeft();}
        if(intInput[12+i]==0&&intInput[12+i+1]!=0){
            intInput[12+i]=intInput[12+i+1];
            intInput[12+i+1]=0;
            combineLeft();}
    }
}

void swipeLeft(){
        combineLeft();
    for(int i =0;i<3;i++){
        if(intInput[i]==intInput[i+1]&&intInput[i]!=0){
            intInput[i]+=intInput[i];
            intInput[i+1]=0;
        }if(intInput[4+i]==intInput[4+i+1]&&intInput[4+i]!=0){
            intInput[4+i]+=intInput[4+i];
            intInput[4+i+1]=0;
        }if(intInput[8+i]==intInput[8+i+1]&&intInput[8+i]!=0){
            intInput[8+i]+=intInput[8+i];
            intInput[8+i+1]=0;
        }if(intInput[12+i]==intInput[12+i+1]&&intInput[12+i]!=0){
            intInput[12+i]+=intInput[12+i];
            intInput[12+i+1]=0;
        }
    }

combineLeft();}


void combineUp(){
    for(int i =0;i<12;i+=4){
        if(intInput[i]==0&&intInput[i+4]!=0){
            intInput[i]=intInput[i+4];
            intInput[i+4]=0;
            combineUp();}
        if(intInput[1+i]==0&&intInput[1+i+4]!=0){
            intInput[1+i]=intInput[4+i+1];
            intInput[1+i+4]=0;
            combineUp();}
        if(intInput[2+i]==0&&intInput[2+i+4]!=0){
            intInput[2+i]=intInput[2+i+4];
            intInput[2+i+4]=0;
            combineUp();}
        if(intInput[3+i]==0&&intInput[3+i+4]!=0){
            intInput[3+i]=intInput[3+i+4];
            intInput[3+i+4]=0;
            combineUp();}
    }
}

void swipeUp(){
combineUp();
    for(int i =0;i<12;i+=4){
        if(intInput[i]==intInput[i+4]&&intInput[i]!=0){
            intInput[i]+=intInput[i];
            intInput[i+4]=0;
        }if(intInput[1+i]==intInput[1+i+4]&&intInput[1+i]!=0){
            intInput[1+i]+=intInput[1+i];
            intInput[1+i+4]=0;
        }if(intInput[2+i]==intInput[2+i+4]&&intInput[2+i]!=0){
            intInput[2+i]+=intInput[2+i];
            intInput[2+i+4]=0;
        }if(intInput[3+i]==intInput[3+i+4]&&intInput[3+i]!=0){
            intInput[3+i]+=intInput[3+i];
            intInput[3+i+4]=0;
        }
    }

combineUp();}


void combineDown(){
    for(int i =8;i>=0;i-=4){
        if(intInput[i+4]==0&&intInput[i]!=0){
            intInput[i+4]=intInput[i];
            intInput[i]=0;
                        i=8;
        }if(intInput[1+i+4]==0&&intInput[i+1]!=0){
            intInput[1+i+4]=intInput[1+i];
            intInput[i+1]=0;
                        i=8;
        }if(intInput[2+i+4]==0&&intInput[i+2]!=0){
            intInput[2+i+4]=intInput[2+i];
            intInput[2+i]=0;
                        i=8;
        }if(intInput[3+i+4]==0&&intInput[i+3]!=0){
            intInput[3+i+4]=intInput[3+i];
            intInput[3+i]=0;
                        i=8;
                }
    }
}

void swipeDown(){
combineDown();
    for(int i =15;i>3;i--){
        if(intInput[i]==intInput[i-4]&&intInput[i]!=0){
            intInput[i]+=intInput[i];
            intInput[i-4]=0;
                }
    }

combineDown();}


int main(){
    int intDir;

    for(int i =0;i<16;i++){
        cin>>intInput[i];
    }

    cin>>intDir;
    switch(intDir){
        case 0:swipeLeft();break;
        case 1:swipeUp();break;
        case 2:swipeRight();break;
        case 3:swipeDown();break;
    }
    for(int i =0;i<16;i++){
        printf("%d ",intInput[i]);
        if(i%4==3)
            cout<<endl;
    }
return 0;}

