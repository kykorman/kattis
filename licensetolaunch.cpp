#include <iostream>

using namespace std;

int main(){
	int entries, junk;

	cin>>entries;

	int min=100001;
	int minday=-1;

	for(int i=0;i<entries;i++){
		cin>>junk;
		if(junk<min){
			min=junk;
			minday=i;
		}

	}
	cout<<minday<<endl;

	return 0;
}
