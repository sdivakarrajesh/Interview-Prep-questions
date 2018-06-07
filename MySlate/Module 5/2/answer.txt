#include<stdio.h>
void swap(int *n1,int *n2){
int temp=*n1;
*n1=*n2;
*n2=temp;
return;
}
int main() {
    int n,count1=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0;i<n-1;i++){
        while(i>=0){
            if(arr[i]%2==1&&arr[i+1]%2==0)
            {
                swap(&arr[i],&arr[i+1]);
                i--;
            }
            else break;
        }
    }
    for(int i=0;i<n;i++)printf("%d ",arr[i]);
    return 0;
}
