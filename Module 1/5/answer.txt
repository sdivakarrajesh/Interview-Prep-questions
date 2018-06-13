#include<stdio.h>
int main()
{
int n,max;
scanf("%d",&n);
int nums[3*n];
for(int i =0;i<(3*n);i++)
{
    scanf("%d",&nums[i]);
}
for(int i =0;i<(3*n);i=i+3)
{
    max=0;
    max = nums[i]>nums[i+1]? nums[i]:nums[i+1];
    max = max>nums[i+2]? max:nums[i+2];
    printf("Largest of %d, %d, %d is %d\n",nums[i],nums[i+1],nums[i+2],max);
}
    return 0;
}
