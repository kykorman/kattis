#include <iostream>
using namespace std;
int digSum(int num){
        int tot=num%10000000/1000000+num%1000000/100000+num%100000/10000+num%10000/1000+num%1000/100+num%100/10+num%10;
return tot;}
int main(){
        int N;
        cin>>N;
        while(N!=0){
                int res=digSum(N);
                for(int i=11;;i++){
                        if(digSum(i*N)==res){
                                cout<<i<<endl;
                                break;
                        }
                }
                cin>>N;

        }

return 0;}
