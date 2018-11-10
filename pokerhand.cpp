#include <iostream>

using namespace std;

int main(){
    char in,jnk;
    int vals[16]={0};
    for(int i=0;i<5;i++){
        cin>>in>>jnk;
        if(in=='A')
            in=11;
        else if(in=='J')
            in=12;
        else if(in=='Q')
            in=13;
        else if(in=='K')
            in=14;
        else if(in=='T')
            in=15;
        else
            in-='0';
        vals[in]++;
    }
    int max=vals[1];
    for(int i=2;i<16;i++)
        if(vals[i]>max)
            max=vals[i];
    cout<<max<<endl;
}
