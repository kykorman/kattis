#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
        vector <string> v;
        string tmp;

        while(cin>>tmp)
                v.push_back(tmp);

        for(int i=0;i<v.size();i++){
                for(int k=i+1;k<v.size();k++){
                        if(v[k]==v[i]){
                                cout<<"no"<<endl;
                                return 0;
                        }
                }

        }
        cout<<"yes"<<endl;
return 0;}
