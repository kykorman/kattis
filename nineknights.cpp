#include <iostream>
#include <string>
using namespace std;

int main(){
        char tmp;
        int knights[5][5]={0},count=0;
        for(int i=0;i<5;i++){for(int k=0;k<5;k++){knights[i][k]=0;}}
        for(int i =0;i<25;i++){
                cin>>tmp;
                if(tmp=='k'){
                        knights[i/5][i%5]=1;
                        count++;
                }
        }
        if(count!=9){
                cout<<"invalid\n";
                return 0;
        }
        for(int i=0;i<5;i++){
                for(int k=0;k<5;k++){
                        if(knights[i][k]){
                                if(i+2<=4&&k==2){
                                        if(knights[i+2][k+1]==1||knights[i+1][k+2]==1||knights[i+1][k-2]==1||knights[i+2][k-1]==1){
                                                cout<<"invalid\n";
                                                return 0;
                                        }
                                }
                                else if(i+2<=4&&k==0){
                                        if(knights[i+2][k+1]==1||knights[i+1][k+2]==1){
                                                cout<<"invalid\n";
                                                return 0;
                                        }
                                }
                                else if(i+2<=4&&k==4){
                                        if(knights[i+2][k-1]==1||knights[i+1][k-2]==1){
                                                cout<<"invalid\n";
                                                return 0;
                                        }
                                }
                                else if(i+2<=4&&k==3){
                                        if(knights[i+2][k+1]==1||knights[i+1][k-2]==1||knights[i+2][k-1]==1){
                                                cout<<"invalid\n";
                                                return 0;
                                        }
                                }
                                else if(i+2<=4&&k==1){
                                        if(knights[i+2][k-1]||knights[i+1][k+2]||knights[i+2][k+1]){
                                                cout<<"invalid\n";
                                                return 0;
                                        }
                                }
                                else if(i==3){
                                        if(k==0||k==1)
                                                if(knights[i+1][k+2]){
                                                        cout<<"invalid\n";
                                                        return 0;
                                                }
                                        else if(k==4||k==3)
                                                if(knights[i+1][k-2]){
                                                        cout<<"invalid\n";
                                                        return 0;
                                                }
                                        else if(k==2){
                                                if(knights[i+1][k-2]||knights[i+1][k+2]){
                                                        cout<<"invalid\n";
                                                        return 0;
                                                }
                                        }
                                }
                        }

                }
        }
cout<<"valid\n";
return 0;}

