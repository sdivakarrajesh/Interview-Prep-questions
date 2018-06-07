#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int nums[2*n];
for(int i =0;i<(2*n);i++)
{
    scanf("%d",&nums[i]);
}
for(int i =0;i<(2*n);i=i+2)
{
    nums[i]>nums[i+1]? printf("%d > %d\n",nums[i],nums[i+1]):printf("%d > %d\n",nums[i+1],nums[i]);
}
    return 0;
}
