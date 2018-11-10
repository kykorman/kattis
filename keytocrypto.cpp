#include <iostream>
#include <string>
using namespace std;

int main(){

    string key;
    string enc;

    cin>>enc>>key;

    for(int i=0;i<enc.length();i++){
        enc[i]-=(key[i]-'A');

        if(enc[i]<'A')
            enc[i]+=26;

        key+=enc[i];
    }

    cout<<enc<<endl;

    return 0;
}
