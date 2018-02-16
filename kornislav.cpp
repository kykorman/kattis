#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	int intNums[4],swapped=1;
	for(int i=0;i<4;i++)
		cin>>intNums[i];
	while(swapped){
		swapped=0;
		for(int i=0;i<3;i++)
			if(intNums[i]>intNums[i+1]){
				int swap=intNums[i];
				intNums[i]=intNums[i+1];
				intNums[i+1]=swap;
				swapped=1;
			}
	}
	cout<<intNums[0]*intNums[2]<<endl;
return 0;}
