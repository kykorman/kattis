#include <iostream>
using namespace std;

int main(){
    int intTests;

    cin>>intTests;

    for(int i =0;i<intTests;i++){
        int intR,intC;
        cin>>intR>>intC;
        string strImg[intR];
        cout<<"Test "<<i+1<<endl;
        for(int k=0;k<intR;k++){
            cin>>strImg[k];
        }
        for(int k=intR-1;k>=0;k--){
            for(int q=intC-1;q>=0;q--)
                cout<<strImg[k][q];
            cout<<endl;
        }
    }

return 0;}
