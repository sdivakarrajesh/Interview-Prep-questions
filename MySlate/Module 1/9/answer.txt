#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int nums[4*n];
for(int i =0;i<(4*n);i++)
{
    scanf("%d",&nums[i]);
}
for(int i =0;i<(4*n);i=i+4)
{
    int min;
    min = nums[i]<nums[i+1]? nums[i]:nums[i+1];
    min = min<nums[i+2]? min:nums[i+2];
    min = min<nums[i+3]? min:nums[i+3];
    printf("Smallest of %d, %d, %d, %d is %d\n",nums[i],nums[i+1],nums[i+2],nums[i+3],min);
}
    return 0;
}
