#include <stdio.h>

int main(){

    int cases;
    int swap;

    scanf("%d",&cases);

    int count;
    int n;
    int tmp;
    for(int q=0;q<cases;q++){
        scanf("%d",&n);

        count=0;
        for(int i=0;i<n;i++){
            scanf("%d",&tmp);
            if(tmp!=i+1-count)
                count++;
        }

        printf("%d\n", count);
    }

	return 0;
}
