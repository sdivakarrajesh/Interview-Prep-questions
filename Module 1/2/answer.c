#include <stdio.h> 
int main()
{
    int n,i;
    scanf("%d",&n);
    int nums;
    for(i=0;i<n;i++)
    {
       scanf("%d",&nums);
       printf("%d\n",nums*nums); // for first n odd numbers -> sum = n square
    }
    return 0;
}
