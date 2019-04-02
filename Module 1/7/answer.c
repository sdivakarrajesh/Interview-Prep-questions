#include<stdio.h>
int main(){
    int n,min;
    scanf("%d",&n);
    int num1,num2,num3;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&num1, &num2, &num3);
        min=0;
        min = num1<num2? num1:num2;
        min = min<num3? min:num3;
        printf("Smallest of %d, %d, %d is %d\n",num1,num2,num3,min);
    }
    return 0;
}
