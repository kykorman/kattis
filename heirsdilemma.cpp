#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

	int bot,top;
	int count=0;
	int flag=0;
	cin>>bot>>top;
	for(int i=bot;i<top;i++){
		flag=0;
		vector <int> v;
		int copy=i;

		for(int k=0;k<6;k++){
			v.push_back(copy%10);
			copy/=10;
			if(v[k]==0)
				flag=1;
		}

		if(flag)
			continue;

		sort(v.begin(),v.end());

		for(int k=0;k<5;k++)
			if( v[k]==v[k+1] )
				flag=1;

		if(flag)
			continue;

		for(int k=0;k<6;k++)
			if(i%v[k])
				flag=1;

		if(flag)
			continue;

		count++;	
	}
	cout<<count<<endl;
	return 0;
}
