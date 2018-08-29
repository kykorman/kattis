#include <iostream>
#include <string>
using namespace std;
int main(){
	int p,t;
	string jnk;
	cin>>p>>t;
	getline(cin,jnk);
	int solve=0;
	int tot=p*t;
	for(int i=0;i<p;i++){
		int flag=0;

		for(int k=0;k<t;k++){
			string tmp="";
			getline(cin,tmp);

			for(int q=1;q<tmp.length();q++)
				if(tmp[q]>='A'&&tmp[q]<='Z')
					flag++;
		}
		if (!flag)
			solve++;
	}
	cout<<solve<<endl;
}
