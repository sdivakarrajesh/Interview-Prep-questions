#include<stdio.h>
int main()
{
    int n,max;
    scanf("%d",&n);
    int num1,num2,num3;
    for(int i =0;i<n;i++)
    {
        scanf("%d %d %d",&num1, &num2, &num3);
        max=0;
        max = num1>num2? num1:num2;
        max = max>num3? max:num3;
        printf("Largest of %d, %d, %d is %d\n",num1,num2,num3,max);
    }
    return 0;
}
