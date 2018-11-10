#include <string>
#include <iostream>
using namespace std;

int main(){
	string crap;
	getline(cin,crap);

	if(crap=="DEC 25" || crap=="OCT 31")
		cout<<"yup\n";
	else
		cout<<"nope\n";

	return 0;
}
