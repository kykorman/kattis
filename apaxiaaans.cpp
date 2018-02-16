#include <iostream>
using namespace std;
#include <string>

int main(){

        string strName;

        cin>>strName;
        bool moved;
        do{
                moved=false;
                for(int i =0;i<strName.length();i++){

                        if(strName[i]==strName[i+1] && strName[i]!='\0'){
                                moved=true;
                                for(int q = i+1;q<strName.length();q++){
                                        strName[q]=strName[q+1];
                                }
                        }
                }
        }while(moved);

        cout<<strName<<endl;

return 0;}
