#include <iostream>
#include <string>
using namespace std;

int main(){
	string word;
	cin>>word;
	for(int i=0;i<word.length();i++){
		if(word[i]=='s'&&word[i+1]=='s'){
			cout<<"hiss"<<endl;
			return 0;
		}
	}
cout<<"no hiss"<<endl;
return 0;}
