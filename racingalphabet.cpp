#include <iostream>
#include <string>

#define PI 3.14159265358979

using namespace std;

int main(){
	double s2s=((60*PI)/28.0)/15.0;
	int phrases;
	cin>>phrases;
	char jnk;
	scanf("%c",&jnk);
	for(int i=0;i<phrases;i++){
		string tmp;

		getline(cin,tmp);
		double dist=tmp.length();

		int val[tmp.length()];

		for(int k=0;k<tmp.length();k++){
			if(tmp[k]==' ')
				tmp[k]=1+'Z';
			else if(tmp[k]=='\'')
				tmp[k]='Z'+2;
			val[k]=tmp[k]-'A';
		}

		for(int k=0;k<tmp.length()-1;k++){
			int let = val[k+1]-val[k];
			int let2;
			if(let<0)
				let*=-1;
			let2=28-let;
			if(let<let2)
				dist+=let*s2s;
			else
				dist+=let2*s2s;
		}
		printf("%.10f\n",dist);
	}
return 0;}
