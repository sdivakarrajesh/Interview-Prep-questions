#include<stdio.h>
void swap(int *n1,int *n2){
int temp =*n1;
*n1=*n2;
*n2=temp;
return;
}
int main()
{
    int n,nextGreater=1;
    scanf("%d",&n);
    int nums[n];
    for(int i =0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    for(int i=0;i<n-1;i++){
        if(nextGreater==1){
            if(nums[i]>nums[i+1])
                swap(&nums[i],&nums[i+1]);
        }
        else{
            if(nums[i]<nums[i+1])
                swap(&nums[i],&nums[i+1]);
        }
        nextGreater = (nextGreater==1)?0:1;
    }
    for(int i=0;i<n;i++)printf("%d ", nums[i]);
    return 0;
}

