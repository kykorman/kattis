#include <iostream>
using namespace std;

int main(){
    int cases, minutes;
    cin>>cases>>minutes;
    int arr[cases];

    for(int i=0;i<cases;i++)
        cin>>arr[i];

    int count=0;
    int curr=0;
    while(curr<=minutes)
    {
        curr+=arr[count++];
    }
    cout<<--count<<endl;

return 0;}
