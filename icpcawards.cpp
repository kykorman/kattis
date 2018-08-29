#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct team{
	string teamName;
	string university;
};

int strcmp(string one, string two);
void delDuplicates(vector <team> &v, int num);

int main(){
	vector <team> v;
	int num;
	cin>>num;	

	for(int i=0;i<num;i++){
		v.push_back( team());
		cin>>v[i].university;
		cin>>v[i].teamName;
	}
	delDuplicates(v,num);
		

	for(int i=0;i<12;i++){
		cout<<v[i].university<<" "<<v[i].teamName<<endl;
	}
return 0;}

void delDuplicates(vector <team> &v, int num){
	for(int i=0;i<num;i++)
		for(int k=i+1;k<num;k++){
			if(strcmp(v[i].university,v[k].university)){
				v.erase(v.begin()+k);
				k--;
				num--;
			}

		}

}

int strcmp(string one, string two){

	if(one.length()>two.length()||two.length()>one.length())
		return 0;

	for(int i=0;i<one.length();i++)
		if(one[i]!=two[i])
			return 0;	

return 1;}
