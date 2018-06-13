#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n>=2 && arr[0]>=arr[1])printf("%d\n",arr[0]);
    for(int i=1;i<n-1;i++){
    if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])printf("%d\n",arr[i]);
    }
    if(n>2 && arr[n-1]>arr[n-2])printf("%d",arr[n-1]);
    return 0;
}
