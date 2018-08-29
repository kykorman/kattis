#include <iostream>
#include <cstring>

using namespace std;

char notes[7]={'A','B','C','D','E','F','G'};

int find(char note){
    if(note=='A'-1)
        return 6;
    else if(note=='H')
        return 0;
    for(int i=0;i<7;i++)
        if(note==notes[i])
            return i;
    
    return 0;
}

void compact(char tmp[]){
    for(int i=0;i<strlen(tmp)-2;i++)
        tmp[i]=tmp[i+3];


}

int main(){
    char c1,c2;
    char str[10]="tmp";
    for(int i=1;str[0]!=EOF&&fgets(str,10,stdin);i++){
        str[strlen(str)-1]='\0';
        c1=str[0];
        c2=str[1];

        if(c2==' ')
            printf("Case %d: UNIQUE\n",i);
        else if(c2=='b'){
            printf("Case %d: %c%c ",i,notes[find(c1-1)],'#');
            compact(str);
            cout<<str<<endl;
        }else if(c2=='#'){
            printf("Case %d: %c%c ",i,notes[find(c1+1)],'b');
            compact(str);
            cout<<str<<endl;
        }
    }
return 0;}
