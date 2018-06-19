#include<stdio.h>
int main() 
{
    int n,count1=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0){
            printf("0 ");
        }
        if(arr[i]==1){
            count1++;
        }
    }
    for(int i =0;i<count1;i++){
        printf("1 ");
    }
    return 0;
}
// This program is just for printing -> to segregate use two friends algorithm