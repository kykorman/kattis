#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
	int limit,num;
	int deny=0;
	int curr=0;
	cin>>limit>>num;
	while(num--){
		char c;
		scanf(" %c",&c);
		string jnk;
		cin>>jnk;
		int stuff;
		cin>>stuff;
		if(c=='e')
			if(stuff+curr>limit)
				deny++;
			else
				curr+=stuff;

		else
			curr-=stuff;

	}
	cout<<deny<<endl;

	return 0;
}
