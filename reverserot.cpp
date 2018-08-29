#include <iostream>
#include <cstring>
using namespace std;
int findWhere(char str[],char curr){
	for(int i=0;i<strlen(str);i++){
		if(str[i]==curr)
			return i;
	}
}
int main(){
	int rot;
	cin>>rot;

	char str[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
	int len=strlen(str);
	while(rot!=0){
		char curr[50]="";
		cin>>curr;
		for(int i=strlen(curr)-1;i>=0;i--)
			printf("%c",str[(findWhere(str,curr[i])+rot)%len]);
		printf("\n");
		scanf("%d",&rot);
	}


}
