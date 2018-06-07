#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n],ans[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int position =0;position<n;position++){
        ans[arr[position]] = position;
    }
    for(int i =0;i<n;i++)printf("%d ",ans[i]);
    return 0;
}
