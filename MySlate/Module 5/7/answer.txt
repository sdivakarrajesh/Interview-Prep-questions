#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n],ans[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int position =0;position<n;position++){
        if(position==0)ans[0] = arr[0]*arr[1];
        else if(position==n-1)ans[n-1] = arr[n-1]*arr[n-2];
        else ans[position] = arr[position-1]*arr[position+1];
    }
    for(int i =0;i<n;i++)printf("%d ",ans[i]);
    return 0;
}
