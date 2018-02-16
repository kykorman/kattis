#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int isVowel(char chrC){

    if (chrC=='A'||chrC=='E'||chrC=='I'||chrC=='O'||chrC=='U'|| chrC=='a' || chrC=='e'||chrC=='i'||chrC=='o'||chrC=='u'){
        return 1;
    }

return 0;}
int main(){
        string N;

        while(cin>>N){
                for(int i=0;i<N.length();i++){
                        if(isVowel(N[i])&&i+1!=N.length()){
                                for(int k=i+1;k<N.length();k++){
                                        N[k]=N[k+2];
                                        if(k+2==N.length()-2)
                                                N[k]='\0';
                                }
                        }
                }
                for(int i=0;N[i]!=' '&& N[i]!='\0';i++){
                        printf("%c", N[i]);
                }
                printf(" ");
        }
cout<<endl;
return 0;}
