#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int cases;
	cin>>cases;

	for(int i=0;i<cases;i++){
		int beats;
		double time,interval, mid;
		cin>>beats>>time;
		interval=(double) 60/time;
		mid=(60*beats)/time;

		printf("%.5f %.5f %.5f\n",mid-interval,mid,mid+interval);
	}

	return 0;
}
