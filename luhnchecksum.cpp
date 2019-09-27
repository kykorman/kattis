#include <iostream>
#include <string>

using namespace std;

int main(){
	int times;
	string inp;
	long tot=0;
	cin >> times;

	for(int i=0;i<times;i++){

		tot = 0;

		cin >> inp;
		int orig = inp.length();

		for(int k=orig-1;k>=0;k--)
			if((orig-k)%2)
				tot+=inp[k]-'0';
			else
				if(inp[k]*2 < 9)
					tot+=(inp[k]-'0')*2;
				else
					tot+=((inp[k]-'0')*2)/10 + ((inp[k]-'0')*2)%10;


		if(tot%10)
			cout<<"FAIL\n";
		else
			cout<<"PASS\n";
	}

	return 0;
}
