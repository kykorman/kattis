#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int things;
    cin>>things;

    double qaly=0;

    double qual,y;

    for(int i=0;i<things;i++){
        cin>>qual>>y;
        qaly+=qual*y;
    }
    printf("%.4f\n",qaly);
    return 0;
}
