#include <stdio.h> 
int main()
{
    int n,i;
    scanf("%d",&n);
    int nums;
    for(i=0;i<n;i++)
    {
       scanf("%d",&nums);
       printf("%d\n",nums*nums+nums);
    }
    return 0;
}
