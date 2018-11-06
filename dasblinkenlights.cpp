#include <iostream>

using namespace std;

int main(){
    int one,two,three;

    cin>>one>>two>>three;

    for(int i=1;i<=three;i++){
        if(!(i%one)){
            if(!(i%two)){
                cout<<"yes\n";
                return 0;
            }
        }

    }
    cout<<"no\n";
/*

    if(one<two){
        if(two%one==0)
            cout<<"yes\n";
    }   
*/
return 0;}
