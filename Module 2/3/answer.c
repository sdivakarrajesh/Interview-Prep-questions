#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int num;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        ((num & num - 1) == 0) ? printf("YES\n") : printf("NO\n"); //check in binary -> bitwise AND
    }
    return 0;
}
