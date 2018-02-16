#include <iostream>
#include <string>
using namespace std;

int main(){
        int throwaway;
        cin>>throwaway;
        string str1, str2;

        while(cin>>str1>>str2){
                cout<<str1<<endl<<str2<<endl;
                for(int i=0;i<str1.length();i++){
                        if(str1[i]==str2[i]){
                                cout<<".";
                        }
                        else
                                cout<<"*";
                }
                cout<<endl<<endl;
        }

return 0;}
