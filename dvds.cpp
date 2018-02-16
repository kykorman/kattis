#include <stdio.h>

int checkorder(int nums[],int size,int order, int wrong){

    for(int i=order;i<size;i++){
        if(i+1-wrong != nums[i] && nums[i] != 1000010 ){
            nums[i]=1000010;
            return i+1;
        }
    }
return 0;}

int main(){

    int cases;
    int swap;

    scanf("%d",&cases);

    int count;
    for(int q=0;q<cases;q++){

        int n;

        scanf("%d",&n);
        int dvd[n];

        for(int i=0;i<n;i++)
            scanf("%d",&dvd[i]);

        int res=0;
        count=0;
        do{
            res=checkorder(dvd,n,res,count);
            if(res)
                count++;
        }while(res);

        printf("%d\n", count);
    }
return 0;}
