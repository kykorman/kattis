#include <iostream>
using namespace std;

int main(){
	int times;
	cin>>times;
	while(times--){
		int high;
		cin>>high;

		//Bulletproofing for larger numbers, should only need to be an int
		unsigned long long stuff=1;

		for(int i=1;i <= high; i++)
			stuff = ( stuff * i ) % 10;


		cout << stuff << endl;
	}

	return 0;
}
