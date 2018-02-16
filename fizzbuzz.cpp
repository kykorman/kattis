#include <iostream>
using namespace std;

int main(){

    int intFizz,intBuzz, intUpTo;

    cin>>intFizz>>intBuzz>>intUpTo;

    for(int i =1; i<=intUpTo;i++){
        if(i%intFizz==0 && i%intBuzz==0)
            cout<<"FizzBuzz\n";
        else if(i%intFizz==0)
            cout<<"Fizz\n";
        else if(i%intBuzz==0)
            cout<<"Buzz\n";
        else
            cout<<i<<endl;

    }

return 0;}
