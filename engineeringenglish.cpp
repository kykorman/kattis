#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>

using namespace std;

int main(){
        vector<string>v;
        vector<string>q;
        vector<int>newline;
        char newtmp[201],othertmp[201],tmp[201];

        int markbeg, markend,count=0;
        char swap;
        for(int k=0;k<201;k++){
                newtmp[k]='\0';
                othertmp[k]='\0';
        }

        while(cin.getline(tmp,201)){
                markbeg=0;

                for(int i =0;i<strlen(tmp);i++){
                        if(tmp[i]==' '||i+1==strlen(tmp)){
                                for(int k=markbeg;k<=i;k++){
                                        if(tmp[k]!=' '){
                                                newtmp[k-markbeg]=tmp[k];

                                                if(tmp[k]>'Z')
                                                        othertmp[k-markbeg]=tmp[k]-32;
                                                else
                                                        othertmp[k-markbeg]=tmp[k];
                                        }
                                }

                                q.push_back(othertmp);
                                v.push_back(newtmp);

                                markbeg=i+1;
                                for(int k=0;k<201;k++){
                                        newtmp[k]='\0';
                                        othertmp[k]='\0';
                                }
                        }
                }

                for(int k=0;k<201;k++)
                        tmp[k]='\0';

                if(count!=0)
                        newline.push_back(v.size()-newline[count]);
                else
                        newline.push_back(v.size());
        }
        for(int i = 0; i<v.size() ;i++){
                for(int k=i+1;k<v.size();k++){
                        if(q[i]==q[k]){
                                v[k]=".";
                        }
                }
        }

        count=0;

        for(int i=0;i<v.size();i++){
                cout<<v[i];


                if(newline[count]==i+1&&count<newline.size()-1){
                        cout<<endl;
                        count++;
                }else if(count!=newline.size()-1||i<v.size()-1)
                        cout<<" ";

        }

return 0;}
