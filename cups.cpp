#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <vector>
using namespace std;
struct order{
        int rad;
        string color;
};

int main() {
    int cases;
    cin>>cases;

    char str1[1000],str2[1000];

        vector<order>v;

    for(int i =0;i<cases;i++){
        cin>>str1>>str2;

                v.push_back(order());

                if((str1[0]>='A'&&str1[0]<='Z')||(str1[0]>='a'&&str1[0]<='z')){
                        v[i].color=str1;
                        v[i].rad=atoi(str2);
                }
                else{
                        v[i].color=str2;
                        v[i].rad=atoi(str1)/2;
                }

    }
        bool swapped;
        do{swapped=false;
                for(int i=0;i<cases-1;i++){
                        if(v[i].rad>v[i+1].rad){
                                int swap=v[i].rad;
                                string swapp=v[i].color;
                                v[i].rad=v[i+1].rad;
                                v[i].color=v[i+1].color;
                                v[i+1].rad=swap;
                                v[i+1].color=swapp;
                                swapped=true;
                        }
                }
        }while(swapped);
        for(int i=0;i<cases;i++){
                cout<<v[i].color<<endl;
        }
    return 0;
}
