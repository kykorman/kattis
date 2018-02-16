#include <iostream>
using namespace std;

int main(){

    int intSpot, intSeconds=0,intMin,intQuestions,intEnd,intMinutes=0;
    char chrState;

    cin>>intSpot>>intQuestions;

    for(int i =0;i<intQuestions;i++){
        cin>>intMin>>chrState;


        if(intMinutes+intMin<=210){
            intMinutes+=intMin;

            if(chrState=='T'){
                intSpot++;
                if(intSpot==9)
                    intSpot=1;
            }

        }
    }
    cout<<intSpot<<endl;

return 0;}
