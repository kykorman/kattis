#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include <algorithm>


using namespace std;
string toLower(string str){

    string tmp;

    for(int i=0;i<str.length();i++)
        if(str[i]>='A' && str[i]<='Z')
            tmp+=str[i]+32;
        else
            tmp+=str[i];

    return tmp;
}

int main(){
	//v is what will be output. l is
	//the tolower version of v.
	//nl keeps track of where newlines should occur.
    vector <string> v;
    vector <string> l;
    vector <int> nl;

    string tmp;

    char jnk;
    int count=0;

    while(cin>>tmp){
        v.push_back(tmp);
        scanf("%c",&jnk);
        if(jnk=='\n')
            nl.push_back(count);
        count++;
    }
    for(int i=0;i<v.size();i++)
        l.push_back(toLower(v[i]));

    for(int i=0;i<v.size();i++)
        if(v[i]!=".")
            for(int k=i+1;k<v.size();k++)
                if(l[i]==l[k])
                    v[k]=".";

    for(int i=0;i<v.size();i++){
        cout<<v[i];
        if(find(nl.begin(),nl.end(),i)!=nl.end())
            cout<<endl;
        else
            cout<<" ";
    }

    return 0;
}
