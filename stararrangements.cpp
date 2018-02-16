#include <iostream>
using namespace std;

int main(){
        int stars;
        cin>>stars;
        cout<<stars<<":\n";
        for(int i=2;i<stars;i++){
                for(int k=i-1;k<i+1;k++){
                        int sum=i+k;
                        for(int w=0;sum<stars;w++){
                                if(w%2)
                                        sum+=k;
                                else
                                        sum+=i;
                        }
                        if(sum==stars)
                                cout<<i<<","<<k<<endl;

                }
        }
return 0;}
