#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main(){
    int w,s,c,k;
    cin>>w>>s>>c>>k;
    int stuff=w+c;
    if(!(w==s&&w==k&&w==c)&&((s>k && stuff>k)||(s>k*2 && stuff==k)||(s==k&&stuff>2*k)))
        cout<<"NO\n";
    else
        cout<<"YES\n";


    return 0;
}
