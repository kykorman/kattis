#include <iostream>

using namespace std;

int main(){
	int gold,silver,copper;
	cin >> gold >> silver >> copper;

	int buypow = gold*3 + silver * 2 + copper * 1;

	if(buypow>=2){
		if(buypow>=8)
			cout << "Province or ";
		else if(buypow>=5)
			cout << "Duchy or ";
		else
			cout << "Estate or ";

		if(buypow>=6)
			cout<<"Gold\n";
		else if(buypow >= 3)
			cout<<"Silver\n";
		else
			cout<<"Copper\n";
			
	}else{
		cout<<"Copper\n";
	}

	return 0;
}
