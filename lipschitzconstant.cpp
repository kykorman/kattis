#include <iostream>
#include <cstdio>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

struct plot{
	double x;
	double y;
};
bool compareX(struct plot x1,struct plot x2)
{
    return x1.x<x2.x;
}

int main(){
    int pairs;
    cin>>pairs;
    int i,k;
	vector <struct plot> v;
	struct plot tmp;
    for(i=0;i<pairs;i++){
        cin>>tmp.x>>tmp.y;
		v.push_back(tmp);
    }
	sort(v.begin(),v.end(),compareX);

    i=0;k=1;
	double res,L = abs(v[1].y-v[0].y)/abs(v[1].x-v[0].x);
    for(i=1;i<pairs-1;i++){
		res=abs(v[i].y-v[i+1].y)/abs(v[i].x-v[i+1].x);
		if(res>L)
			L=res; 
	}

    printf("%.9lf\n",L);
    return 0;
}
