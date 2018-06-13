#include <stdio.h>
int main() {

    int n;
    scanf("%d",&n);
    long long int nums[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&nums[i]);
    }
    for(int i=0;i<n;i++)
    {
        (nums[i]&1 && printf("ODD\n")) || printf("EVEN\n");
    }
    return 0;
}
