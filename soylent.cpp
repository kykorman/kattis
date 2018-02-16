#include <iostream>
using namespace std;
int main(){
        int cases;
        cin>>cases;

        for(int i=0;i<cases;i++){
                int cals;
                cin>>cals;

                for(int k=0;k<cals+1;k++){
                        if(k*400>=cals){
                                cout<<k<<endl;
                                break;
                        }
                }
        }

return 0;}
