#include<stdio.h>
int main()
{
    int n,prev,smallest;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    prev = num[0];
    if(num[0]<num[n-1])printf("%d",num[0]);//compare first with last element - ascending order
    else{
    for(int i=1;i<n;i++){
        if(num[i]<prev)smallest=num[i];
        prev = num[i];
    }
    if(smallest>num[n-1])smallest=num[n-1];
    printf("%d",smallest);

    }

    return 0;
}
