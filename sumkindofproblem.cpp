#include <iostream>

using namespace std;
unsigned long long printer(int start,int inc, int N){
	if(N)
		return start+printer(start+inc,inc,N-1);
	else
		return 0;
}

int main(){
	int cases;
	cin>>cases;

	for(int i=0;i<cases;i++){
		int curr,N;
		cin>>curr>>N;

		cout<<curr<<" ";

		cout<<printer(1,1,N)<<" ";
		cout<<printer(1,2,N)<<" ";
		cout<<printer(2,2,N)<<endl;
	}

return 0;}
