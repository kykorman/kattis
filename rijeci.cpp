#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
        int times;
        cin>>times;

        unsigned long long A=1,B=0;

        for(int i=0;i<times;i++){
                int tmp=A;
                A=B;
                B+=tmp;
        }

        cout<<A<<" "<<B<<endl;
return 0;}

