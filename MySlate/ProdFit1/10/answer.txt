#include<stdio.h>
int main()
{
    int n,max=0,sum=0,start,end,startIndex;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;){
        if(arr[i]>=0){
            startIndex = i;
            while(arr[i]>0&&i<n){
            sum = sum+arr[i];
            i++;
            }
        }
        if(sum>max){
             max  = sum;
             end =  i-1;
             start = startIndex;
            }
        if(arr[i]<0&&i<n){
            sum = 0;
            while(arr[i]<0)i++;
        }
    }
    printf("{%d",arr[start]);
    for(int i=start+1;i<=end;i++){printf(",%d",arr[i]);}
    printf("} ");
    printf("%d",max);
    return 0;
}

