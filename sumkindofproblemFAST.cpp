#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int cases;

	scanf("%d",&cases);
    for(int i=1;i<=cases;i++){
        int jnk,top;

		scanf("%d %d",&jnk,&top);
        int pos,odd,even;
        pos=(1+top)*top/2;
        odd=top*top;
        even=odd+top;
        printf("%d %d %d %d\n",i,pos,odd,even);
    }


return 0;}
