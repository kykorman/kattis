#include <iostream>
#include <vector>
using namespace std;

int main(){
        int numhit,tmp;
        cin>>numhit;

        vector<int>v;

        for(int i=0;i<numhit;i++){
                cin>>tmp;

                if(tmp>=0)
                        v.push_back(tmp);
        }
        int sum=0;
        for(int i=0;i<v.size();i++){
                sum+=v[i];
        }
        cout<<(double)sum/v.size()<<endl;

return 0;}
