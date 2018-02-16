#include <iostream>
using namespace std;

int main(){
        int numof;
        cin>>numof;

        for(int i =0;i<numof;i++){
                int x, y, res;
                cin>>x>>y>>res;

                if(x+y==res||x*y==res||(double)x/y==res||(double)y/x==res||x-y==res||y-x==res)
                        cout<<"Possible\n";
                else
                        cout<<"Impossible\n";

        }

return 0;}
