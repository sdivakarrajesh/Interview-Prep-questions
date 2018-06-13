#include<stdio.h>
int main()
{
int n,max;
scanf("%d",&n);
int nums[4*n];
for(int i =0;i<(4*n);i++)
{
    scanf("%d",&nums[i]);
}
for(int i =0;i<(4*n);i=i+4)
{
    max=0;
    max = nums[i]>nums[i+1]? nums[i]:nums[i+1];
    max = max>nums[i+2]? max:nums[i+2];
    max = max>nums[i+3]? max:nums[i+3];
    printf("Largest of %d, %d, %d, %d is %d\n",nums[i],nums[i+1],nums[i+2],nums[i+3],max);
}
    return 0;
}
