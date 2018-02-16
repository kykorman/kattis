#include <iostream>
using namespace std;

int main(){
    unsigned long long one=0;
    unsigned long long two=0;
    unsigned long long res=0;

    while(cin>>one){
        cin>>two;

        if(one>two)
            cout<<one-two<<endl;
        else
            cout<<two-one<<endl;

        res=0;
        one=0;
        two=0;
    }


return 0;}
