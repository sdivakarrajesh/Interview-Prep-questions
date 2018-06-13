#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int nums[n];
    for(int i=0;i<n;i++)
    {scanf("%d",&nums[i]);}
    for(int i=0;i<n;i++)
    {
        if((nums[i]&(nums[i]-1))==0)
           {
               printf("YES\n");
           }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
