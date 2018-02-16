#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

        int cases;
        char junk;
        scanf("%d%c", &cases,&junk);

        while(cases--){
                char str[1000];
                int mark;

                fgets(str,999,stdin);

                str[strlen(str)-1]='\0';

                if(str[0]=='P')
                        printf("skipped\n");
                else{
                        char str1[999];
                        int thing;

                        for(int i=0;i<strlen(str);i++)
                                if(str[i]=='+')
                                        mark=i;

                        thing=atoi(str);

                        int thing2;

                        for(int i=0;i<999;i++)
                                str1[i]='\0';

                        for(int i=mark+1;i<strlen(str);i++)
                                str1[i-mark-1]=str[i];
                        thing2=atoi(str1);

                        printf("%d\n", thing+thing2);

                }
        }

return 0;}
