#include <iostream>
using namespace std;

int main(){
	int times;

	int arr[366]={0};
	cin>>times;

	while(times--){
		int low,high;
		cin >> low >> high;
		for(int i=low;i<=high;i++)
			arr[i]=1;
		
		
	}
	int sum=0;
	for(int i=0;i<=365;i++)
		if(arr[i])
			sum++;

	cout << sum << endl;

	return 0;
}
