#include <iostream>
#include <string>
using namespace std;
int main(){
	int r,c;
	cin>>r>>c;
	char jnk;
	scanf("%c",&jnk);
	string spots[c];
	int crush[5]={0,0,0,0,0};
	for(int i=0;i<r;i++){
		getline(cin,spots[i]);
	}
	for(int i=1;i<r;i++)
		for(int k=1;k<c;k++){
			if(spots[i][k]!='#'&&spots[i-1][k]!='#'&&spots[i][k-1]!='#'&&spots[i-1][k-1]!='#'){
				int tmp=0;
				if(spots[i][k]=='X')
					tmp++;
				if(spots[i-1][k-1]=='X')
					tmp++;
				if(spots[i][k-1]=='X')
					tmp++;
				if(spots[i-1][k]=='X')
					tmp++;
				crush[tmp]++;

			}
		}
	for(int i=0;i<5;i++)
		cout<<crush[i]<<endl;
return 0;}
