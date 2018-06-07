#include<stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    int nums[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    for(int i=0;i<n;i++)
    {
        int rev=0;
        while(nums[i])
        {
            rev = (rev*10)+nums[i]%10;
            nums[i] =   nums[i]/10;
        }
        printf("%d\n",rev);
    }
    return 0;
}
