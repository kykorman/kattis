#include <iostream>
#include <algorithm>
using namespace std;

int main(){
        int cases;
        cin>>cases;

        for(int i =0;i<cases;i++){
                int place;
                cin>>place;
                int places[place];
                for(int i=0;i<place;i++){ cin>>places[i];}
                sort(places,places+place);
                cout<<(places[place-1]-places[0])*2<<endl;
        }


return 0;}
