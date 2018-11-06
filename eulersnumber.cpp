#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstdio>
using namespace std;
unsigned long long fact(unsigned long long a,unsigned long long arr[]){
//Memoization wasn't necessary in the end for this problem but I left it in our team's submission
    if(a==0)
        return 1;

    else if(arr[a-1]!=0){
        arr[a]=a*arr[a-1];
        return arr[a];
    }
    else
        arr[a]=a*fact(a-1,arr); 
    return arr[a];
}

int main(){
    int top;
    cin>>top;
    double tot=0;

    unsigned long long arr[10001]={0};
    if(top>=17){
        tot=2.7182818284590455;
    }else
        for(int i=0;i<=top;i++)
            tot=(double)tot+(double)1/(double)fact(i,arr);

    printf("%.15lf\n",tot);
    return 0;
}
