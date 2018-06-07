#include<stdio.h>
int main()
{
int n,min;
scanf("%d",&n);
int nums[3*n];
for(int i =0;i<(3*n);i++)
{
    scanf("%d",&nums[i]);
}
for(int i =0;i<(3*n);i=i+3)
{
    min=0;
    min = nums[i]<nums[i+1]? nums[i]:nums[i+1];
    min = min<nums[i+2]? min:nums[i+2];
    printf("Smallest of %d, %d, %d is %d\n",nums[i],nums[i+1],nums[i+2],min);
}
    return 0;
}
