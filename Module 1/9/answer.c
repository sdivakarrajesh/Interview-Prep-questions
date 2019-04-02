#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num1,num2,num3,num4;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d %d",&num1, &num2, &num3, &num4);
        int min;
        min = num1<num2? num1:num2;
        min = min<num3? min:num3;
        min = min<num4? min:num4;
        printf("Smallest of %d, %d, %d, %d is %d\n",num1,num2,num3,num4,min);
    }
    return 0;
}
