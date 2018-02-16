#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    int nums[3],swap;
    string order;

    for(int i =0;i<3;i++){
        cin>>nums[i];
    }
    cin>>order;
    bool swapped;
    do{
    swapped=false;
    for(int i=0;i<2;i++){
        if(nums[i]>nums[i+1]){
            swap =nums[i];
            nums[i]=nums[i+1];
            nums[i+1]=swap;
            swapped=true;
        }
    }
    }while(swapped);
    for(int i=0;i<3;i++){
        if(order[i]=='A')
            cout<<nums[0]<<" ";
        else if(order[i]=='B')
            cout<<nums[1]<<" ";
        else
            cout<<nums[2]<<" ";
    }

    cout<<endl;

return 0;}
