#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        int count,startFrom;
        scanf("%d%d",&count,&startFrom);
        for(int lineNum=1;lineNum<=count;lineNum++){
            for(int element=1;element<=lineNum;element++)printf("%d",startFrom);
            startFrom++;
            printf("\n");
        }
        for(int lineNum=count;lineNum>=1;lineNum--){
            startFrom--;//startFrom has become 7
            for(int element=1;element<=lineNum;element++)printf("%d",startFrom);
            printf("\n");
        }

    }

    return 0;
}
