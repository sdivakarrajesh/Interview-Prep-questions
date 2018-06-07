#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i-count]);
        if(num[i-count]==0) {
         num[n-1-count] = 0;
         count++;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",num[i]);
    }

    return 0;
}
