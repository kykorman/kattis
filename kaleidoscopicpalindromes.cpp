#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

bool pal(vector<int> num){
    int len = num.size();
    for (int i = 0; i < len/2; i++){
        if (num[i] != num[len-1-i]) return false;
    }
    return true;
}
vector<int> changeBase(int num, int base){
    vector<int> n;
    while (num/base > 0){
        n.push_back(num % base);
        num /= base;
    }
    n.push_back(num%base);
    return n;
}
int main(){
    int a,b,k;
    cin >> a >> b >> k;
    int total = 0;
    vector <int> v;


	bool add;
    for (int i = a; i < b+1; i++){
		add=true;
        for (int j = 2; j < k+1; j++){
            if (!pal(changeBase(i,j))){
                add = false;
                break;
            }
        }
        if (add == true) total++;
    }
    cout << total << endl;

    return 0;
}
