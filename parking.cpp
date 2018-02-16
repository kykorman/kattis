#include <iostream>
using namespace std;

int main(){
        int a,b,c;
        cin>>a>>b>>c;
        int max=0;
        int arr[3],dept[3];
        for(int i=0;i<3;i++){
                cin>>arr[i]>>dept[i];
                if(dept[i]>max)
                        max=dept[i];
        }
        int minutes=0;
        for(int i=0;i<=max;i++){
                int count=0;
                for(int k=0;k<3;k++){
                        if(arr[k]<i&&dept[k]>=i)
                                count++;
                }
                if(count==3)
                        minutes+=(c*3);
                else if(count==2)
                        minutes+=(b*2);
                else if(count==1)
                        minutes+=a;

        }
        cout<<minutes<<endl;
return 0;}
