#include <iostream>
#include <stdio.h>
using namespace std;
#define PI 3.14159265358979

int main(){
    long double intRad;
    cin>>intRad;

    printf("%.8Lf\n%.8Lf\n",intRad*PI*intRad,(intRad+intRad)*(intRad+intRad)/2);

return 0;}
