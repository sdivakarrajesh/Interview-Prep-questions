#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int num;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        int rev=0;
        while(num!=0)
        {
            rev = (rev*10)+num%10;
            num = num/10;
        }
        printf("%d\n",rev);
    }
    return 0;
}
