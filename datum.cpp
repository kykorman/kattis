#include <iostream>
using namespace std;
    int months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
    int month, day;
    cin>>day>>month;

    for(int i =month-2;i>=0;i--)
        day+=months[i];
    day%=7;
    switch(day){
        case 0:cout<<"Wednesday"<<endl;break;
        case 1:cout<<"Thursday"<<endl;break;
        case 2:cout<<"Friday"<<endl;break;
        case 3:cout<<"Saturday"<<endl;break;
        case 4:cout<<"Sunday"<<endl;break;
        case 5:cout<<"Monday"<<endl;break;
        case 6:cout<<"Tuesday"<<endl;break;
    }

return 0;}
