#include <stdio.h> 
int main()
{
    int n,i;
    scanf("%d",&n);
    int nums[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    for(i=0;i<n;i++)
    {
       printf("%d\n",nums[i]*nums[i]); 
    }
    return 0;
}
