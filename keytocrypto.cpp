#include <iostream>
#include <string>
using namespace std;

int main(){
	char message[500],key[500],res[500];

	cin>>message>>key;

	int mesLen=strlen(message),keyLen=strlen(key);

	for(int i=0;i<keyLen;i++){
		int tmp=(message[i]-key[i])%26;
		while(tmp<0)
			tmp+=26;
		res[i]=tmp+'A';
		cout<<(char)res[i];

	}

	for(int i=keyLen;i<mesLen;i++){
		int tmp=(message[i]-res[i-keyLen])%26;
		while(tmp<0)
			tmp+=26;
		res[i]=tmp+'A';
		cout<<(char)res[i];
	}
	cout<<endl;
return 0;}
