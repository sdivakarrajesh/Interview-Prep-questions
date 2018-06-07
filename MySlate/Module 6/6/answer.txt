#include<stdio.h>
int main()
{
    int n,k,max=0,maxNum=0;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        arr[arr[i]%k] += k;
    }
    max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            maxNum=i;
        }
    }
    printf("%d",maxNum);
    return 0;
}
