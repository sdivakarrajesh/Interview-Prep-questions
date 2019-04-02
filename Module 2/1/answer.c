#include <stdio.h>
int main() {

    int n;
    scanf("%d",&n);
    long long int num;
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&num);
        (num&1 && printf("ODD\n")) || printf("EVEN\n");
		//(num&1)?printf("ODD\n"):printf("EVEN\n");
    }
    return 0;
}
