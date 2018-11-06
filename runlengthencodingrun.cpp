#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(){
    char encode;

    cin>>encode;
    char str[102];
    char thing;
    int count=0;
    if(encode=='E'){
        /*
        for(int i=0;i<strlen(str);i++)
        {int count = 0;
        cout<<str[i];
        int k;
            for(k=i+1;str[k]!=str[i];k++)
                count++;
        cout<<count;

        }*/
        char tmp;
        while(cin>>thing){
        count=0;
            while(cin>>tmp && tmp==thing)
                count++;
            ungetc(tmp,stdin);
            cout<<thing<<count+1;
        }
                
    }else{
        while(cin>>thing){
            int num;
            scanf("%d",&num);

            for(int i=0;i<num;i++)
                printf("%c",thing);
        }
    }


return 0;}
