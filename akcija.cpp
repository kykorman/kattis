#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int numbooks;
    cin>>numbooks;
    int price[numbooks];
    int total=0;
        for(int i=0;i<numbooks;i++){
        cin>>price[i];
    }

    sort(price,price+numbooks);

    for(int i=numbooks-1;i>1;i-=3){
                total+=price[i]+price[i-1];
                price[i-2]=0;
        }
        if(numbooks%3>0){
                for(int i=numbooks%3;i>=0;i--){
                        total+=price[i];
                }
        }
        cout<<total<<endl;
return 0;}
