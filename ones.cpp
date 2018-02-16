#include <iostream>
using namespace std;

int main(){
    long long N;
    unsigned long long intLarge;
    int i;
    while(cin>>N){
    intLarge=1;
        for(i =0;intLarge%N!=0;i++){
            intLarge*=10;
            intLarge+=1;
            intLarge%=N;
        }
        cout<<i+1<<endl;
    }

return 0;}
