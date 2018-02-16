#include <iostream>
using namespace std;

int main(){

    int nums[10],unique=0;

    for(int i =0;i<10;i++){
        cin>>nums[i];
    }

    for(int i =0;i<10;i++)
        nums[i]=nums[i]%42;

    for(int i =0;i<9;i++){
        for(int k =i+1;k<10;k++){

            if(nums[i]==nums[k]&&nums[i]>-1)
                nums[k]=-1;

        }
    }
    for(int i =0;i<10;i++){
        if(nums[i]>-1)
            unique++;
    }
    cout<<unique<<endl;
return 0;}
